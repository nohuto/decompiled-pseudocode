/*
 * XREFs of NtSaveMergedKeys @ 0x1405FAD88
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwSaveMergedKeys @ 0x14015D010 (ZwSaveMergedKeys.c)
 *     CmObReferenceObjectByHandle @ 0x1404025CC (CmObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     CmConvertHandleToKernelHandle @ 0x1404A43A8 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x1404A4760 (CmCheckNoTxContext.c)
 *     CmSaveMergedKeys @ 0x14060CF28 (CmSaveMergedKeys.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1406235F8 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v10; // ebx
  KPROCESSOR_MODE PreviousMode; // di
  void *v12; // rdx
  void *v13; // r8
  void *v14; // rdx
  HANDLE v15; // rdi
  void *v16; // r8
  HANDLE HighPrecedenceKeyHandlea; // [rsp+30h] [rbp-20h] BYREF
  HANDLE FileHandlea; // [rsp+38h] [rbp-18h] BYREF
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  PVOID v21; // [rsp+48h] [rbp-8h] BYREF
  HANDLE LowPrecedenceKeyHandlea; // [rsp+98h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v10 = CmCheckNoTxContext();
    if ( v10 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
      {
        ExReleaseRundownProtection(&CmpShutdownRundown);
        v10 = -1073741727;
        goto LABEL_21;
      }
      if ( PreviousMode == 1 )
      {
        HighPrecedenceKeyHandlea = 0LL;
        LowPrecedenceKeyHandlea = 0LL;
        FileHandlea = 0LL;
        v10 = CmConvertHandleToKernelHandle(HighPrecedenceKeyHandle, v12, 1, 0, &HighPrecedenceKeyHandlea);
        if ( v10 >= 0 )
        {
          v10 = CmConvertHandleToKernelHandle(LowPrecedenceKeyHandle, v14, 1, 0, &LowPrecedenceKeyHandlea);
          if ( v10 >= 0 )
          {
            v10 = IoConvertFileHandleToKernelHandle((int)FileHandle, &FileHandlea);
            if ( v10 >= 0 )
            {
              v15 = FileHandlea;
              v10 = ZwSaveMergedKeys(HighPrecedenceKeyHandlea, LowPrecedenceKeyHandlea, FileHandlea);
              if ( v15 )
                ZwClose(v15);
            }
            if ( LowPrecedenceKeyHandlea )
              ZwClose(LowPrecedenceKeyHandlea);
          }
          if ( HighPrecedenceKeyHandlea )
            ZwClose(HighPrecedenceKeyHandlea);
        }
      }
      else
      {
        v10 = CmObReferenceObjectByHandle(HighPrecedenceKeyHandle, 0, v13, PreviousMode, &v21, 0LL);
        if ( v10 >= 0 )
        {
          v10 = CmObReferenceObjectByHandle(LowPrecedenceKeyHandle, 0, v16, PreviousMode, &Object, 0LL);
          if ( v10 >= 0 )
          {
            v10 = CmSaveMergedKeys(v21, Object, FileHandle);
            ObfDereferenceObject(Object);
          }
          ObfDereferenceObject(v21);
        }
      }
    }
    ExReleaseRundownProtection(&CmpShutdownRundown);
    goto LABEL_21;
  }
  v10 = -1073741431;
LABEL_21:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  return v10;
}

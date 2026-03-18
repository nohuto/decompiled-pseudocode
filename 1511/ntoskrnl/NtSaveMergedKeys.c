/*
 * XREFs of NtSaveMergedKeys @ 0x1405DCE34
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSaveMergedKeys @ 0x1401533A0 (ZwSaveMergedKeys.c)
 *     CmConvertHandleToKernelHandle @ 0x1403DBDEC (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x1403DC18C (CmCheckNoTxContext.c)
 *     CmObReferenceObjectByHandle @ 0x1403F3664 (CmObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     CmSaveMergedKeys @ 0x1405EA0F8 (CmSaveMergedKeys.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1405F9BCC (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // edi
  KPROCESSOR_MODE PreviousMode; // bl
  void *v9; // rdx
  void *v10; // r8
  void *v11; // rdx
  HANDLE v12; // rbx
  void *v13; // r8
  int v14; // eax
  PVOID v15; // rsi
  PVOID v16; // rbx
  HANDLE HighPrecedenceKeyHandlea; // [rsp+30h] [rbp-20h] BYREF
  HANDLE FileHandlea; // [rsp+38h] [rbp-18h] BYREF
  PVOID v20; // [rsp+40h] [rbp-10h] BYREF
  PVOID Object; // [rsp+48h] [rbp-8h] BYREF
  HANDLE LowPrecedenceKeyHandlea; // [rsp+98h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v7 = CmCheckNoTxContext();
    if ( v7 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
      {
        ExReleaseRundownProtection_0(&CmpShutdownRundown);
        v7 = -1073741727;
        goto LABEL_21;
      }
      if ( PreviousMode == 1 )
      {
        HighPrecedenceKeyHandlea = 0LL;
        LowPrecedenceKeyHandlea = 0LL;
        FileHandlea = 0LL;
        v7 = CmConvertHandleToKernelHandle(HighPrecedenceKeyHandle, v9, 1, 0, &HighPrecedenceKeyHandlea);
        if ( v7 >= 0 )
        {
          v7 = CmConvertHandleToKernelHandle(LowPrecedenceKeyHandle, v11, 1, 0, &LowPrecedenceKeyHandlea);
          if ( v7 >= 0 )
          {
            v7 = IoConvertFileHandleToKernelHandle((int)FileHandle, &FileHandlea);
            if ( v7 >= 0 )
            {
              v12 = FileHandlea;
              v7 = ZwSaveMergedKeys(HighPrecedenceKeyHandlea, LowPrecedenceKeyHandlea, FileHandlea);
              if ( v12 )
                ZwClose(v12);
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
        v7 = CmObReferenceObjectByHandle(HighPrecedenceKeyHandle, 0, v10, PreviousMode, &v20, 0LL);
        if ( v7 >= 0 )
        {
          v14 = CmObReferenceObjectByHandle(LowPrecedenceKeyHandle, 0, v13, PreviousMode, &Object, 0LL);
          v15 = v20;
          v7 = v14;
          if ( v14 >= 0 )
          {
            v16 = Object;
            v7 = CmSaveMergedKeys(*((_QWORD *)v20 + 1), *((_QWORD *)Object + 1), FileHandle);
            ObfDereferenceObject(v16);
          }
          ObfDereferenceObject(v15);
        }
      }
    }
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    goto LABEL_21;
  }
  v7 = -1073741431;
LABEL_21:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v7;
}

/*
 * XREFs of NtSaveKey @ 0x1405DC954
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSaveKey @ 0x140153360 (ZwSaveKey.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmConvertHandleToKernelHandle @ 0x1403DBDEC (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x1403DC18C (CmCheckNoTxContext.c)
 *     CmObReferenceObjectByHandle @ 0x1403F3664 (CmObReferenceObjectByHandle.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     CmSaveKey @ 0x1405E9ED0 (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1405F9BCC (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  void *v7; // rdx
  void *v8; // r8
  HANDLE v9; // rdi
  struct _KTHREAD *v10; // rax
  PVOID *v11; // rdi
  unsigned int v12; // eax
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v16[7]; // [rsp+48h] [rbp-38h] BYREF
  HANDLE KeyHandlea; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE FileHandlea; // [rsp+C8h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v5 = CmCheckNoTxContext();
    if ( v5 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
      {
        ExReleaseRundownProtection_0(&CmpShutdownRundown);
        v5 = -1073741727;
        goto LABEL_23;
      }
      if ( PreviousMode == 1 )
      {
        KeyHandlea = 0LL;
        FileHandlea = 0LL;
        v5 = CmConvertHandleToKernelHandle(KeyHandle, v7, 1, 0, &KeyHandlea);
        if ( v5 >= 0 )
        {
          v5 = IoConvertFileHandleToKernelHandle((int)FileHandle, &FileHandlea);
          if ( v5 >= 0 )
          {
            v9 = FileHandlea;
            v5 = ZwSaveKey(KeyHandlea, FileHandlea);
            if ( v9 )
              ZwClose(v9);
          }
          if ( KeyHandlea )
            ZwClose(KeyHandlea);
        }
      }
      else
      {
        v5 = CmObReferenceObjectByHandle(KeyHandle, 0, v8, PreviousMode, &Object, 0LL);
        if ( v5 >= 0 )
        {
          memset(v16, 0, 48);
          v15[1] = v15;
          v15[0] = v15;
          v10 = KeGetCurrentThread();
          --v10->KernelApcDisable;
          v11 = (PVOID *)Object;
          if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
          {
            v16[0] = v11;
            v16[1] = FileHandle;
            LODWORD(v16[2]) = 1;
            v5 = CmpCallCallBacks(0x2Bu, (__int64)v16, 1, 0x2Cu, 0LL, (__int64)v15);
          }
          if ( v5 < 0 )
          {
            if ( v5 == -1073740541 )
              v5 = 0;
          }
          else
          {
            v12 = CmSaveKey(v11[1]);
            v5 = CmPostCallbackNotification(0x2Cu, (__int64)v11, v12, (__int64)v16, v15);
          }
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Object);
        }
      }
    }
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    goto LABEL_23;
  }
  v5 = -1073741431;
LABEL_23:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}

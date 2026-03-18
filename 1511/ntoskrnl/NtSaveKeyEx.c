/*
 * XREFs of NtSaveKeyEx @ 0x1405DCB94
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSaveKeyEx @ 0x140153380 (ZwSaveKeyEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmConvertHandleToKernelHandle @ 0x1403DBDEC (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x1403DC18C (CmCheckNoTxContext.c)
 *     CmObReferenceObjectByHandle @ 0x1403F3664 (CmObReferenceObjectByHandle.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     CmDumpKey @ 0x1405E943C (CmDumpKey.c)
 *     CmSaveKey @ 0x1405E9ED0 (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1405F9BCC (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  void *v9; // rdx
  void *v10; // r8
  ULONG v11; // r8d
  HANDLE v12; // rdi
  struct _KTHREAD *v13; // rax
  _QWORD *v14; // rsi
  void *v15; // rcx
  unsigned int v16; // eax
  HANDLE FileHandlea; // [rsp+30h] [rbp-50h] BYREF
  PVOID Object; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v21[6]; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandlea; // [rsp+C8h] [rbp+48h] BYREF

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
        goto LABEL_29;
      }
      if ( ((Flags - 1) & 0xFFFFFFFC) != 0 || Flags == 3 )
      {
        ExReleaseRundownProtection_0(&CmpShutdownRundown);
        v7 = -1073741811;
        goto LABEL_29;
      }
      if ( PreviousMode == 1 )
      {
        KeyHandlea = 0LL;
        FileHandlea = 0LL;
        v7 = CmConvertHandleToKernelHandle(KeyHandle, v9, 1, 0, &KeyHandlea);
        if ( v7 >= 0 )
        {
          v7 = IoConvertFileHandleToKernelHandle((int)FileHandle, &FileHandlea);
          if ( v7 >= 0 )
          {
            v11 = Flags;
            v12 = FileHandlea;
            v7 = ZwSaveKeyEx(KeyHandlea, FileHandlea, v11);
            if ( v12 )
              ZwClose(v12);
          }
          if ( KeyHandlea )
            ZwClose(KeyHandlea);
        }
      }
      else
      {
        v7 = CmObReferenceObjectByHandle(KeyHandle, 0, v10, PreviousMode, &Object, 0LL);
        if ( v7 >= 0 )
        {
          memset(v21, 0, sizeof(v21));
          v20[1] = v20;
          v20[0] = v20;
          v13 = KeGetCurrentThread();
          --v13->KernelApcDisable;
          v14 = Object;
          if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
          {
            v21[0] = v14;
            v21[1] = FileHandle;
            LODWORD(v21[2]) = Flags;
            v7 = CmpCallCallBacks(0x2Bu, (__int64)v21, 1, 0x2Cu, 0LL, (__int64)v20);
          }
          if ( v7 < 0 )
          {
            if ( v7 == -1073740541 )
              v7 = 0;
          }
          else
          {
            v15 = (void *)v14[1];
            if ( Flags == 4 )
              v16 = CmDumpKey(v15, FileHandle);
            else
              v16 = CmSaveKey(v15);
            v7 = CmPostCallbackNotification(0x2Cu, (__int64)v14, v16, (__int64)v21, v20);
          }
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Object);
        }
      }
    }
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
  }
  else
  {
    v7 = -1073741431;
  }
LABEL_29:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v7;
}

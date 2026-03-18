/*
 * XREFs of NtRestoreKey @ 0x1405DC6C0
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwRestoreKey @ 0x140153280 (ZwRestoreKey.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmConvertHandleToKernelHandle @ 0x1403DBDEC (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x1403DC18C (CmCheckNoTxContext.c)
 *     CmObReferenceObjectByHandle @ 0x1403F3664 (CmObReferenceObjectByHandle.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1405F9BCC (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG RestoreFlags)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  char v8; // di
  KPROCESSOR_MODE PreviousMode; // bl
  void *v10; // rdx
  void *v11; // r8
  HANDLE v12; // rdi
  PVOID v13; // rax
  struct _KTHREAD *v14; // rax
  unsigned int v15; // eax
  HANDLE KeyHandlea; // [rsp+30h] [rbp-50h] BYREF
  HANDLE FileHandlea; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v20[6]; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v7 = -1073741431;
LABEL_26:
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v7;
  }
  v8 = 1;
  v7 = CmCheckNoTxContext();
  if ( v7 < 0 )
  {
LABEL_25:
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    goto LABEL_26;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    v7 = -1073741727;
    goto LABEL_26;
  }
  if ( PreviousMode == 1 )
  {
    KeyHandlea = 0LL;
    FileHandlea = 0LL;
    v7 = CmConvertHandleToKernelHandle(KeyHandle, v10, 1, 0, &KeyHandlea);
    if ( v7 >= 0 )
    {
      v7 = IoConvertFileHandleToKernelHandle((int)FileHandle, &FileHandlea);
      if ( v7 >= 0 )
      {
        v12 = FileHandlea;
        v7 = ZwRestoreKey(KeyHandlea, FileHandlea, RestoreFlags);
        if ( v12 )
          ZwClose(v12);
      }
      if ( KeyHandlea )
        ZwClose(KeyHandlea);
    }
    goto LABEL_25;
  }
  v7 = CmObReferenceObjectByHandle(KeyHandle, 0, v11, PreviousMode, &Object, 0LL);
  if ( v7 < 0 )
    goto LABEL_25;
  v13 = Object;
  if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) == 0 )
  {
    memset(v20, 0, sizeof(v20));
    v19[1] = v19;
    v19[0] = v19;
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
    {
      v20[0] = Object;
      v20[1] = FileHandle;
      LODWORD(v20[2]) = RestoreFlags;
      v7 = CmpCallCallBacks(0x29u, (__int64)v20, 1, 0x2Au, 0LL, (__int64)v19);
    }
    if ( v7 < 0 )
    {
      if ( v7 == -1073740541 )
        v7 = 0;
    }
    else
    {
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v8 = 0;
      v15 = CmRestoreKey(Object, FileHandle, RestoreFlags);
      v7 = CmPostCallbackNotification(0x2Au, (__int64)Object, v15, (__int64)v20, v19);
    }
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v13 = Object;
  }
  else
  {
    v7 = -1073741790;
  }
  ObfDereferenceObject(v13);
  if ( v8 )
    goto LABEL_25;
  return v7;
}

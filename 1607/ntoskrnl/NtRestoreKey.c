/*
 * XREFs of NtRestoreKey @ 0x1405FA624
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwRestoreKey @ 0x14015CED0 (ZwRestoreKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmObReferenceObjectByHandle @ 0x1404025CC (CmObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmConvertHandleToKernelHandle @ 0x1404A43A8 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x1404A4760 (CmCheckNoTxContext.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1406235F8 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG RestoreFlags)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v10; // ebx
  char v11; // di
  KPROCESSOR_MODE PreviousMode; // bl
  void *v13; // rdx
  void *v14; // r8
  HANDLE v15; // rdi
  PVOID v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  HANDLE KeyHandlea; // [rsp+30h] [rbp-50h] BYREF
  HANDLE FileHandlea; // [rsp+38h] [rbp-48h] BYREF
  _SLIST_ENTRY v28; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v29[6]; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v10 = -1073741431;
LABEL_26:
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
    return v10;
  }
  v11 = 1;
  v10 = CmCheckNoTxContext();
  if ( v10 < 0 )
  {
LABEL_25:
    ExReleaseRundownProtection(&CmpShutdownRundown);
    goto LABEL_26;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    v10 = -1073741727;
    goto LABEL_26;
  }
  if ( PreviousMode == 1 )
  {
    KeyHandlea = 0LL;
    FileHandlea = 0LL;
    v10 = CmConvertHandleToKernelHandle(KeyHandle, v13, 1, 0, &KeyHandlea);
    if ( v10 >= 0 )
    {
      v10 = IoConvertFileHandleToKernelHandle((int)FileHandle, &FileHandlea);
      if ( v10 >= 0 )
      {
        v15 = FileHandlea;
        v10 = ZwRestoreKey(KeyHandlea, FileHandlea, RestoreFlags);
        if ( v15 )
          ZwClose(v15);
      }
      if ( KeyHandlea )
        ZwClose(KeyHandlea);
    }
    goto LABEL_25;
  }
  v10 = CmObReferenceObjectByHandle(KeyHandle, 0, v14, PreviousMode, &Object, 0LL);
  if ( v10 < 0 )
    goto LABEL_25;
  v16 = Object;
  if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) == 0 )
  {
    memset(v29, 0, sizeof(v29));
    *((_QWORD *)&v28.Next + 1) = &v28;
    v28.Next = &v28;
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
    {
      v29[0] = Object;
      v29[1] = FileHandle;
      LODWORD(v29[2]) = RestoreFlags;
      v10 = CmpCallCallBacks(0x29u, (__int64)v29, 1, 0x2Au, 0LL, &v28);
    }
    if ( v10 < 0 )
    {
      if ( v10 == -1073740541 )
        v10 = 0;
    }
    else
    {
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
      v11 = 0;
      v24 = CmRestoreKey(Object, FileHandle, RestoreFlags);
      v10 = CmPostCallbackNotification(42, (__int64)Object, v24, (__int64)v29, &v28);
    }
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
    v16 = Object;
  }
  else
  {
    v10 = -1073741790;
  }
  ObfDereferenceObject(v16);
  if ( v11 )
    goto LABEL_25;
  return v10;
}

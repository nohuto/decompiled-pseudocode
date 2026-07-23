/*
 * XREFs of NtSaveKey @ 0x1405FA8B4
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwSaveKey @ 0x14015CFD0 (ZwSaveKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmObReferenceObjectByHandle @ 0x1404025CC (CmObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmConvertHandleToKernelHandle @ 0x1404A43A8 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x1404A4760 (CmCheckNoTxContext.c)
 *     CmSaveKey @ 0x14060CCD0 (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1406235F8 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  NTSTATUS v8; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  void *v10; // rdx
  void *v11; // r8
  HANDLE v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *v16; // rax
  PVOID v17; // rdi
  unsigned int v18; // eax
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  _SLIST_ENTRY v21; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v22[7]; // [rsp+48h] [rbp-38h] BYREF
  HANDLE KeyHandlea; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE FileHandlea; // [rsp+C8h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v8 = CmCheckNoTxContext();
    if ( v8 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
      {
        ExReleaseRundownProtection(&CmpShutdownRundown);
        v8 = -1073741727;
        goto LABEL_23;
      }
      if ( PreviousMode == 1 )
      {
        KeyHandlea = 0LL;
        FileHandlea = 0LL;
        v8 = CmConvertHandleToKernelHandle(KeyHandle, v10, 1, 0, &KeyHandlea);
        if ( v8 >= 0 )
        {
          v8 = IoConvertFileHandleToKernelHandle((int)FileHandle, &FileHandlea);
          if ( v8 >= 0 )
          {
            v12 = FileHandlea;
            v8 = ZwSaveKey(KeyHandlea, FileHandlea);
            if ( v12 )
              ZwClose(v12);
          }
          if ( KeyHandlea )
            ZwClose(KeyHandlea);
        }
      }
      else
      {
        v8 = CmObReferenceObjectByHandle(KeyHandle, 0, v11, PreviousMode, &Object, 0LL);
        if ( v8 >= 0 )
        {
          memset(v22, 0, 0x30uLL);
          *((_QWORD *)&v21.Next + 1) = &v21;
          v21.Next = &v21;
          v16 = KeGetCurrentThread();
          --v16->KernelApcDisable;
          v17 = Object;
          if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
          {
            v22[0] = v17;
            v22[1] = FileHandle;
            LODWORD(v22[2]) = 1;
            v8 = CmpCallCallBacks(0x2Bu, (__int64)v22, 1, 0x2Cu, 0LL, &v21);
          }
          if ( v8 < 0 )
          {
            if ( v8 == -1073740541 )
              v8 = 0;
          }
          else
          {
            v18 = CmSaveKey(v17, FileHandle, 3LL);
            v8 = CmPostCallbackNotification(44, (__int64)v17, v18, (__int64)v22, &v21);
          }
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
          ObfDereferenceObject(Object);
        }
      }
    }
    ExReleaseRundownProtection(&CmpShutdownRundown);
    goto LABEL_23;
  }
  v8 = -1073741431;
LABEL_23:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
  return v8;
}

/*
 * XREFs of NtSaveKey @ 0x1406519CC
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwSaveKey @ 0x140181CD0 (ZwSaveKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmObReferenceObjectByHandle @ 0x140428ADC (CmObReferenceObjectByHandle.c)
 *     CmConvertHandleToKernelHandle @ 0x1404455C0 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x140445960 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     CmSaveKey @ 0x140661710 (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140673E58 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v5; // rtt
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax
  NTSTATUS v9; // ebx
  bool v10; // zf
  unsigned __int64 v11; // rtt
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  KPROCESSOR_MODE PreviousMode; // bl
  void *v15; // rdx
  void *v16; // r8
  unsigned __int64 v17; // rtt
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  HANDLE v20; // rdi
  unsigned __int64 v21; // rtt
  struct _KTHREAD *v22; // rcx
  _QWORD *v23; // rdi
  unsigned int v24; // eax
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  unsigned __int64 v27; // rtt
  __int16 v28; // ax
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v31[6]; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandlea; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE FileHandlea; // [rsp+C8h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v5 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v5 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v6 = KeGetCurrentThread();
    v7 = v6->KernelApcDisable + 1;
    v6->KernelApcDisable = v7;
    if ( !v7
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
      && !v6->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return -1073741431;
  }
  v9 = CmCheckNoTxContext();
  if ( v9 < 0 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v11 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    v10 = v11 == _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpShutdownRundown,
                   (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                   CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL);
    goto LABEL_10;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
  {
    if ( PreviousMode != 1 )
    {
      v9 = CmObReferenceObjectByHandle(KeyHandle, 0, v16, PreviousMode, &Object, 0LL);
      if ( v9 >= 0 )
      {
        memset(v31, 0, sizeof(v31));
        v30[1] = v30;
        v30[0] = v30;
        v22 = KeGetCurrentThread();
        --v22->KernelApcDisable;
        v23 = Object;
        if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
        {
          v31[0] = v23;
          v31[1] = FileHandle;
          LODWORD(v31[2]) = 1;
          v9 = CmpCallCallBacks(0x2Bu, (__int64)v31, 1, 44LL, 0LL, (__int64)v30);
        }
        if ( v9 < 0 )
        {
          if ( v9 == -1073740541 )
            v9 = 0;
        }
        else
        {
          v24 = CmSaveKey(v23[1], FileHandle, 3LL);
          v9 = CmPostCallbackNotification(44, (__int64)v23, v24, (__int64)v31, v30);
        }
        v25 = KeGetCurrentThread();
        v26 = v25->KernelApcDisable + 1;
        v25->KernelApcDisable = v26;
        if ( !v26
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
          && !v25->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ObfDereferenceObject(Object);
      }
      _m_prefetchw(&CmpShutdownRundown);
      v27 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v27 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v12 = KeGetCurrentThread();
      v28 = v12->KernelApcDisable + 1;
      v12->KernelApcDisable = v28;
      if ( v28 )
        return v9;
LABEL_46:
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
        && !v12->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return v9;
    }
    KeyHandlea = 0LL;
    FileHandlea = 0LL;
    v9 = CmConvertHandleToKernelHandle(KeyHandle, v15, 1, 0, &KeyHandlea);
    if ( v9 >= 0 )
    {
      v9 = IoConvertFileHandleToKernelHandle((int)FileHandle, &FileHandlea);
      if ( v9 >= 0 )
      {
        v20 = FileHandlea;
        v9 = ZwSaveKey(KeyHandlea, FileHandlea);
        if ( v20 )
          ZwClose(v20);
      }
      if ( KeyHandlea )
        ZwClose(KeyHandlea);
    }
    _m_prefetchw(&CmpShutdownRundown);
    v21 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    v10 = v21 == _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpShutdownRundown,
                   (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                   CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_10:
    if ( !v10 )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v12 = KeGetCurrentThread();
    v13 = v12->KernelApcDisable + 1;
    v12->KernelApcDisable = v13;
    if ( v13 )
      return v9;
    goto LABEL_46;
  }
  _m_prefetchw(&CmpShutdownRundown);
  v17 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v17 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return -1073741727;
}

/*
 * XREFs of NtRestoreKey @ 0x140651558
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwRestoreKey @ 0x140181BF0 (ZwRestoreKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmObReferenceObjectByHandle @ 0x140428ADC (CmObReferenceObjectByHandle.c)
 *     CmConvertHandleToKernelHandle @ 0x1404455C0 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x140445960 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140673E58 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG RestoreFlags)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // rtt
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  char v11; // di
  NTSTATUS v12; // ebx
  bool v13; // zf
  unsigned __int64 v14; // rtt
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  KPROCESSOR_MODE PreviousMode; // bl
  void *v18; // rdx
  void *v19; // r8
  unsigned __int64 v20; // rtt
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  HANDLE v23; // rdi
  unsigned __int64 v24; // rtt
  struct _KTHREAD *v25; // rax
  unsigned __int64 v26; // rtt
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  unsigned int v29; // eax
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  unsigned __int64 v32; // rtt
  __int16 v33; // ax
  HANDLE KeyHandlea; // [rsp+38h] [rbp-29h] BYREF
  HANDLE FileHandlea[2]; // [rsp+40h] [rbp-21h] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v37[7]; // [rsp+60h] [rbp-1h] BYREF
  PVOID Object; // [rsp+E0h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v7 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v7 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v8 = KeGetCurrentThread();
    v9 = v8->KernelApcDisable + 1;
    v8->KernelApcDisable = v9;
    if ( !v9
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
      && !v8->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return -1073741431;
  }
  v11 = 1;
  v12 = CmCheckNoTxContext();
  if ( v12 < 0 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v14 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    v13 = v14 == _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpShutdownRundown,
                   (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                   CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL);
    goto LABEL_10;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    if ( PreviousMode != 1 )
    {
      v12 = CmObReferenceObjectByHandle(KeyHandle, 0, v19, PreviousMode, &Object, 0LL);
      if ( v12 >= 0 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) == 0 )
        {
          memset(v37, 0, 48);
          v36[1] = v36;
          v36[0] = v36;
          v25 = KeGetCurrentThread();
          --v25->KernelApcDisable;
          if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
          {
            v37[0] = Object;
            v37[1] = FileHandle;
            LODWORD(v37[2]) = RestoreFlags;
            v12 = CmpCallCallBacks(0x29u, (__int64)v37, 1, 42LL, 0LL, (__int64)v36);
          }
          if ( v12 < 0 )
          {
            if ( v12 == -1073740541 )
              v12 = 0;
          }
          else
          {
            _m_prefetchw(&CmpShutdownRundown);
            v26 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v26 != _InterlockedCompareExchange64(
                          (volatile signed __int64 *)&CmpShutdownRundown,
                          (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                          CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
              ExfReleaseRundownProtection(&CmpShutdownRundown);
            v27 = KeGetCurrentThread();
            v28 = v27->KernelApcDisable + 1;
            v27->KernelApcDisable = v28;
            if ( !v28
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
              && !v27->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            v11 = 0;
            v29 = CmRestoreKey(Object, FileHandle, RestoreFlags);
            v12 = CmPostCallbackNotification(42, (__int64)Object, v29, (__int64)v37, v36);
          }
          v30 = KeGetCurrentThread();
          v31 = v30->KernelApcDisable + 1;
          v30->KernelApcDisable = v31;
          if ( !v31
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
            && !v30->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        else
        {
          v12 = -1073741790;
        }
        ObfDereferenceObject(Object);
        if ( !v11 )
          return v12;
      }
      _m_prefetchw(&CmpShutdownRundown);
      v32 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v32 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v15 = KeGetCurrentThread();
      v33 = v15->KernelApcDisable + 1;
      v15->KernelApcDisable = v33;
      if ( v33 )
        return v12;
LABEL_54:
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
        && !v15->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return v12;
    }
    KeyHandlea = 0LL;
    FileHandlea[0] = 0LL;
    v12 = CmConvertHandleToKernelHandle(KeyHandle, v18, 1, 0, &KeyHandlea);
    if ( v12 >= 0 )
    {
      v12 = IoConvertFileHandleToKernelHandle((int)FileHandle, FileHandlea);
      if ( v12 >= 0 )
      {
        v23 = FileHandlea[0];
        v12 = ZwRestoreKey(KeyHandlea, FileHandlea[0], RestoreFlags);
        if ( v23 )
          ZwClose(v23);
      }
      if ( KeyHandlea )
        ZwClose(KeyHandlea);
    }
    _m_prefetchw(&CmpShutdownRundown);
    v24 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    v13 = v24 == _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpShutdownRundown,
                   (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                   CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_10:
    if ( !v13 )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable + 1;
    v15->KernelApcDisable = v16;
    if ( v16 )
      return v12;
    goto LABEL_54;
  }
  _m_prefetchw(&CmpShutdownRundown);
  v20 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v20 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v21 = KeGetCurrentThread();
  v22 = v21->KernelApcDisable + 1;
  v21->KernelApcDisable = v22;
  if ( !v22
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
    && !v21->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return -1073741727;
}

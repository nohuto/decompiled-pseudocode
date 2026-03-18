/*
 * XREFs of NtSaveMergedKeys @ 0x1406521DC
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwSaveMergedKeys @ 0x140181D10 (ZwSaveMergedKeys.c)
 *     CmObReferenceObjectByHandle @ 0x140428ADC (CmObReferenceObjectByHandle.c)
 *     CmConvertHandleToKernelHandle @ 0x1404455C0 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x140445960 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     CmSaveMergedKeys @ 0x140661980 (CmSaveMergedKeys.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140673E58 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // rtt
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  NTSTATUS v11; // ebx
  bool v12; // zf
  unsigned __int64 v13; // rtt
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  KPROCESSOR_MODE PreviousMode; // bl
  void *v17; // rdx
  void *v18; // r8
  unsigned __int64 v19; // rtt
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  void *v22; // rdx
  HANDLE v23; // rdi
  unsigned __int64 v24; // rtt
  NTSTATUS v25; // edi
  void *v26; // r8
  int v27; // eax
  PVOID v28; // rsi
  PVOID v29; // rbx
  unsigned __int64 v30; // rtt
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax
  HANDLE HighPrecedenceKeyHandlea; // [rsp+30h] [rbp-30h] BYREF
  HANDLE FileHandlea; // [rsp+38h] [rbp-28h] BYREF
  PVOID v35; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  HANDLE LowPrecedenceKeyHandlea; // [rsp+A8h] [rbp+48h] BYREF

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
  v11 = CmCheckNoTxContext();
  if ( v11 < 0 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v13 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    v12 = v13 == _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpShutdownRundown,
                   (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                   CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_10:
    if ( !v12 )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v14 = KeGetCurrentThread();
    v15 = v14->KernelApcDisable + 1;
    v14->KernelApcDisable = v15;
    if ( !v15
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
      && !v14->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v11;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
  {
    if ( PreviousMode == 1 )
    {
      HighPrecedenceKeyHandlea = 0LL;
      LowPrecedenceKeyHandlea = 0LL;
      FileHandlea = 0LL;
      v11 = CmConvertHandleToKernelHandle(HighPrecedenceKeyHandle, v17, 1, 0, &HighPrecedenceKeyHandlea);
      if ( v11 >= 0 )
      {
        v11 = CmConvertHandleToKernelHandle(LowPrecedenceKeyHandle, v22, 1, 0, &LowPrecedenceKeyHandlea);
        if ( v11 >= 0 )
        {
          v11 = IoConvertFileHandleToKernelHandle((int)FileHandle, &FileHandlea);
          if ( v11 >= 0 )
          {
            v23 = FileHandlea;
            v11 = ZwSaveMergedKeys(HighPrecedenceKeyHandlea, LowPrecedenceKeyHandlea, FileHandlea);
            if ( v23 )
              ZwClose(v23);
          }
          if ( LowPrecedenceKeyHandlea )
            ZwClose(LowPrecedenceKeyHandlea);
        }
        if ( HighPrecedenceKeyHandlea )
          ZwClose(HighPrecedenceKeyHandlea);
      }
      _m_prefetchw(&CmpShutdownRundown);
      v24 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      v12 = v24 == _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpShutdownRundown,
                     (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                     CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL);
      goto LABEL_10;
    }
    v25 = CmObReferenceObjectByHandle(HighPrecedenceKeyHandle, 0, v18, PreviousMode, &v35, 0LL);
    if ( v25 >= 0 )
    {
      v27 = CmObReferenceObjectByHandle(LowPrecedenceKeyHandle, 0, v26, PreviousMode, &Object, 0LL);
      v28 = v35;
      v25 = v27;
      if ( v27 >= 0 )
      {
        v29 = Object;
        v25 = CmSaveMergedKeys(*((_QWORD *)v35 + 1), *((_QWORD *)Object + 1), FileHandle);
        ObfDereferenceObject(v29);
      }
      ObfDereferenceObject(v28);
    }
    _m_prefetchw(&CmpShutdownRundown);
    v30 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v30 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v31 = KeGetCurrentThread();
    v32 = v31->KernelApcDisable + 1;
    v31->KernelApcDisable = v32;
    if ( !v32
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152
      && !v31->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v25;
  }
  else
  {
    _m_prefetchw(&CmpShutdownRundown);
    v19 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v19 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v20 = KeGetCurrentThread();
    v21 = v20->KernelApcDisable + 1;
    v20->KernelApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return -1073741727;
  }
}

/*
 * XREFs of NtSaveKeyEx @ 0x140651DA0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwSaveKeyEx @ 0x140181CF0 (ZwSaveKeyEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmObReferenceObjectByHandle @ 0x140428ADC (CmObReferenceObjectByHandle.c)
 *     CmConvertHandleToKernelHandle @ 0x1404455C0 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x140445960 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     CmDumpKey @ 0x140660AB4 (CmDumpKey.c)
 *     CmSaveKey @ 0x140661710 (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140673E58 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
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
  unsigned int v22; // r14d
  ULONG v23; // r8d
  HANDLE v24; // rdi
  unsigned __int64 v25; // rtt
  struct _KTHREAD *v26; // rcx
  _QWORD *v27; // rsi
  __int64 v28; // rcx
  unsigned int v29; // eax
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  unsigned __int64 v32; // rtt
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  HANDLE FileHandlea; // [rsp+38h] [rbp-29h] BYREF
  PVOID Object; // [rsp+40h] [rbp-21h] BYREF
  _QWORD v37[2]; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v38[7]; // [rsp+60h] [rbp-1h] BYREF
  HANDLE KeyHandlea; // [rsp+E0h] [rbp+7Fh] BYREF

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
    if ( ((Flags - 1) & 0xFFFFFFFC) == 0 )
    {
      v22 = 3;
      if ( Flags != 3 )
      {
        if ( PreviousMode == 1 )
        {
          KeyHandlea = 0LL;
          FileHandlea = 0LL;
          v11 = CmConvertHandleToKernelHandle(KeyHandle, v17, 1, 0, &KeyHandlea);
          if ( v11 >= 0 )
          {
            v11 = IoConvertFileHandleToKernelHandle((int)FileHandle, &FileHandlea);
            if ( v11 >= 0 )
            {
              v23 = Flags;
              v24 = FileHandlea;
              v11 = ZwSaveKeyEx(KeyHandlea, FileHandlea, v23);
              if ( v24 )
                ZwClose(v24);
            }
            if ( KeyHandlea )
              ZwClose(KeyHandlea);
          }
        }
        else
        {
          v11 = CmObReferenceObjectByHandle(KeyHandle, 0, v18, PreviousMode, &Object, 0LL);
          if ( v11 >= 0 )
          {
            memset(v38, 0, 48);
            v37[1] = v37;
            v37[0] = v37;
            v26 = KeGetCurrentThread();
            --v26->KernelApcDisable;
            v27 = Object;
            if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
            {
              v38[0] = v27;
              v38[1] = FileHandle;
              LODWORD(v38[2]) = Flags;
              v11 = CmpCallCallBacks(0x2Bu, (__int64)v38, 1, 44LL, 0LL, (__int64)v37);
            }
            if ( v11 < 0 )
            {
              if ( v11 == -1073740541 )
                v11 = 0;
            }
            else
            {
              v28 = v27[1];
              if ( Flags == 4 )
              {
                v29 = CmDumpKey(v28, FileHandle);
              }
              else
              {
                if ( Flags == 2 )
                  v22 = 5;
                v29 = CmSaveKey(v28, FileHandle, v22);
              }
              v11 = CmPostCallbackNotification(44, (__int64)v27, v29, (__int64)v38, v37);
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
            ObfDereferenceObject(Object);
          }
        }
        _m_prefetchw(&CmpShutdownRundown);
        v25 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
        v12 = v25 == _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpShutdownRundown,
                       (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                       CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL);
        goto LABEL_10;
      }
    }
    _m_prefetchw(&CmpShutdownRundown);
    v32 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v32 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v33 = KeGetCurrentThread();
    v34 = v33->KernelApcDisable + 1;
    v33->KernelApcDisable = v34;
    if ( !v34
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
      && !v33->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return -1073741811;
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

/*
 * XREFs of NtFlushKey @ 0x1404F3BA8
 * Callers:
 *     sub_1404F4090 @ 0x1404F4090 (sub_1404F4090.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     CmpDoFlushAll @ 0x14014C088 (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmObReferenceObjectByHandle @ 0x140428ADC (CmObReferenceObjectByHandle.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 */

NTSTATUS __stdcall NtFlushKey(HANDLE KeyHandle)
{
  void *v1; // r8
  __int64 v3; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v5; // rtt
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax
  int v8; // ebx
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v10; // rcx
  struct _KTHREAD *v11; // rax
  _QWORD *v12; // rdi
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rcx
  unsigned __int64 v16; // rtt
  struct _KTHREAD *v17; // rdx
  __int16 v18; // ax
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  struct _EX_RUNDOWN_REF *v24; // r14
  struct _EX_RUNDOWN_REF *v25; // rsi
  unsigned __int64 v26; // rtt
  unsigned __int64 v27; // rtt
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  unsigned __int64 v30; // rtt
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax
  PVOID Object; // [rsp+30h] [rbp-29h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v35; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v36[2]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v37[4]; // [rsp+58h] [rbp-1h] BYREF
  int v38; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v39; // [rsp+7Ch] [rbp+23h]
  int v40; // [rsp+84h] [rbp+2Bh]

  memset(v37, 0, sizeof(v37));
  v3 = 0LL;
  v35 = 0LL;
  v38 = 0;
  v39 = 0LL;
  v40 = 0;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v38, (char *)0x20000);
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
    v8 = -1073741431;
    if ( CmpTraceRoutine )
    {
      LOBYTE(v6) = 21;
      CmpTraceRoutine(v6, &v38, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return v8;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = CmObReferenceObjectByHandle(KeyHandle, 0, v1, PreviousMode, &Object, &v35);
  if ( v8 >= 0 )
  {
    if ( CmpTraceRoutine && Object )
      v3 = *((_QWORD *)Object + 1);
    v36[1] = v36;
    v36[0] = v36;
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    v12 = Object;
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 32LL) + 144LL) & 2) != 0
      && PreviousMode
      && (~v35.GrantedAccess & 0x20006) != 0 )
    {
      v13 = KeGetCurrentThread();
      v14 = v13->KernelApcDisable + 1;
      v13->KernelApcDisable = v14;
      if ( !v14
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
        && !v13->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      ObfDereferenceObject(Object);
      v8 = -1073741790;
      if ( CmpTraceRoutine )
      {
        LOBYTE(v15) = 21;
        CmpTraceRoutine(v15, &v38, 3221225506LL, 0LL, v3, 0LL);
      }
      _m_prefetchw(&CmpShutdownRundown);
      v16 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v16 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v17 = KeGetCurrentThread();
      v18 = v17->KernelApcDisable + 1;
      v17->KernelApcDisable = v18;
      if ( !v18 && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
      {
        v19 = v17->SpecialApcDisable == 0;
        goto LABEL_60;
      }
      return v8;
    }
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
    {
      v37[0] = v12;
      v8 = CmpCallCallBacks(0x1Eu, (__int64)v37, 1, 31LL, (__int64)v12, (__int64)v36);
    }
    if ( v8 < 0 )
    {
      if ( v8 == -1073740541 )
        v8 = 0;
    }
    else
    {
      CmpLockRegistryFreezeAware(0);
      CmpLockKcbShared(v12[1], v20, v21, v22);
      v23 = v12[1];
      if ( (*(_DWORD *)(v23 + 4) & 0x20000) != 0 )
      {
        v8 = (v12[6] & 1) != 0 ? -1073740763 : -1073741444;
        CmpUnlockKcb((char *)v23);
        CmpUnlockRegistry();
      }
      else
      {
        v24 = *(struct _EX_RUNDOWN_REF **)(v23 + 32);
        if ( v24 == (struct _EX_RUNDOWN_REF *)CmpMasterHive )
        {
          CmpUnlockKcb((char *)v23);
          CmpUnlockRegistry();
          CmpDoFlushAll();
        }
        else
        {
          v25 = v24 + 347;
          _m_prefetchw(&v24[347]);
          v26 = v24[347].Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v26 == _InterlockedCompareExchange64((volatile signed __int64 *)&v24[347], v26 + 2, v26)
            || ExfAcquireRundownProtection(v24 + 347) )
          {
            CmpUnlockKcb((char *)v12[1]);
            CmpUnlockRegistry();
            v8 = CmpFlushHive((ULONG_PTR)v24, 0);
            _m_prefetchw(v25);
            v27 = v25->Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v27 != _InterlockedCompareExchange64((volatile signed __int64 *)v25, v27 - 2, v27) )
              ExfReleaseRundownProtection(v24 + 347);
            if ( v8 < 0 )
              v8 = -1073741491;
          }
          else
          {
            CmpUnlockKcb((char *)v12[1]);
            CmpUnlockRegistry();
            v8 = -1073740763;
          }
          v12 = Object;
        }
      }
      v8 = CmPostCallbackNotification(31, (__int64)v12, v8, (__int64)v37, v36);
    }
    v28 = KeGetCurrentThread();
    v29 = v28->KernelApcDisable + 1;
    v28->KernelApcDisable = v29;
    if ( !v29
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
      && !v28->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ObfDereferenceObject(Object);
  }
  if ( CmpTraceRoutine )
  {
    LOBYTE(v10) = 21;
    CmpTraceRoutine(v10, &v38, (unsigned int)v8, 0LL, v3, 0LL);
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
  if ( !v32 && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
  {
    v19 = v31->SpecialApcDisable == 0;
LABEL_60:
    if ( v19 )
      KiCheckForKernelApcDelivery();
  }
  return v8;
}

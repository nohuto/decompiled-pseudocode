/*
 * XREFs of NtCreateKeyTransacted @ 0x1404F46B4
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmCreateKey @ 0x1404F4850 (CmCreateKey.c)
 */

__int64 __fastcall NtCreateKeyTransacted(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rtt
  NTSTATUS v12; // ebx
  PVOID v13; // rbx
  unsigned int Key; // edi
  unsigned __int64 v15; // rtt
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  unsigned __int64 v21; // rtt
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v11 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v11 == _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    || ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v12 = ObReferenceObjectByHandle(
            Handle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &Object,
            0LL);
    if ( v12 < 0 )
    {
      _m_prefetchw(&CmpShutdownRundown);
      v21 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v21 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v22 = KeGetCurrentThread();
      v23 = v22->KernelApcDisable + 1;
      v22->KernelApcDisable = v23;
      if ( !v23
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
        && !v22->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return (unsigned int)v12;
    }
    else
    {
      v13 = Object;
      Key = CmCreateKey(a1, a2, a3);
      ObfDereferenceObject(v13);
      _m_prefetchw(&CmpShutdownRundown);
      v15 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v15 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v16 = KeGetCurrentThread();
      v17 = v16->KernelApcDisable + 1;
      v16->KernelApcDisable = v17;
      if ( !v17
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
        && !v16->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return Key;
    }
  }
  else
  {
    v19 = KeGetCurrentThread();
    v20 = v19->KernelApcDisable + 1;
    v19->KernelApcDisable = v20;
    if ( !v20
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
      && !v19->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225865LL;
  }
}

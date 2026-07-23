/*
 * XREFs of PfSnDeactivateTrace @ 0x1400069E4
 * Callers:
 *     PfSnEndTrace @ 0x1403EA594 (PfSnEndTrace.c)
 * Callees:
 *     PfSnCancelTraceTimer @ 0x140006AE4 (PfSnCancelTraceTimer.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PfSnDeactivateTrace(struct _EX_RUNDOWN_REF *a1)
{
  KIRQL v2; // al
  __int64 v3; // r8
  unsigned int v4; // r9d
  unsigned __int64 v5; // r8
  signed __int64 v6; // rdx
  bool v7; // zf
  signed __int64 v8; // rax
  KIRQL v9; // al
  KIRQL v10; // al
  unsigned __int64 Count; // r8
  struct _EX_RUNDOWN_REF **v12; // rdx
  unsigned __int64 v14; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140328710);
  KeReleaseSpinLock(&qword_140328710, v2);
  v3 = _InterlockedExchange64((volatile __int64 *)(a1[44].Count + 1192), 0LL);
  v4 = v3 & 0xF;
  if ( (v3 & 0xF) != 0 )
  {
    v5 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
    _m_prefetchw((const void *)(v5 + 360));
    v6 = *(_QWORD *)(v5 + 360);
    if ( (v6 & 1) != 0 )
    {
LABEL_9:
      v14 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v14, -(__int64)v4) == v4
        && !_interlockedbittestandreset((volatile signed __int32 *)(v14 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v14 + 8), 0, 0);
      }
    }
    else
    {
      while ( 1 )
      {
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 360), v6 - 2 * v4, v6);
        v7 = v6 == v8;
        v6 = v8;
        if ( v7 )
          break;
        if ( (v8 & 1) != 0 )
          goto LABEL_9;
      }
    }
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&qword_140328710);
  KeReleaseSpinLock(&qword_140328710, v9);
  ExReleaseRundownProtection(a1 + 45);
  PfSnCancelTraceTimer(a1);
  ExWaitForRundownProtectionRelease(a1 + 45);
  v10 = KeAcquireSpinLockRaiseToDpc(&qword_140328710);
  Count = a1[1].Count;
  v12 = (struct _EX_RUNDOWN_REF **)a1[2].Count;
  if ( *(struct _EX_RUNDOWN_REF **)(Count + 8) != &a1[1] || *v12 != &a1[1] )
    __fastfail(3u);
  --PfSnNumActiveTraces;
  *v12 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v12;
  KeReleaseSpinLock(&qword_140328710, v10);
  return 0LL;
}

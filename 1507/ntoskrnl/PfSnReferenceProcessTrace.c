/*
 * XREFs of PfSnReferenceProcessTrace @ 0x14001A540
 * Callers:
 *     PfSnLogPageFault @ 0x14001A174 (PfSnLogPageFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400543B0 (MiMakeSystemCacheRangeValid.c)
 *     PfFileInfoNotify @ 0x1400B82A0 (PfFileInfoNotify.c)
 *     PfSnLogHelper @ 0x140443494 (PfSnLogHelper.c)
 *     PfSnEndProcessTrace @ 0x14044540C (PfSnEndProcessTrace.c)
 *     PfSnAsyncContextInitialize @ 0x1404F5D18 (PfSnAsyncContextInitialize.c)
 * Callees:
 *     ExAcquireRundownProtectionEx @ 0x14001A708 (ExAcquireRundownProtectionEx.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnReferenceProcessTrace(__int64 a1)
{
  signed __int64 v2; // r8
  struct _EX_RUNDOWN_REF *v3; // rbx
  unsigned int v5; // r8d
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  signed __int64 v8; // rax
  BOOLEAN v9; // si
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v11; // rax
  signed __int64 Count; // rdx
  bool v13; // zf
  signed __int64 v14; // rax
  unsigned __int64 v15; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  _m_prefetchw((const void *)(a1 + 1184));
  v2 = *(_QWORD *)(a1 + 1184);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1184), v2 - 1, v2);
      if ( v2 == v8 )
        break;
      v2 = v8;
    }
    while ( (v8 & 0xF) != 0 );
  }
  v3 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
    return v3;
  v5 = v2 & 0xF;
  if ( v5 > 1 )
    return v3;
  if ( v5 )
  {
    if ( ExAcquireRundownProtectionEx(v3 + 45, 0xFu) )
    {
      _m_prefetchw((const void *)(a1 + 1184));
      v6 = *(_QWORD *)(a1 + 1184);
      while ( (v6 & 0xF) == 0 )
      {
        if ( v3 != (struct _EX_RUNDOWN_REF *)(v6 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1184), v6 + 15, v6);
        if ( v7 == v6 )
          return v3;
      }
      _m_prefetchw(&v3[45]);
      Count = v3[45].Count;
      if ( (Count & 1) != 0 )
      {
LABEL_31:
        v15 = Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFF1uLL) == 15
          && !_interlockedbittestandreset((volatile signed __int32 *)(v15 + 32), 0) )
        {
          KeSetEvent((PRKEVENT)(v15 + 8), 0, 0);
        }
      }
      else
      {
        while ( 1 )
        {
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)&v3[45], Count - 30, Count);
          v13 = Count == v14;
          Count = v14;
          if ( v13 )
            break;
          if ( (v14 & 1) != 0 )
            goto LABEL_31;
        }
      }
    }
    return v3;
  }
  v9 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&qword_140353640);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140353640, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(&qword_140353640);
  }
  v3 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a1 + 1184) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v3 )
  {
    _m_prefetchw(&v3[45]);
    v11 = *(_QWORD *)((*(_QWORD *)(a1 + 1184) & 0xFFFFFFFFFFFFFFF0uLL) + 0x168) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v11 == _InterlockedCompareExchange64((volatile signed __int64 *)&v3[45], v11 + 2, v11) )
      v9 = 1;
    else
      v9 = ExfAcquireRundownProtection(v3 + 45);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_140353640, retaddr);
  else
    _InterlockedAnd64(&qword_140353640, 0LL);
  __writecr8(CurrentIrql);
  if ( v9 )
    return v3;
  return 0LL;
}

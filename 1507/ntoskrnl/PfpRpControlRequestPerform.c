/*
 * XREFs of PfpRpControlRequestPerform @ 0x1404551BC
 * Callers:
 *     PfpRpControlRequest @ 0x140455108 (PfpRpControlRequest.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     PfpRpControlRequestUpdate @ 0x140455444 (PfpRpControlRequestUpdate.c)
 *     PfpRpControlRequestReset @ 0x1405C4684 (PfpRpControlRequestReset.c)
 */

__int64 __fastcall PfpRpControlRequestPerform(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v3; // rbx
  unsigned __int64 v5; // rtt
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned __int64 v8; // rtt

  v3 = a1 + 17;
  _m_prefetchw(&a1[17]);
  v5 = a1[17].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[17], v5 + 2, v5)
    && !ExfAcquireRundownProtection(a1 + 17) )
  {
    return (unsigned int)-1073741696;
  }
  if ( !*(_WORD *)(a2 + 2) )
  {
    v6 = PfpRpControlRequestUpdate(a1, a2);
LABEL_4:
    v7 = v6;
    goto LABEL_5;
  }
  if ( *(_WORD *)(a2 + 2) == 1 )
  {
    v6 = PfpRpControlRequestReset(a1);
    goto LABEL_4;
  }
  v7 = -1073741811;
LABEL_5:
  _m_prefetchw(v3);
  v8 = v3->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v8 - 2, v8) )
    ExfReleaseRundownProtection(v3);
  return v7;
}

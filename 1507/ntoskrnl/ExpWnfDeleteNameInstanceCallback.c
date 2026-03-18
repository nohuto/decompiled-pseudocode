/*
 * XREFs of ExpWnfDeleteNameInstanceCallback @ 0x14053EEA4
 * Callers:
 *     ExpWnfFreeScopeInstance @ 0x14053EDF0 (ExpWnfFreeScopeInstance.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 */

__int64 __fastcall ExpWnfDeleteNameInstanceCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v4; // rcx
  unsigned __int64 v5; // rtt

  v2 = a1 - 16;
  v4 = (struct _EX_RUNDOWN_REF *)(a1 - 16 + 8);
  _m_prefetchw(v4);
  v5 = v4->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v5 + 2, v5) )
    ExfAcquireRundownProtection(v4);
  return ExpWnfDeleteNameInstance(a2, v2, 0LL);
}

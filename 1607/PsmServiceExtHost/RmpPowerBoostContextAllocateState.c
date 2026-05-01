/*
 * XREFs of RmpPowerBoostContextAllocateState @ 0x18001D1F8
 * Callers:
 *     RmpEnforcerContextAllocateState @ 0x18001D108 (RmpEnforcerContextAllocateState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpPowerBoostContextAllocateState(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = TpAllocTimer(&v5, RmpPowerBoostWatchdogCallback, a1, 0LL);
  if ( v2 < 0 )
  {
    v3 = v5;
  }
  else
  {
    v3 = 0LL;
    *(_QWORD *)(a1 + 176) = v5;
    v2 = 0;
    v5 = 0LL;
  }
  if ( v3 )
    TpReleaseTimer();
  return (unsigned int)v2;
}

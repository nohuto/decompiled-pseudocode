/*
 * XREFs of MiChargeProcessPhysicalPages @ 0x1406A5EA4
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x1406A6328 (NtAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1406A9CA4 (MiCreateLargePageVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiChargeProcessPhysicalPages(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v4; // rax
  unsigned __int64 i; // rdx
  signed __int64 v6; // rtt

  if ( *(_QWORD *)(a1 + 1584) )
  {
    v4 = *(_QWORD *)(a1 + 1576);
    for ( i = v4 + a2; i <= *(_QWORD *)(a1 + 1584); i = a2 + v4 )
    {
      v6 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1576), i, v4);
      if ( v6 == v4 )
        return 1LL;
    }
    return 0LL;
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1576), a2);
    return 1LL;
  }
}

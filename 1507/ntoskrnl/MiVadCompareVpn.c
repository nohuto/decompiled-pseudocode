/*
 * XREFs of MiVadCompareVpn @ 0x1400C2460
 * Callers:
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiResolvePageTablePage @ 0x1400C0790 (MiResolvePageTablePage.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiPhysicalViewCompareVpn @ 0x140224884 (MiPhysicalViewCompareVpn.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadCompareVpn(unsigned __int64 a1, __int64 a2)
{
  if ( a1 > (*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) )
    return 1LL;
  else
    return (unsigned int)-(a1 < (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)));
}

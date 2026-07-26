/*
 * XREFs of EthDeleteFilterOpenAdapter @ 0x1C005D2E8
 * Callers:
 *     ndisMKillOpen @ 0x1C00E6E7C (ndisMKillOpen.c)
 * Callees:
 *     XRemoveBindingFromLists @ 0x1C00109F8 (XRemoveBindingFromLists.c)
 */

void __fastcall EthDeleteFilterOpenAdapter(__int64 a1, __int64 a2)
{
  XRemoveBindingFromLists(a1, a2);
  if ( *(_DWORD *)(a2 + 440) )
  {
    ExFreePoolWithTag(*(PVOID *)(a2 + 448), 0);
    ExFreePoolWithTag(*(PVOID *)(a2 + 464), 0);
  }
  *(_QWORD *)(a2 + 448) = 0LL;
  *(_QWORD *)(a2 + 464) = 0LL;
}

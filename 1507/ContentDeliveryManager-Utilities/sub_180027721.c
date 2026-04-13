/*
 * XREFs of sub_180027721 @ 0x180027721
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000AA04 @ 0x18000AA04 (sub_18000AA04.c)
 */

void __fastcall sub_180027721(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 176) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 176) &= ~1u;
    sub_18000AA04((std::_Lockit *)(a2 + 40));
  }
}

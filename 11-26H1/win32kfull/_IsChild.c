/*
 * XREFs of _IsChild @ 0x1401882D0
 * Callers:
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     NtUserSelectPalette @ 0x1401AEB50 (NtUserSelectPalette.c)
 *     _SelectPalette @ 0x1401D49D0 (_SelectPalette.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChild(__int64 a1, __int64 a2)
{
  while ( a2 && (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 0xC0) == 0x40 )
  {
    a2 = *(_QWORD *)(a2 + 104);
    if ( a1 == a2 )
      return 1LL;
  }
  return 0LL;
}

/*
 * XREFs of _IsChild @ 0x1C0100A28
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     CheckPwndFilter @ 0x1C0090AD4 (CheckPwndFilter.c)
 *     _SelectPalette @ 0x1C00E0AA0 (_SelectPalette.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChild(__int64 a1, __int64 a2)
{
  do
  {
    if ( !a2 || (*(_BYTE *)(a2 + 55) & 0xC0) != 0x40 )
      return 0LL;
    a2 = *(_QWORD *)(a2 + 88);
  }
  while ( a1 != a2 );
  return 1LL;
}

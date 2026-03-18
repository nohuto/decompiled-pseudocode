/*
 * XREFs of _IsChild @ 0x1C012ED7C
 * Callers:
 *     CheckPwndFilter @ 0x1C005C388 (CheckPwndFilter.c)
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     _SelectPalette @ 0x1C01045F0 (_SelectPalette.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChild(__int64 a1, __int64 a2)
{
  while ( a2 && (*(_BYTE *)(a2 + 55) & 0xC0) == 0x40 )
  {
    a2 = *(_QWORD *)(a2 + 88);
    if ( a1 == a2 )
      return 1LL;
  }
  return 0LL;
}

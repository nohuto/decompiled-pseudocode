/*
 * XREFs of BgpTxtClearRegion @ 0x140761D3C
 * Callers:
 *     BgpTxtDisplayString @ 0x140761D5C (BgpTxtDisplayString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpTxtClearRegion(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 64) & 1) != 0 )
    return BgpGxDrawRectangle(*(_QWORD *)(a1 + 24), a1);
  else
    return 3221225485LL;
}

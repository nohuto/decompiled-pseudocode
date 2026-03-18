/*
 * XREFs of BgpTxtClearRegion @ 0x14072B090
 * Callers:
 *     BgpTxtDisplayString @ 0x14072B0B0 (BgpTxtDisplayString.c)
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

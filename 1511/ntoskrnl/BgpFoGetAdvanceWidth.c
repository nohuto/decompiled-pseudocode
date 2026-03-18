/*
 * XREFs of BgpFoGetAdvanceWidth @ 0x14021F8E8
 * Callers:
 *     BgpTxtDisplayString @ 0x1406DECE0 (BgpTxtDisplayString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall BgpFoGetAdvanceWidth(__int64 a1, unsigned __int16 a2, _DWORD *a3, __int64 a4, _BYTE *a5)
{
  return BgpRasGetGlyphAdvanceWidth(a1, a2, a3, a4, a5);
}

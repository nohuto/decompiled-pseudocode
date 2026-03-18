/*
 * XREFs of ?bValid@EWNDOBJ@@QEAAHXZ @ 0x1C027B880
 * Callers:
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C027BC94 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     GreDeleteWnd @ 0x1C027C3D0 (GreDeleteWnd.c)
 *     GreSetClientRgn @ 0x1C027C56C (GreSetClientRgn.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0299740 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EWNDOBJ::bValid(EWNDOBJ *this)
{
  return *((_DWORD *)this + 38) == 1145984837 && **((_DWORD **)this + 21) == 1128354388;
}

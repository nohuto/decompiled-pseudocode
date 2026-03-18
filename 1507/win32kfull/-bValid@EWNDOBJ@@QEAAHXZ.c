/*
 * XREFs of ?bValid@EWNDOBJ@@QEAAHXZ @ 0x1C027C2C8
 * Callers:
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C027C6E0 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     GreDeleteWnd @ 0x1C027CE10 (GreDeleteWnd.c)
 *     GreSetClientRgn @ 0x1C027CFBC (GreSetClientRgn.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0299C40 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EWNDOBJ::bValid(EWNDOBJ *this)
{
  return *((_DWORD *)this + 38) == 1145984837 && **((_DWORD **)this + 21) == 1128354388;
}

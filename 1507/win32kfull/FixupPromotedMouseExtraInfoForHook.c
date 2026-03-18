/*
 * XREFs of FixupPromotedMouseExtraInfoForHook @ 0x1C004CCB4
 * Callers:
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C004CCD8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D9478 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixupPromotedMouseExtraInfoForHook(__int64 a1, __int64 a2)
{
  if ( a1 && a2 == *(_DWORD *)(a1 + 20) && (*(_BYTE *)(a1 + 2) & 0x50) != 0 )
    return (unsigned __int8)a2 | 0xFF515700LL;
  else
    return a2;
}

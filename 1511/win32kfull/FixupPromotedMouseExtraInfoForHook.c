/*
 * XREFs of FixupPromotedMouseExtraInfoForHook @ 0x1C0086DAC
 * Callers:
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00874E8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z @ 0x1C0087E90 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z.c)
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

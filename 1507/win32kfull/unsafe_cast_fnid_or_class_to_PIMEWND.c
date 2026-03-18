/*
 * XREFs of unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C0052908
 * Callers:
 *     ImeCanDestroyDefIMEforChild @ 0x1C004FAC0 (ImeCanDestroyDefIMEforChild.c)
 *     xxxCreateDefaultImeWindow @ 0x1C0052518 (xxxCreateDefaultImeWindow.c)
 *     zzzImeCanDestroyDefIME @ 0x1C00527D4 (zzzImeCanDestroyDefIME.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E2A84 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall unsafe_cast_fnid_or_class_to_PIMEWND(__int64 a1)
{
  __int64 v1; // r10

  v1 = 0LL;
  if ( !a1 )
    return 0LL;
  if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x2A9 )
    return a1;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) == *(_WORD *)(gpsi + 882LL) )
    return a1;
  return v1;
}

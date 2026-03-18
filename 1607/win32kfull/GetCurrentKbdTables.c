/*
 * XREFs of GetCurrentKbdTables @ 0x1C01D2064
 * Callers:
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C01D0E24 (-SendKeyUpDown@@YAXEE@Z.c)
 *     ?xxxSend3FingerTapHotkey@@YAXXZ @ 0x1C01ED778 (-xxxSend3FingerTapHotkey@@YAXXZ.c)
 *     ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C01ED8B8 (-xxxSend4FingerTapHotkey@@YAXXZ.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C023F780 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C023F834 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 * Callees:
 *     <none>
 */

__int64 GetCurrentKbdTables()
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax

  if ( !gpqForeground )
    return 0LL;
  v1 = *(_QWORD *)(gpqForeground + 88LL);
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 16);
  else
    v2 = *(_QWORD *)(gpqForeground + 64LL);
  v3 = *(_QWORD *)(v2 + 392);
  if ( v3 )
    return *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL);
  else
    return gpKbdTbl;
}

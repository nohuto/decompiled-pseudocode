/*
 * XREFs of GetCurrentKbdTables @ 0x1C01D9CA0
 * Callers:
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C01D88FC (-SendKeyUpDown@@YAXEE@Z.c)
 *     ?xxxSend3FingerTapHotkey@@YAXXZ @ 0x1C01F6208 (-xxxSend3FingerTapHotkey@@YAXXZ.c)
 *     ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C01F6348 (-xxxSend4FingerTapHotkey@@YAXXZ.c)
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
  v1 = *(_QWORD *)(gpqForeground + 80LL);
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 16);
  else
    v2 = *(_QWORD *)(gpqForeground + 56LL);
  v3 = *(_QWORD *)(v2 + 400);
  if ( v3 )
    return *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL);
  else
    return gpKbdTbl;
}

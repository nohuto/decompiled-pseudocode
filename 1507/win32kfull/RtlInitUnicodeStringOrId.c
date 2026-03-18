/*
 * XREFs of RtlInitUnicodeStringOrId @ 0x1C004F27C
 * Callers:
 *     xxxLoadSysMenu @ 0x1C004FD24 (xxxLoadSysMenu.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0135D14 (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C01360E8 (xxxUpdateSystemCursorFromRegistry.c)
 *     UpdateSystemCursorPath @ 0x1C01369CC (UpdateSystemCursorPath.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01DB428 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DB4A4 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0231F9C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlInitUnicodeStringOrId(struct _UNICODE_STRING *a1, WCHAR *a2)
{
  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    RtlInitUnicodeString(a1, a2);
  }
  else
  {
    a1->Buffer = a2;
    *(_DWORD *)&a1->Length = 0;
  }
}

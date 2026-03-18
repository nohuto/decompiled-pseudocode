/*
 * XREFs of RtlInitUnicodeStringOrId @ 0x1C00CC1E8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxLoadSysMenu @ 0x1C00CBF78 (xxxLoadSysMenu.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00CC8DC (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C01232FC (xxxUpdateSystemCursorFromRegistry.c)
 *     UpdateSystemCursorPath @ 0x1C0124050 (UpdateSystemCursorPath.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01DBA2C (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DBAA8 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C02323CC (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
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

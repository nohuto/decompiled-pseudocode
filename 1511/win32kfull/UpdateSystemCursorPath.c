/*
 * XREFs of UpdateSystemCursorPath @ 0x1C0124050
 * Callers:
 *     _LoadCursorsAndIcons @ 0x1C01081D0 (_LoadCursorsAndIcons.c)
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C01232FC (xxxUpdateSystemCursorFromRegistry.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01DBA2C (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DBAA8 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateSystemCursorPath(unsigned int a1, const struct _UNICODE_STRING *a2)
{
  __int64 v2; // r8

  if ( a2 && ((unsigned __int64)a2->Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v2 = 2LL * a1;
    *((_QWORD *)&gastrSystemCursorPaths + v2 + 1) = (char *)&gastrSystemCursorBuffers + 520 * a1;
    *((_WORD *)&gastrSystemCursorPaths + 4 * v2 + 1) = 260;
    RtlUnicodeStringCopy((struct _UNICODE_STRING *)&gastrSystemCursorPaths + a1, a2);
  }
  else
  {
    RtlInitUnicodeStringOrId(
      (struct _UNICODE_STRING *)&gastrSystemCursorPaths + a1,
      (WCHAR *)(unsigned __int16)(a1 + 100));
  }
}

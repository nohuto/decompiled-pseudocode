/*
 * XREFs of UpdateSystemCursorPath @ 0x1C00901D4
 * Callers:
 *     _LoadCursorsAndIcons @ 0x1C008EE50 (_LoadCursorsAndIcons.c)
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C008F1E4 (xxxUpdateSystemCursorFromRegistry.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01D3468 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01D34E4 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateSystemCursorPath(unsigned int a1, const struct _UNICODE_STRING *a2)
{
  __int64 v2; // r8

  if ( !a2 || ((unsigned __int64)a2->Buffer & 0xFFFFFFFFFFFF0000uLL) == 0 )
    return RtlInitUnicodeStringOrId((char *)&gastrSystemCursorPaths + 16 * a1, (unsigned __int16)(a1 + 100));
  v2 = 2LL * a1;
  *((_QWORD *)&gastrSystemCursorPaths + v2 + 1) = (char *)&gastrSystemCursorBuffers + 520 * a1;
  *((_WORD *)&gastrSystemCursorPaths + 4 * v2 + 1) = 260;
  return RtlUnicodeStringCopy((struct _UNICODE_STRING *)&gastrSystemCursorPaths + a1, a2);
}

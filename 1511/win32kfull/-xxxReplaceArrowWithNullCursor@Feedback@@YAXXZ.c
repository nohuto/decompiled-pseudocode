/*
 * XREFs of ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01DBA2C
 * Callers:
 *     ?xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DB920 (-xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     RtlInitUnicodeStringOrId @ 0x1C00CC1E8 (RtlInitUnicodeStringOrId.c)
 *     xxxClientLoadImage @ 0x1C012031C (xxxClientLoadImage.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C012356C (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C0123934 (zzzSetSystemImage.c)
 *     UpdateSystemCursorPath @ 0x1C0124050 (UpdateSystemCursorPath.c)
 */

void __fastcall Feedback::xxxReplaceArrowWithNullCursor(Feedback *this)
{
  __int64 v1; // rdx
  unsigned __int8 *Image; // rax
  struct _UNICODE_STRING v3; // [rsp+40h] [rbp-18h] BYREF

  EtwTraceContactVisualizationInfo(4LL);
  RtlInitUnicodeStringOrId(&v3, (WCHAR *)0x7F9E);
  Image = xxxClientLoadImage((char **)&v3, v1, 2u, 0, 0, 0x40u);
  if ( Image )
  {
    zzzSetSystemImage((__int64)Image, *(_QWORD *)&gasyscur[4]);
    UpdateSystemCursorPath(0, &v3);
    xxxSetMonitorIcoCurIndex((char **)&v3, 0, 0, 1);
  }
}

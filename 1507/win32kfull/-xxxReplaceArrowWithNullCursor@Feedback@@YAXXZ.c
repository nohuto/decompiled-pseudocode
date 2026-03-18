/*
 * XREFs of ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01DB428
 * Callers:
 *     ?xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DB320 (-xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     RtlInitUnicodeStringOrId @ 0x1C004F27C (RtlInitUnicodeStringOrId.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C0136358 (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C0136720 (zzzSetSystemImage.c)
 *     UpdateSystemCursorPath @ 0x1C01369CC (UpdateSystemCursorPath.c)
 *     xxxClientLoadImage @ 0x1C0136A30 (xxxClientLoadImage.c)
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
    zzzSetSystemImage((struct tagCURSOR *)Image, *(_QWORD *)&gasyscur[4]);
    UpdateSystemCursorPath(0, &v3);
    xxxSetMonitorIcoCurIndex((int)&v3, 0, 0, 1);
  }
}

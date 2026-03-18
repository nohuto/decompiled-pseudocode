/*
 * XREFs of ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C005C8F4
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C005C620 (zzzUpdateCursorImage.c)
 *     SetPointer @ 0x1C0094C10 (SetPointer.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C00DB460 (UpdateCursorImageForMonitorDpi.c)
 * Callees:
 *     GetAnimatedCursorFrame @ 0x1C005DA50 (GetAnimatedCursorFrame.c)
 */

struct tagCURSOR *__fastcall GetCurrentCursorFrame(struct tagCURSOR *a1)
{
  if ( a1 && (*((_DWORD *)a1 + 20) & 8) != 0 )
    return (struct tagCURSOR *)GetAnimatedCursorFrame(a1, *((unsigned int *)a1 + 30));
  return a1;
}

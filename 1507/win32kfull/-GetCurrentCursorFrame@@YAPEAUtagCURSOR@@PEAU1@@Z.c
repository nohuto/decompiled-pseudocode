/*
 * XREFs of ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00909C0
 * Callers:
 *     SetPointer @ 0x1C003E370 (SetPointer.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C0040B44 (UpdateCursorImageForMonitorDpi.c)
 *     zzzUpdateCursorImage @ 0x1C00906F0 (zzzUpdateCursorImage.c)
 * Callees:
 *     GetAnimatedCursorFrame @ 0x1C00913AC (GetAnimatedCursorFrame.c)
 */

struct tagCURSOR *__fastcall GetCurrentCursorFrame(struct tagCURSOR *a1)
{
  if ( a1 && (*((_DWORD *)a1 + 20) & 8) != 0 )
    return (struct tagCURSOR *)GetAnimatedCursorFrame(a1, *((unsigned int *)a1 + 30));
  return a1;
}

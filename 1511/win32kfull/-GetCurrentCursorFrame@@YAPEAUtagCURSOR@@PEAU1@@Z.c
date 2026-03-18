/*
 * XREFs of ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0053BE0
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C0053910 (zzzUpdateCursorImage.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C008823C (UpdateCursorImageForMonitorDpi.c)
 *     SetPointer @ 0x1C0096E50 (SetPointer.c)
 * Callees:
 *     GetAnimatedCursorFrame @ 0x1C00EBBAC (GetAnimatedCursorFrame.c)
 */

struct tagCURSOR *__fastcall GetCurrentCursorFrame(struct tagCURSOR *a1)
{
  if ( a1 && (*((_DWORD *)a1 + 20) & 8) != 0 )
    return (struct tagCURSOR *)GetAnimatedCursorFrame(a1, *((unsigned int *)a1 + 30));
  return a1;
}

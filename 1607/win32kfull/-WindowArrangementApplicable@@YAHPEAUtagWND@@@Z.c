/*
 * XREFs of ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C01F9A54
 * Callers:
 *     DragOperationFromMaximizedAllowed @ 0x1C01F9A78 (DragOperationFromMaximizedAllowed.c)
 *     MoveWithArrangementAllowed @ 0x1C01F9AA0 (MoveWithArrangementAllowed.c)
 *     SizeWithSnapAllowed @ 0x1C01F9AC8 (SizeWithSnapAllowed.c)
 *     WindowArrangementAllowed @ 0x1C01F9B88 (WindowArrangementAllowed.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00AC030 (IsNonImmersiveBand.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C010FCE0 (GetAppCompatFlags2QuadWord.c)
 */

_BOOL8 __fastcall WindowArrangementApplicable(struct tagWND *a1)
{
  _BOOL8 result; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  result = IsNonImmersiveBand((__int64)a1);
  if ( result )
    return (GetAppCompatFlags2QuadWord(0LL, v2, v3, v4) & 0x100000000LL) == 0;
  return result;
}

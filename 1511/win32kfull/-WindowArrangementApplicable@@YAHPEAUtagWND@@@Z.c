/*
 * XREFs of ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0202738
 * Callers:
 *     DragOperationFromMaximizedAllowed @ 0x1C020275C (DragOperationFromMaximizedAllowed.c)
 *     MoveWithArrangementAllowed @ 0x1C0202784 (MoveWithArrangementAllowed.c)
 *     SizeWithSnapAllowed @ 0x1C02027AC (SizeWithSnapAllowed.c)
 *     WindowArrangementAllowed @ 0x1C0202874 (WindowArrangementAllowed.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00910EC (IsNonImmersiveBand.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00C9EF0 (GetAppCompatFlags2QuadWord.c)
 */

_BOOL8 __fastcall WindowArrangementApplicable(struct tagWND *a1)
{
  _BOOL8 result; // rax

  result = IsNonImmersiveBand((__int64)a1);
  if ( result )
    return (GetAppCompatFlags2QuadWord(0LL) & 0x100000000LL) == 0;
  return result;
}

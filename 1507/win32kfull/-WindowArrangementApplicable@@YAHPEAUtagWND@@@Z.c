/*
 * XREFs of ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C020239C
 * Callers:
 *     DragOperationFromMaximizedAllowed @ 0x1C02023C0 (DragOperationFromMaximizedAllowed.c)
 *     MoveWithArrangementAllowed @ 0x1C02023E8 (MoveWithArrangementAllowed.c)
 *     SizeWithSnapAllowed @ 0x1C0202410 (SizeWithSnapAllowed.c)
 *     WindowArrangementAllowed @ 0x1C02024D8 (WindowArrangementAllowed.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x1C0040280 (GetAppCompatFlags2QuadWord.c)
 *     IsNonImmersiveBand @ 0x1C0045A6C (IsNonImmersiveBand.c)
 */

_BOOL8 __fastcall WindowArrangementApplicable(struct tagWND *a1)
{
  _BOOL8 result; // rax

  result = IsNonImmersiveBand((__int64)a1);
  if ( result )
    return (GetAppCompatFlags2QuadWord(0LL) & 0x100000000LL) == 0;
  return result;
}

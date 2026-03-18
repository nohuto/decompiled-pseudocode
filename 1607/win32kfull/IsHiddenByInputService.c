/*
 * XREFs of IsHiddenByInputService @ 0x1C0058034
 * Callers:
 *     DelQEntry @ 0x1C0057FA0 (DelQEntry.c)
 *     DeferMessagesOnQueue @ 0x1C01CAE88 (DeferMessagesOnQueue.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C01CB1E8 (MergeDeferredMessagesOfThreadOnQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsHiddenByInputService(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 100);
  return (v1 & 0x8000) != 0 || (v1 & 0x20000) != 0;
}

/*
 * XREFs of ?DestroyUnlockedCursorIfSupported@@YAXPEAX@Z @ 0x1C007B160
 * Callers:
 *     <none>
 * Callees:
 *     IsDestroyUnlockedCursorSupported_0 @ 0x1C0002820 (IsDestroyUnlockedCursorSupported_0.c)
 *     DestroyUnlockedCursor_0 @ 0x1C0002828 (DestroyUnlockedCursor_0.c)
 */

void __fastcall DestroyUnlockedCursorIfSupported(void *a1)
{
  if ( (int)IsDestroyUnlockedCursorSupported_0() >= 0 )
    DestroyUnlockedCursor_0();
}

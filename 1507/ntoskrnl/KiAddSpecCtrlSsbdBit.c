/*
 * XREFs of KiAddSpecCtrlSsbdBit @ 0x1402085F0
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x140208044 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall KiAddSpecCtrlSsbdBit(_WORD *a1)
{
  if ( KiSsbdMsr == 72 )
    *a1 |= 4u;
}

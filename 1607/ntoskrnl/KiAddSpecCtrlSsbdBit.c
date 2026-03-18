/*
 * XREFs of KiAddSpecCtrlSsbdBit @ 0x1401D9720
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401D90FC (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall KiAddSpecCtrlSsbdBit(_WORD *a1)
{
  if ( KiSsbdMsr == 72 )
    *a1 |= 4u;
}

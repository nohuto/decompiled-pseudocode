/*
 * XREFs of KiAddSpecCtrlSsbdBit @ 0x1401D954C
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401D8F28 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall KiAddSpecCtrlSsbdBit(_WORD *a1)
{
  if ( KiSsbdMsr == 72 )
    *a1 |= 4u;
}

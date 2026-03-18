/*
 * XREFs of KiInitializeDpcList @ 0x140131B94
 * Callers:
 *     KiInitPrcb @ 0x1403F7D4C (KiInitPrcb.c)
 *     KiInitializeProcessor @ 0x1403F8C60 (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}

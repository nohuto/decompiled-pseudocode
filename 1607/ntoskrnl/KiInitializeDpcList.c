/*
 * XREFs of KiInitializeDpcList @ 0x1400B3D08
 * Callers:
 *     KiInitializeProcessor @ 0x1403D34A8 (KiInitializeProcessor.c)
 *     KiInitPrcb @ 0x1403D5408 (KiInitPrcb.c)
 * Callees:
 *     <none>
 */

void __fastcall KiInitializeDpcList(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = a1;
}

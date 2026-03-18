/*
 * XREFs of MiReclaimSystemVa @ 0x1400A38F4
 * Callers:
 *     MiObtainDynamicVa @ 0x1400A3088 (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x140149A5C (MiExtendDynamicBitMap.c)
 * Callees:
 *     <none>
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_140326AC8 <= 0x8000000 )
    return KeSetEvent(&stru_140326D18, 0, 0);
  return result;
}

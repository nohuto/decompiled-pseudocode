/*
 * XREFs of MiReclaimSystemVa @ 0x1400A221C
 * Callers:
 *     MiObtainDynamicVa @ 0x1400A19B0 (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x140149FCC (MiExtendDynamicBitMap.c)
 * Callees:
 *     <none>
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_140326B08 <= 0x8000000 )
    return KeSetEvent(&stru_140326D58, 0, 0);
  return result;
}

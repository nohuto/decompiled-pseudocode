/*
 * XREFs of MiReclaimSystemVa @ 0x14012D8C0
 * Callers:
 *     MiObtainDynamicVa @ 0x140066E20 (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x14016E40C (MiExtendDynamicBitMap.c)
 * Callees:
 *     <none>
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_14034EC48 <= 0x8000000 )
    return KeSetEvent(&stru_14034EE68, 0, 0);
  return result;
}

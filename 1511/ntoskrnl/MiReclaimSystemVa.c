/*
 * XREFs of MiReclaimSystemVa @ 0x140019340
 * Callers:
 *     MiObtainDynamicVa @ 0x140018AD0 (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x1401405C0 (MiExtendDynamicBitMap.c)
 * Callees:
 *     <none>
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_1402FE788 <= 0x8000000 )
    return KeSetEvent(&stru_1402FE9A8, 0, 0);
  return result;
}

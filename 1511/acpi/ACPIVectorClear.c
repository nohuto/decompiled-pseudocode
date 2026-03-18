/*
 * XREFs of ACPIVectorClear @ 0x1C0040FC0
 * Callers:
 *     ACPIEcServiceIoLoop @ 0x1C0023C94 (ACPIEcServiceIoLoop.c)
 *     ACPIVectorClear2 @ 0x1C0040FF0 (ACPIVectorClear2.c)
 * Callees:
 *     ACPIWriteGpeStatusRegister @ 0x1C00075AC (ACPIWriteGpeStatusRegister.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0008794 (ACPIGpeIndexToGpeRegister.c)
 */

__int64 __fastcall ACPIVectorClear(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v4; // eax

  v3 = *a2;
  v4 = ACPIGpeIndexToGpeRegister(*a2, (__int64)a2, a3);
  ACPIWriteGpeStatusRegister(v4, 1 << (v3 & 7));
  return 0LL;
}

/*
 * XREFs of ACPIVectorInstall @ 0x1C0041920
 * Callers:
 *     ACPIVectorConnect @ 0x1C00414C0 (ACPIVectorConnect.c)
 * Callees:
 *     ACPIGpeIndexToByteIndex @ 0x1C000769C (ACPIGpeIndexToByteIndex.c)
 *     ACPIVectorGetEntry @ 0x1C004180C (ACPIVectorGetEntry.c)
 */

char __fastcall ACPIVectorInstall(unsigned int a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // eax
  unsigned int v7; // r8d
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  if ( !ACPIVectorGetEntry(&v9) )
    return 0;
  v6 = ACPIGpeIndexToByteIndex(a1, v4, v5);
  v7 = v9;
  *(_BYTE *)(v6 + GpeMap) = v9;
  *((_QWORD *)GpeVectorTable + 2 * v7 + 1) = a2;
  return 1;
}

/*
 * XREFs of RIMRetrieveNormalizationRange @ 0x1C0074AAC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C00C304C (RIMPopulatePointerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMRetrieveNormalizationRange(__int64 a1, _WORD *a2, _QWORD *a3)
{
  _WORD *v3; // rcx
  unsigned int v4; // r10d
  unsigned int v5; // r9d

  v3 = &unk_1C00FF412;
  v4 = 0;
  v5 = 0;
  while ( *(v3 - 1) != *a2 || *v3 != a2[28] )
  {
    ++v5;
    v3 += 6;
    if ( v5 >= 5 )
      return v4;
  }
  v4 = 1;
  *a3 = *(_QWORD *)((char *)&unk_1C00FF414 + 12 * v5);
  return v4;
}

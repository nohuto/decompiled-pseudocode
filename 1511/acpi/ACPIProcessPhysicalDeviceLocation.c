/*
 * XREFs of ACPIProcessPhysicalDeviceLocation @ 0x1C00674BC
 * Callers:
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0067750 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C00684F0 (ACPIBusIrpDeviceEnumerated.c)
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     AMLIFreeDataBuffs @ 0x1C00079D0 (AMLIFreeDataBuffs.c)
 *     AMLIIsNamedChildPresent @ 0x1C000DC00 (AMLIIsNamedChildPresent.c)
 *     AMLIEvalPkgDataElement @ 0x1C0016B08 (AMLIEvalPkgDataElement.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIProcessPhysicalDeviceLocation(_QWORD *a1, _DWORD *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int16 v7; // cx
  const void *v8; // rdx
  unsigned int v9; // eax
  _QWORD v10[5]; // [rsp+50h] [rbp+7h] BYREF
  void *v11[5]; // [rsp+78h] [rbp+2Fh] BYREF

  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  a2[4] = 0;
  memset(v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  v4 = a1[88];
  if ( !v4 || !AMLIIsNamedChildPresent(v4, 1145851999) )
    goto LABEL_3;
  v5 = ACPIGet(a1, 1145851999, 268566528, 0LL, 0, 0LL, 0LL, (__int64)v10, 0LL);
  if ( v5 >= 0 )
  {
    v7 = WORD1(v10[0]);
    if ( WORD1(v10[0]) == 4 )
    {
      if ( !*(_DWORD *)v10[4] )
        goto LABEL_3;
      v5 = AMLIEvalPkgDataElement((__int64)v10, 0, v11);
      if ( v5 < 0 )
        goto LABEL_4;
      v7 = WORD1(v11[0]);
      v8 = v11[4];
      v9 = (unsigned int)v11[3];
    }
    else
    {
      v8 = (const void *)v10[4];
      v9 = v10[3];
    }
    if ( v7 == 3 && v9 >= 0x10 )
    {
      if ( v9 > 0x14 )
        v9 = 20;
      memmove(a2, v8, v9);
      if ( (*(_BYTE *)a2 & 0x7F) == 1 )
        a2[4] = -1;
      goto LABEL_4;
    }
LABEL_3:
    v5 = -1073741823;
  }
LABEL_4:
  if ( v11[4] )
    AMLIFreeDataBuffs((__int64)v11);
  if ( v10[4] )
    AMLIFreeDataBuffs((__int64)v10);
  return (unsigned int)v5;
}

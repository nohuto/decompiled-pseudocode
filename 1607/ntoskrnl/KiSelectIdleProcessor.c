/*
 * XREFs of KiSelectIdleProcessor @ 0x140133454
 * Callers:
 *     KiChooseTargetProcessor @ 0x1400570D0 (KiChooseTargetProcessor.c)
 * Callees:
 *     KiReduceByEffectiveIdleSmtSet @ 0x14009F110 (KiReduceByEffectiveIdleSmtSet.c)
 */

__int64 __fastcall KiSelectIdleProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r10
  __int64 v9; // r8
  char v11; // cl
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  char v15; // cl
  int v16; // edx
  __int64 v17; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( !a4 )
  {
    v13 = a1 & *(_QWORD *)(a3 + 136);
    if ( !v13 )
      return 0LL;
    v14 = KiProcessorBlock[*(unsigned int *)(a3 + 92)];
    v15 = *(_BYTE *)(v14 + 1617);
    v16 = *(unsigned __int8 *)(v14 + 1616);
    _BitScanForward64((unsigned __int64 *)&v14, __ROR8__(v13, v15));
    a4 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v16 + (((_BYTE)v14 + v15) & 0x3F)]];
  }
  v9 = a1 & *(_QWORD *)a3;
  v17 = v9;
  if ( v9 )
  {
    if ( *(_QWORD *)(a4 + 1608) != *(_QWORD *)(a4 + 24920) )
    {
      v9 = v17;
      if ( (v17 & *(_QWORD *)(a3 + 8)) != 0 )
      {
        v9 = v17 & *(_QWORD *)(a3 + 8);
      }
      else if ( *(_QWORD *)(a2 + 1600) == a3 )
      {
        KiReduceByEffectiveIdleSmtSet(a2, &v17);
        v9 = v17;
      }
    }
    if ( (v9 & *(_QWORD *)(a4 + 1608)) != 0 )
    {
      return a4;
    }
    else
    {
      v11 = *(_BYTE *)(a4 + 1617);
      if ( (v9 & *(_QWORD *)(a4 + 24920)) != 0 )
        v9 &= *(_QWORD *)(a4 + 24920);
      _BitScanForward64(&v12, __ROR8__(v9, v11));
      return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a4 + 1616)
                                                                 + (((unsigned __int8)v12 + v11) & 0x3F)]];
    }
  }
  return v5;
}

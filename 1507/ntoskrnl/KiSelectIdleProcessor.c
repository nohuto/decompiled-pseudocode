/*
 * XREFs of KiSelectIdleProcessor @ 0x14015AA84
 * Callers:
 *     KiChooseTargetProcessor @ 0x14004D7D0 (KiChooseTargetProcessor.c)
 * Callees:
 *     KiReduceByEffectiveIdleSmtSet @ 0x140117A68 (KiReduceByEffectiveIdleSmtSet.c)
 */

__int64 __fastcall KiSelectIdleProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v9; // r8
  __int64 v10; // rax
  char v11; // cl
  int v12; // edx
  __int64 v13; // r8
  char v15; // cl
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( !a4 )
  {
    v9 = a1 & *(_QWORD *)(a3 + 136);
    if ( !v9 )
      return 0LL;
    v10 = KiProcessorBlock[*(unsigned int *)(a3 + 92)];
    v11 = *(_BYTE *)(v10 + 1617);
    v12 = *(unsigned __int8 *)(v10 + 1616);
    _BitScanForward64((unsigned __int64 *)&v10, __ROR8__(v9, v11));
    a4 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v12 + (((_BYTE)v10 + v11) & 0x3F)]];
  }
  v13 = a1 & *(_QWORD *)a3;
  v17 = v13;
  if ( v13 )
  {
    if ( *(_QWORD *)(a4 + 1608) != *(_QWORD *)(a4 + 24792) )
    {
      v13 = v17;
      if ( (v17 & *(_QWORD *)(a3 + 8)) != 0 )
      {
        v13 = v17 & *(_QWORD *)(a3 + 8);
      }
      else if ( *(_QWORD *)(a2 + 1600) == a3 )
      {
        KiReduceByEffectiveIdleSmtSet(a2, &v17);
        v13 = v17;
      }
    }
    if ( (v13 & *(_QWORD *)(a4 + 1608)) != 0 )
    {
      return a4;
    }
    else
    {
      v15 = *(_BYTE *)(a4 + 1617);
      if ( (v13 & *(_QWORD *)(a4 + 24792)) != 0 )
        v13 &= *(_QWORD *)(a4 + 24792);
      _BitScanForward64(&v16, __ROR8__(v13, v15));
      return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a4 + 1616)
                                                                 + (((unsigned __int8)v16 + v15) & 0x3F)]];
    }
  }
  return v5;
}

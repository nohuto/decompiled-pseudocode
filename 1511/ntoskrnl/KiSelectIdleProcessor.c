/*
 * XREFs of KiSelectIdleProcessor @ 0x14012BA30
 * Callers:
 *     KiChooseTargetProcessor @ 0x140088720 (KiChooseTargetProcessor.c)
 * Callees:
 *     KiReduceByEffectiveIdleSmtSet @ 0x1400E1A1C (KiReduceByEffectiveIdleSmtSet.c)
 */

__int64 __fastcall KiSelectIdleProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  char v10; // dl
  __int64 v11; // r11
  __int64 v12; // rax
  char v13; // cl
  int v14; // edx
  __int64 v15; // [rsp+48h] [rbp+20h] BYREF

  if ( !a4 )
  {
    v11 = a1 & *(_QWORD *)(a3 + 136);
    if ( !v11 )
      return 0LL;
    v12 = KiProcessorBlock[*(unsigned int *)(a3 + 92)];
    v13 = *(_BYTE *)(v12 + 1617);
    v14 = *(unsigned __int8 *)(v12 + 1616);
    _BitScanForward64((unsigned __int64 *)&v12, __ROR8__(v11, v13));
    a4 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v14 + (((_BYTE)v12 + v13) & 0x3F)]];
  }
  v7 = 0LL;
  v8 = a1 & *(_QWORD *)a3;
  v15 = v8;
  if ( !v8 )
    return v7;
  if ( *(_QWORD *)(a4 + 1608) != *(_QWORD *)(a4 + 24792) )
  {
    v8 = v15;
    if ( (v15 & *(_QWORD *)(a3 + 8)) != 0 )
    {
      v8 = v15 & *(_QWORD *)(a3 + 8);
    }
    else if ( *(_QWORD *)(a2 + 1600) == a3 )
    {
      KiReduceByEffectiveIdleSmtSet(a2, &v15);
      v8 = v15;
    }
  }
  if ( (v8 & *(_QWORD *)(a4 + 1608)) != 0 )
    return a4;
  v10 = *(_BYTE *)(a4 + 1617);
  if ( (v8 & *(_QWORD *)(a4 + 24792)) != 0 )
    v8 &= *(_QWORD *)(a4 + 24792);
  _BitScanForward64((unsigned __int64 *)&v8, __ROR8__(v8, v10));
  return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a4 + 1616)
                                                             + ((v10 + (unsigned __int8)v8) & 0x3F)]];
}

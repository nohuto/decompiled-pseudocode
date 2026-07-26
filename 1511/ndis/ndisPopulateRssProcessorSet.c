/*
 * XREFs of ndisPopulateRssProcessorSet @ 0x1C001900C
 * Callers:
 *     NdisGetRssProcessorInformation @ 0x1C0018F20 (NdisGetRssProcessorInformation.c)
 * Callees:
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C0019228 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 */

__int64 __fastcall ndisPopulateRssProcessorSet(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  bool v5; // bp
  unsigned int Next_high; // r10d
  __int64 *v7; // r12
  unsigned int v8; // ebx
  unsigned int v9; // esi
  $18E3EACC1E717291AA7C720ECCD5C45C v10; // r8
  __int64 v11; // r9
  __int64 v12; // r9
  _PROCESSOR_NUMBER *v13; // r14
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v15; // rcx
  bool v16; // cf
  unsigned int v17; // ecx
  __int64 result; // rax
  __int64 v19; // r8
  __int64 v20; // r11
  __int64 *v21; // r9
  __int64 v22; // r10
  __int64 *v23; // rdx
  __int64 v24; // [rsp+50h] [rbp+8h]

  v2 = *(_BYTE *)(a1 + 32);
  v5 = v2 <= 6u && (v2 != 6 || *(_BYTE *)(a1 + 33) < 0x14u);
  Next_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next);
  v7 = (__int64 *)(a2 + 40);
  v8 = 0;
  v9 = 0;
  if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) )
  {
    v10 = WPP_MAIN_CB.DeviceQueue.1;
    do
    {
      if ( (!v5 || !*(_WORD *)(*(_QWORD *)&v10 + 4LL * v9))
        && (int)ndisCompareProcNum(
                  *(struct _PROCESSOR_NUMBER *)(*(_QWORD *)&v10 + 4LL * v9),
                  *(struct _PROCESSOR_NUMBER *)(a2 + 8)) >= 0
        && (int)ndisCompareProcNum(
                  *(struct _PROCESSOR_NUMBER *)(*(_QWORD *)&v10 + 4 * v11),
                  *(struct _PROCESSOR_NUMBER *)(a2 + 32)) <= 0
        && (!v5 || !*(_WORD *)(*(_QWORD *)&v10 + 4 * v12) && *(_BYTE *)(*(_QWORD *)&v10 + 4 * v12 + 2) < 0x20u) )
      {
        v13 = (_PROCESSOR_NUMBER *)&v7[v8];
        *v13 = *(_PROCESSOR_NUMBER *)(*(_QWORD *)&v10 + 4 * v12);
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(v13);
        v15 = *(_QWORD *)(a1 + 4464);
        if ( v15 )
          v13[1].Group = *(_WORD *)(v15 + 2LL * ProcessorIndexFromNumber);
        else
          v13[1].Group = 0;
        Next_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next);
        ++v8;
        v10 = WPP_MAIN_CB.DeviceQueue.1;
      }
      ++v9;
    }
    while ( v9 < Next_high );
  }
  v16 = *(_DWORD *)(a2 + 12) < v8;
  v17 = v8;
  result = 0xFFFFLL;
  *(_DWORD *)(a2 + 24) = v8;
  if ( v16 )
    v17 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v17;
  *(_DWORD *)(a2 + 20) = 40;
  *(_DWORD *)(a2 + 28) = 8;
  if ( *(_WORD *)(a2 + 16) != 0xFFFF && (int)v8 > 0 )
  {
    v19 = -1LL;
    v20 = v8;
    v21 = v7;
    do
    {
      result = *v21;
      v22 = v19;
      v24 = *v21;
      if ( v19 >= 0 )
      {
        v23 = v21;
        do
        {
          if ( WORD2(v24) >= *((_WORD *)v23 - 2) )
            break;
          *v23 = *(v23 - 1);
          --v23;
          --v22;
        }
        while ( v22 >= 0 );
      }
      ++v21;
      v7[v22 + 1] = result;
      ++v19;
      --v20;
    }
    while ( v20 );
  }
  return result;
}

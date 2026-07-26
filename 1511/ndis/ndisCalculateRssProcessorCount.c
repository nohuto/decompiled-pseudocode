/*
 * XREFs of ndisCalculateRssProcessorCount @ 0x1C0019170
 * Callers:
 *     NdisGetRssProcessorInformation @ 0x1C0018F20 (NdisGetRssProcessorInformation.c)
 * Callees:
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C0019228 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 */

__int64 __fastcall ndisCalculateRssProcessorCount(__int64 a1)
{
  unsigned __int8 v1; // al
  struct _PROCESSOR_NUMBER *v2; // r9
  unsigned int v3; // r10d
  unsigned int v4; // r8d
  bool v5; // bl
  unsigned int Next_high; // edi
  $18E3EACC1E717291AA7C720ECCD5C45C v7; // rsi
  _WORD *v8; // r11
  __int64 v9; // rbp

  v1 = *(_BYTE *)(a1 + 32);
  v2 = (struct _PROCESSOR_NUMBER *)a1;
  v3 = 0;
  v4 = 0;
  v5 = v1 <= 6u && (v1 != 6 || *(_BYTE *)(a1 + 33) < 0x14u);
  Next_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next);
  if ( HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) )
  {
    v7 = WPP_MAIN_CB.DeviceQueue.1;
    v8 = (_WORD *)WPP_MAIN_CB.DeviceQueue.1;
    do
    {
      if ( !v5 || !*v8 )
      {
        v9 = v3;
        if ( (int)ndisCompareProcNum(*(struct _PROCESSOR_NUMBER *)(*(_QWORD *)&v7 + 4LL * v3), v2[1111]) >= 0
          && (int)ndisCompareProcNum(v2[1112], *(struct _PROCESSOR_NUMBER *)(*(_QWORD *)&v7 + 4 * v9)) >= 0 )
        {
          ++v4;
        }
      }
      ++v3;
      v8 += 2;
    }
    while ( v3 < Next_high );
  }
  return v4;
}

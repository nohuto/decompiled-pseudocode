/*
 * XREFs of ?GetAllPositions@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@AEAV?$DynArray@M$0A@@@@Z @ 0x18013605C
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800921B0 (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133F9C (-UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800AD500 (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 */

__int64 __fastcall CoordMap::GetAllPositions(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r8
  unsigned int v5; // ebp
  int v7; // eax
  float *v8; // rsi
  float v9; // xmm2_4
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax

  *(_DWORD *)(a3 + 24) = 0;
  v4 = 0;
  v5 = 0;
  if ( *(_DWORD *)(a2 + 24) )
  {
    do
    {
      v7 = *(_DWORD *)(a3 + 24);
      v8 = (float *)(*(_QWORD *)a2 + 16LL * v5);
      if ( !v7
        || (v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*v8
                                                           - *(float *)(*(_QWORD *)a3 + 4LL * (unsigned int)(v7 - 1)))) & _xmm),
            v9 > 0.0000011920929) )
      {
        v10 = DynArray<float,0>::AddMultipleAndSet(a3, (const void *)(*(_QWORD *)a2 + 16LL * v5), 1u);
        v11 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xEFu);
          return v11;
        }
        v4 = 0;
      }
      if ( !v4 && v8[1] != v8[2] && *(_DWORD *)(a3 + 24) > 1u )
      {
        v12 = DynArray<float,0>::AddMultipleAndSet(a3, v8, 1u);
        v11 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xF8u);
          return v11;
        }
        v4 = 1;
      }
      ++v5;
    }
    while ( v5 < *(_DWORD *)(a2 + 24) );
    if ( v4 )
      --*(_DWORD *)(a3 + 24);
  }
  return 0;
}

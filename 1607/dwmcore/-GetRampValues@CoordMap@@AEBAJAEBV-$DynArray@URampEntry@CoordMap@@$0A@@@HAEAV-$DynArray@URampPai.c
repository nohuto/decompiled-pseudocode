/*
 * XREFs of ?GetRampValues@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEAV?$DynArray@URampPair@CoordMap@@$0A@@@@Z @ 0x180136188
 * Callers:
 *     ?ComputeTexPositions@CoordMap@@QEAAJHV?$ArrayRef@M@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x180135BAC (-ComputeTexPositions@CoordMap@@QEAAJHV-$ArrayRef@M@@0AEAV-$DynArray@M$0A@@@1M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CoordMap::GetRampValues(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int i; // esi
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned int v10; // r8d
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax

  *(_DWORD *)(a4 + 24) = 0;
  for ( i = 0; i < *(_DWORD *)(a2 + 24); ++i )
  {
    v8 = *(_QWORD *)a2 + 16LL * i;
    if ( *(_DWORD *)(v8 + 12) == a3 )
    {
      v9 = *(unsigned int *)(a4 + 24);
      v10 = v9 + 1;
      if ( (int)v9 + 1 >= (unsigned int)v9 )
      {
        if ( v10 <= *(_DWORD *)(a4 + 20) )
        {
          v12 = 3 * v9;
          v13 = *(_QWORD *)a4;
          *(_QWORD *)(v13 + 4 * v12) = *(_QWORD *)v8;
          *(_DWORD *)(v13 + 4 * v12 + 8) = *(_DWORD *)(v8 + 8);
          *(_DWORD *)(a4 + 24) = v10;
          continue;
        }
        v14 = DynArrayImpl<0>::AddMultipleAndSet(a4, 0xCu, 1);
        v11 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
      }
      else
      {
        v11 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC5u);
        return (unsigned int)v11;
      }
    }
  }
  return 0;
}

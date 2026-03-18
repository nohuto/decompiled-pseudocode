/*
 * XREFs of ?ComputeTexPositions@CoordMap@@QEAAJHV?$ArrayRef@M@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x180135BAC
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800921B0 (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133F9C (-UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?ComputeTexPositionsWorker@CoordMap@@KAXV?$ArrayRef@M@@V?$ArrayRef@URampPair@CoordMap@@@@AEAV?$DynArray@M$0A@@@M@Z @ 0x180135D64 (-ComputeTexPositionsWorker@CoordMap@@KAXV-$ArrayRef@M@@V-$ArrayRef@URampPair@CoordMap@@@@AEAV-$D.c)
 *     ?GetRampValues@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEAV?$DynArray@URampPair@CoordMap@@$0A@@@@Z @ 0x180136188 (-GetRampValues@CoordMap@@AEBAJAEBV-$DynArray@URampEntry@CoordMap@@$0A@@@HAEAV-$DynArray@URampPai.c)
 */

__int64 __fastcall CoordMap::ComputeTexPositions(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  int RampValues; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-A1h] BYREF
  int v19; // [rsp+38h] [rbp-99h]
  __int64 v20; // [rsp+40h] [rbp-91h] BYREF
  int v21; // [rsp+48h] [rbp-89h]
  _QWORD v22[2]; // [rsp+50h] [rbp-81h] BYREF
  int v23; // [rsp+60h] [rbp-71h]
  __int64 v24; // [rsp+64h] [rbp-6Dh]
  _BYTE v25[80]; // [rsp+70h] [rbp-61h] BYREF

  v22[0] = v25;
  v22[1] = v25;
  v23 = 6;
  v24 = 6LL;
  *(_DWORD *)(a5 + 24) = 0;
  *(_DWORD *)(a6 + 24) = 0;
  v10 = DynArrayImpl<0>::Grow(a5, 4u, *((_DWORD *)a3 + 2), 0, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2A1u);
  }
  else
  {
    v12 = DynArrayImpl<0>::Grow(a6, 4u, *((_DWORD *)a4 + 2), 0, 0LL);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x2A2u);
    }
    else
    {
      RampValues = CoordMap::GetRampValues(v13, a1, a2, v22);
      v11 = RampValues;
      if ( RampValues < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, RampValues, 0x2A5u);
      }
      else
      {
        v19 = HIDWORD(v24);
        v18 = v22[0];
        v21 = *((_DWORD *)a3 + 2);
        v20 = *a3;
        CoordMap::ComputeTexPositionsWorker(&v20, &v18, a5);
        v16 = CoordMap::GetRampValues(v15, a1 + 192, a2, v22);
        v11 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2ADu);
        }
        else
        {
          v21 = HIDWORD(v24);
          v20 = v22[0];
          v19 = *((_DWORD *)a4 + 2);
          v18 = *a4;
          CoordMap::ComputeTexPositionsWorker(&v18, &v20, a6);
          v11 = 0;
        }
      }
    }
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v22);
  return v11;
}

/*
 * XREFs of ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121810
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x180067CD4 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180124B50 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801313FC (-CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 */

__int64 __fastcall CDrawingContext::CombineMove(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v3; // xmm0
  bool v5; // zf
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // ebx
  __int64 v12; // rsi
  int v13; // eax
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm6_4
  float v17; // xmm3_4
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float *v21; // rcx
  int v22; // eax
  CBitmapOfDeviceBitmaps *v24; // [rsp+30h] [rbp-40h] BYREF
  __int128 v25; // [rsp+38h] [rbp-38h]
  __int128 v26; // [rsp+48h] [rbp-28h]

  v3 = *a3;
  v24 = (CBitmapOfDeviceBitmaps *)a2;
  v5 = *(_QWORD *)(a2 + 48) == 0LL;
  v25 = v3;
  if ( v5 || (v6 = *(_DWORD *)(a1 + 6360), v7 = 0LL, !v6) )
  {
LABEL_7:
    v9 = *(_DWORD *)(a1 + 6360);
    v10 = v9 + 1;
    if ( v9 + 1 >= v9 )
    {
      v11 = 0;
      if ( v10 <= *(_DWORD *)(a1 + 6356) )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 6336) + 8LL * *(unsigned int *)(a1 + 6360)) = v24;
        *(_DWORD *)(a1 + 6360) = v10;
LABEL_27:
        CBitmapOfDeviceBitmaps::AddRef(v24);
        return v11;
      }
      v22 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 6336, 8u, 1, &v24);
      v11 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
    }
    else
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( (v11 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1DCAu);
      return v11;
    }
    goto LABEL_27;
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 6336) + 8 * v7);
    if ( *(_QWORD *)(v8 + 48) )
    {
      if ( *(float *)(v8 + 24) == *(float *)(a2 + 24) && *(float *)(v8 + 28) == *(float *)(a2 + 28) )
        break;
    }
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= v6 )
      goto LABEL_7;
  }
  v12 = (unsigned int)v7;
  v13 = CDwmMetaRegion::CombineRegions(*(HRGN *)(v8 + 48), *(HRGN *)(a2 + 48));
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1DB7u);
  }
  else
  {
    LODWORD(v14) = *((_DWORD *)v24 + 6) ^ _xmm;
    LODWORD(v15) = *((_DWORD *)v24 + 7) ^ _xmm;
    v16 = *(float *)&v25 + v14;
    v17 = *((float *)&v25 + 1) + v15;
    v18 = *((float *)&v25 + 3);
    v19 = *((float *)&v25 + 2) + v14;
    *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 6336) + 8 * v12) + 32LL) = v26;
    v20 = v18 + v15;
    v21 = *(float **)(*(_QWORD *)(a1 + 6336) + 8 * v12);
    if ( v16 > v21[8] )
      v21[8] = v16;
    if ( v17 > v21[9] )
      v21[9] = v17;
    if ( v21[10] > v19 )
      v21[10] = v19;
    if ( v21[11] > v20 )
      v21[11] = v20;
    if ( v21[10] <= v21[8] || v21[11] <= v21[9] )
    {
      v21[11] = 0.0;
      v21[10] = 0.0;
      v21[9] = 0.0;
      v21[8] = 0.0;
    }
  }
  return v11;
}

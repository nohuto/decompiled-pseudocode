/*
 * XREFs of ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010B4E4
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18003C848 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18010E44C (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801171DC (-CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
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
  int v11; // ebx
  unsigned int v12; // edi
  __int64 v13; // rsi
  int v14; // eax
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm6_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float *v21; // rcx
  int v23; // eax
  CBitmapOfDeviceBitmaps *v24; // [rsp+30h] [rbp-40h] BYREF
  __int128 v25; // [rsp+38h] [rbp-38h]
  __int128 v26; // [rsp+48h] [rbp-28h]

  v3 = *a3;
  v24 = (CBitmapOfDeviceBitmaps *)a2;
  v5 = *(_QWORD *)(a2 + 48) == 0LL;
  v25 = v3;
  if ( v5 || (v6 = *(_DWORD *)(a1 + 5672), v7 = 0LL, !v6) )
  {
LABEL_7:
    v9 = *(_DWORD *)(a1 + 5672);
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v12 = -2147024362;
LABEL_29:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1D73u);
      return v12;
    }
    v12 = 0;
    if ( v10 > *(_DWORD *)(a1 + 5668) )
    {
      v23 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 5648, 8, 1, &v24);
      v11 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xC0u);
      v12 = v11;
      if ( v11 < 0 )
        goto LABEL_29;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 5648) + 8LL * *(unsigned int *)(a1 + 5672)) = v24;
      *(_DWORD *)(a1 + 5672) = v10;
    }
    CBitmapOfDeviceBitmaps::AddRef(v24);
    return v12;
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 5648) + 8 * v7);
    if ( *(_QWORD *)(v8 + 48) )
    {
      if ( *(float *)(v8 + 24) == *(float *)(a2 + 24) && *(float *)(v8 + 28) == *(float *)(a2 + 28) )
        break;
    }
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= v6 )
      goto LABEL_7;
  }
  v13 = (unsigned int)v7;
  v14 = CDwmMetaRegion::CombineRegions(*(HRGN *)(v8 + 48), *(HRGN *)(a2 + 48));
  v12 = v14;
  if ( v14 >= 0 )
  {
    LODWORD(v15) = *((_DWORD *)v24 + 6) ^ _xmm;
    LODWORD(v16) = *((_DWORD *)v24 + 7) ^ _xmm;
    v17 = *(float *)&v25 + v15;
    v18 = *((float *)&v25 + 1) + v16;
    v19 = *((float *)&v25 + 2) + v15;
    v20 = *((float *)&v25 + 3) + v16;
    *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 5648) + 8 * v13) + 32LL) = v26;
    v21 = *(float **)(*(_QWORD *)(a1 + 5648) + 8 * v13);
    if ( v17 > v21[8] )
      v21[8] = v17;
    if ( v18 > v21[9] )
      v21[9] = v18;
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
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1D60u);
  }
  return v12;
}

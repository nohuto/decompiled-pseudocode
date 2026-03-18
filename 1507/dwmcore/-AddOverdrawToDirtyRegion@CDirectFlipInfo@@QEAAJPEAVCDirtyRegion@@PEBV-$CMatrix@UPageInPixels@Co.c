/*
 * XREFs of ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x1800EEE90
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18004AF20 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x18000D3FC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?Invert@CBaseMatrix@@IEAAHAEBV1@@Z @ 0x1800222D4 (-Invert@CBaseMatrix@@IEAAHAEBV1@@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180088DA4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DE608 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 */

__int64 __fastcall CDirectFlipInfo::AddOverdrawToDirtyRegion(
        __int64 a1,
        CDirtyRegion *a2,
        const struct CBaseMatrix *a3)
{
  unsigned int v3; // ebx
  __int64 i; // rax
  int v7; // eax
  FastRegion::Internal::CRgnData *v8; // rcx
  _DWORD v10[4]; // [rsp+30h] [rbp-69h]
  _BYTE v11[8]; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-51h]
  _DWORD *v13; // [rsp+50h] [rbp-49h]
  __int64 v14; // [rsp+58h] [rbp-41h]
  int v15; // [rsp+60h] [rbp-39h]
  float v16[4]; // [rsp+70h] [rbp-29h] BYREF
  _DWORD v17[4]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v18[64]; // [rsp+90h] [rbp-9h] BYREF

  v3 = 0;
  if ( *(_QWORD *)(a1 + 48) )
  {
    CBaseMatrix::Invert((CBaseMatrix *)v18, a3);
    FastRegion::CRegion::BeginIterator((_DWORD **)(*(_QWORD *)(a1 + 48) + 16LL), (__int64)v11);
    while ( (unsigned __int64)v13 < v12 )
    {
      v10[1] = *v13;
      v10[3] = v13[2];
      v10[0] = *(_DWORD *)(v14 + 8LL * v15);
      v10[2] = *(_DWORD *)(v14 + 8LL * v15 + 4);
      for ( i = 0LL; i < 4; ++i )
        *(float *)&v17[i] = (float)(int)v10[i];
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)v18, (const struct MilRectF *)v17, (struct MilRectF *)v16);
      v7 = CDirtyRegion::Add(a2, 0LL, 0, v16);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x20Du);
        return v3;
      }
      FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v11);
    }
  }
  return v3;
}

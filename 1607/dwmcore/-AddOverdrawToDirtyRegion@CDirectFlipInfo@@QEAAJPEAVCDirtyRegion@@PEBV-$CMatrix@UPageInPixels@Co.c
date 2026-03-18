/*
 * XREFs of ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x18012CA04
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800744E0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x18001D254 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B440 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180070FBC (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B6C0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CDirectFlipInfo::AddOverdrawToDirtyRegion(__int64 a1, CDirtyRegion *a2, const struct CMILMatrix *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r9
  __int64 i; // rax
  int v7; // eax
  FastRegion::Internal::CRgnData *v8; // rcx
  _DWORD v10[4]; // [rsp+30h] [rbp-69h]
  _BYTE v11[8]; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-51h]
  _DWORD *v13; // [rsp+50h] [rbp-49h]
  __int64 v14; // [rsp+58h] [rbp-41h]
  int v15; // [rsp+60h] [rbp-39h]
  _BYTE v16[64]; // [rsp+70h] [rbp-29h] BYREF
  int v17; // [rsp+B0h] [rbp+17h]
  _DWORD v18[4]; // [rsp+C0h] [rbp+27h] BYREF
  float v19[4]; // [rsp+D0h] [rbp+37h] BYREF

  v3 = 0;
  if ( *(_QWORD *)(a1 + 48) )
  {
    v17 = 0;
    CMILMatrix::SetToInverse((CMILMatrix *)v16, a3);
    FastRegion::CRegion::BeginIterator((_DWORD **)(v5 + 16), (__int64)v11);
    while ( (unsigned __int64)v13 < v12 )
    {
      v10[1] = *v13;
      v10[3] = v13[2];
      v10[0] = *(_DWORD *)(v14 + 8LL * v15);
      v10[2] = *(_DWORD *)(v14 + 4LL * (2 * v15 + 1));
      for ( i = 0LL; i < 4; ++i )
        *(float *)&v18[i] = (float)(int)v10[i];
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v16, (__int64)v18, v19);
      v7 = CDirtyRegion::Add(a2, 0LL, 0LL, v19);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x222u);
        return v3;
      }
      FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v11);
    }
  }
  return v3;
}

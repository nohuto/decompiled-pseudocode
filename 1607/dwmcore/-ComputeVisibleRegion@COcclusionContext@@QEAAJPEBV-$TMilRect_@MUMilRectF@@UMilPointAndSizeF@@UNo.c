/*
 * XREFs of ?ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18005FA78
 * Callers:
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18006960C (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x1801216B4 (-CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18004B090 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18005C80C (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::ComputeVisibleRegion(
        __int64 a1,
        __int128 *a2,
        unsigned __int32 a3,
        __int64 a4,
        _BYTE *a5,
        __int64 a6,
        unsigned int *a7)
{
  __int64 v7; // rdi
  char v10; // al
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, float *, __int32, char, _BYTE *, __int64, unsigned int *); // rax
  int v13; // eax
  unsigned int v14; // esi
  char v16; // cl
  char v17; // al
  _OWORD *v18; // rax
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h] BYREF
  __int128 v21; // [rsp+60h] [rbp-20h] BYREF

  v7 = 0LL;
  if ( *(_BYTE *)(a1 + 672) )
    COcclusionContext::DeviceRectToPageInPixelsRect(a1, a2, (float *)&v20);
  else
    v20 = *a2;
  v10 = (char)(4 * *(_BYTE *)(a1 + 741)) >> 6;
  if ( v10 )
  {
    if ( v10 != 1 )
    {
LABEL_5:
      LOBYTE(a4) = 0;
      goto LABEL_6;
    }
  }
  else
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 676) - 0.0)) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 688) - 0.0)) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 696) - 0.0)) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 704) - 0.0)) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 736) - 1.0)) & _xmm) >= 0.00012207031 )
    {
      v16 = 0;
      v17 = -1;
    }
    else
    {
      v16 = 1;
      v17 = 1;
    }
    *(_BYTE *)(a1 + 741) ^= (*(_BYTE *)(a1 + 741) ^ (16 * v17)) & 0x30;
    if ( !v16 )
      goto LABEL_5;
    *(_BYTE *)(a1 + 740) |= 0x3Fu;
  }
  LOBYTE(a4) = 1;
LABEL_6:
  v11 = *(_QWORD *)(a1 + 248);
  v12 = *(__int64 (__fastcall **)(__int64, float *, __int32, char, _BYTE *, __int64, unsigned int *))(*(_QWORD *)v11 + 48LL);
  if ( v12 == CArrayBasedCoverageSet::ComputeVisibleRegion )
    v13 = CArrayBasedCoverageSet::ComputeVisibleRegion(v11, (float *)&v20, a3, a4, a5, a6, a7);
  else
    v13 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64))v12)(v11, &v20, a3, a4);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x3A0u);
  }
  else if ( *(_BYTE *)(a1 + 672) && *a7 )
  {
    do
    {
      v19 = *(_OWORD *)*(_QWORD *)(a6 + 8 * v7);
      CMILMatrix::Transform2DBoundsHelper<0>(a1 + 676, (__int64)&v19, (float *)&v21);
      v18 = *(_OWORD **)(a6 + 8 * v7);
      v7 = (unsigned int)(v7 + 1);
      *v18 = v21;
    }
    while ( (unsigned int)v7 < *a7 );
  }
  return v14;
}

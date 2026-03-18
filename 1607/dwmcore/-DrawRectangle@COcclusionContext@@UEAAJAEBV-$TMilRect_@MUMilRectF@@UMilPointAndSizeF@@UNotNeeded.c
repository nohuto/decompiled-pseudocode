/*
 * XREFs of ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@@Z @ 0x18005CF00
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ @ 0x180031A00 (-IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ.c)
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180031AA0 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x180032274 (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     ?IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180032A20 (-IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18005C4C0 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawRectangle(__int64 a1, float *a2, CSolidColorLegacyMilBrush *a3, __int64 a4)
{
  unsigned int v4; // edi
  bool (__fastcall *v8)(CSolidColorLegacyMilBrush *); // rax
  __int64 (__fastcall *v10)(CSolidColorLegacyMilBrush *, __int64); // rax
  char v11; // al
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  int v14; // eax
  int v15; // r9d
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // [rsp+20h] [rbp-50h]
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v23[24]; // [rsp+40h] [rbp-30h]
  __m128i v24; // [rsp+58h] [rbp-18h] BYREF

  v4 = 0;
  v24 = (__m128i)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( !*(_DWORD *)(a1 + 884) && !a4 && a3 )
  {
    v8 = *(bool (__fastcall **)(CSolidColorLegacyMilBrush *))(*(_QWORD *)a3 + 144LL);
    if ( v8 == CSolidColorLegacyMilBrush::IsConstantOpaque ? CSolidColorLegacyMilBrush::IsConstantOpaque(a3) : v8(a3) )
    {
      v14 = COcclusionContext::CollectRectangleForOcclusion(a1 - 8, a2, 0, &v24);
      v4 = v14;
      if ( v14 < 0 )
      {
        v21 = 1041;
LABEL_18:
        v15 = v14;
LABEL_25:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v21);
        return v4;
      }
    }
  }
  v10 = *(__int64 (__fastcall **)(CSolidColorLegacyMilBrush *, __int64))(*(_QWORD *)a3 + 48LL);
  if ( (char *)v10 == (char *)CImageLegacyMilBrush::IsOfType )
  {
    v11 = CImageLegacyMilBrush::IsOfType((__int64)a3, 76);
  }
  else if ( (char *)v10 == (char *)CSolidColorLegacyMilBrush::IsOfType )
  {
    v11 = CSolidColorLegacyMilBrush::IsOfType((__int64)a3, 76);
  }
  else
  {
    v11 = v10(a3, 76LL);
  }
  if ( v11 )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a3);
    if ( CachedBrushCVINoRef )
    {
      v16 = *(_QWORD *)(a1 + 656);
      *((_QWORD *)&v22 + 1) = CachedBrushCVINoRef;
      v17 = *(unsigned int *)(a1 + 984);
      *(_QWORD *)&v22 = v16;
      v23[0] = 0;
      *(__m128i *)&v23[4] = v24;
      v18 = v17 + 1;
      if ( (int)v17 + 1 < (unsigned int)v17 )
      {
        v21 = 181;
        v15 = -2147024362;
        goto LABEL_25;
      }
      if ( v18 > *(_DWORD *)(a1 + 980) )
      {
        v14 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 960, 40LL, 1LL, &v22);
        if ( v14 < 0 )
        {
          v21 = 192;
          goto LABEL_18;
        }
      }
      else
      {
        v19 = 5 * v17;
        v20 = *(_QWORD *)(a1 + 960);
        *(_OWORD *)(v20 + 8 * v19) = v22;
        *(_OWORD *)(v20 + 8 * v19 + 16) = *(_OWORD *)v23;
        *(_QWORD *)(v20 + 8 * v19 + 32) = *(_QWORD *)&v23[16];
        *(_DWORD *)(a1 + 984) = v18;
      }
    }
  }
  return v4;
}

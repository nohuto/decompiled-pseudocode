/*
 * XREFs of ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@@Z @ 0x1800563C0
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x180055888 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ @ 0x180058B30 (-IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ.c)
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180058BC0 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005A520 (-IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x18005A62C (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::DrawRectangle(__int64 a1, float *a2, CSolidColorLegacyMilBrush *a3, __int64 a4)
{
  unsigned int v4; // esi
  bool (__fastcall *v8)(CSolidColorLegacyMilBrush *__hidden); // rdi
  __int64 (__fastcall *v10)(CSolidColorLegacyMilBrush *, __int64); // rdi
  char v11; // al
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // [rsp+20h] [rbp-50h]
  __int128 v21; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v22[24]; // [rsp+40h] [rbp-30h]
  __int128 v23; // [rsp+58h] [rbp-18h]

  v4 = 0;
  v23 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( !*(_DWORD *)(a1 + 648) && !a4 && a3 )
  {
    v8 = *(bool (__fastcall **)(CSolidColorLegacyMilBrush *__hidden))(*(_QWORD *)a3 + 136LL);
    if ( v8 == CSolidColorLegacyMilBrush::IsConstantOpaque ? CSolidColorLegacyMilBrush::IsConstantOpaque(a3) : v8(a3) )
    {
      v14 = COcclusionContext::CollectRectangleForOcclusion(a1 - 8, a2);
      v4 = v14;
      if ( v14 < 0 )
      {
        v20 = 979;
LABEL_24:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v20);
        return v4;
      }
    }
  }
  v10 = *(__int64 (__fastcall **)(CSolidColorLegacyMilBrush *, __int64))(*(_QWORD *)a3 + 48LL);
  if ( (char *)v10 == (char *)CImageLegacyMilBrush::IsOfType )
  {
    v11 = CImageLegacyMilBrush::IsOfType(a3, 75LL);
  }
  else if ( (char *)v10 == (char *)CSolidColorLegacyMilBrush::IsOfType )
  {
    v11 = CSolidColorLegacyMilBrush::IsOfType(a3, 75LL);
  }
  else
  {
    v11 = v10(a3, 75LL);
  }
  if ( v11 )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a3);
    if ( CachedBrushCVINoRef )
    {
      v15 = *(_QWORD *)(a1 + 504);
      *((_QWORD *)&v21 + 1) = CachedBrushCVINoRef;
      v16 = *(unsigned int *)(a1 + 752);
      *(_QWORD *)&v21 = v15;
      v22[0] = 0;
      *(_OWORD *)&v22[4] = v23;
      v17 = v16 + 1;
      if ( (int)v16 + 1 >= (unsigned int)v16 )
      {
        if ( v17 > *(_DWORD *)(a1 + 748) )
        {
          v14 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 728, 40LL, 1LL, &v21);
          if ( v14 < 0 )
          {
            v20 = 192;
            goto LABEL_24;
          }
        }
        else
        {
          v18 = 5 * v16;
          v19 = *(_QWORD *)(a1 + 728);
          *(_OWORD *)(v19 + 8 * v18) = v21;
          *(_OWORD *)(v19 + 8 * v18 + 16) = *(_OWORD *)v22;
          *(_QWORD *)(v19 + 8 * v18 + 32) = *(_QWORD *)&v22[16];
          *(_DWORD *)(a1 + 752) = v17;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
    }
  }
  return v4;
}

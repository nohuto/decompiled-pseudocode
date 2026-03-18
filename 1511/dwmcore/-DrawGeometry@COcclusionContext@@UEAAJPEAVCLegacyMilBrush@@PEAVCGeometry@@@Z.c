/*
 * XREFs of ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x180056280
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180058BC0 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18005A520 (-IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x18005A62C (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::DrawGeometry(
        COcclusionContext *this,
        struct CLegacyMilBrush *a2,
        struct CGeometry *a3)
{
  __int64 (__fastcall *v5)(struct CLegacyMilBrush *, __int64, struct CGeometry *); // rdi
  char v6; // al
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp-18h]

  v5 = *(__int64 (__fastcall **)(struct CLegacyMilBrush *, __int64, struct CGeometry *))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v5 == (char *)CSolidColorLegacyMilBrush::IsOfType )
  {
    v6 = CSolidColorLegacyMilBrush::IsOfType(a2, 75LL);
  }
  else if ( (char *)v5 == (char *)CImageLegacyMilBrush::IsOfType )
  {
    v6 = CImageLegacyMilBrush::IsOfType(a2, 75LL);
  }
  else
  {
    v6 = v5(a2, 75LL, a3);
  }
  if ( v6 )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a2);
    if ( CachedBrushCVINoRef )
    {
      v9 = *((_QWORD *)this + 63);
      *((_QWORD *)&v15 + 1) = CachedBrushCVINoRef;
      v10 = *((unsigned int *)this + 188);
      *(_QWORD *)&v15 = v9;
      LOBYTE(v16) = 1;
      v11 = v10 + 1;
      if ( (int)v10 + 1 < (unsigned int)v10 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else if ( v11 > *((_DWORD *)this + 187) )
      {
        v14 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 728, 40LL, 1LL, &v15);
        if ( v14 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
      }
      else
      {
        v12 = 5 * v10;
        v13 = *((_QWORD *)this + 91);
        *(_OWORD *)(v13 + 8 * v12) = v15;
        *(_OWORD *)(v13 + 8 * v12 + 16) = v16;
        *(_QWORD *)(v13 + 8 * v12 + 32) = v17;
        *((_DWORD *)this + 188) = v11;
      }
    }
  }
  return 0LL;
}

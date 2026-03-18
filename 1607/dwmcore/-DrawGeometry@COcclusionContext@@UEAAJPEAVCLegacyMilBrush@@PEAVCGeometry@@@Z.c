/*
 * XREFs of ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18005CDE0
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180031AA0 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x180032274 (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     ?IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180032A20 (-IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawGeometry(
        COcclusionContext *this,
        struct CLegacyMilBrush *a2,
        struct CGeometry *a3)
{
  __int64 (__fastcall *v5)(struct CLegacyMilBrush *, __int64, struct CGeometry *); // rax
  char v6; // al
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp-18h]

  v5 = *(__int64 (__fastcall **)(struct CLegacyMilBrush *, __int64, struct CGeometry *))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v5 == (char *)CSolidColorLegacyMilBrush::IsOfType )
  {
    v6 = CSolidColorLegacyMilBrush::IsOfType((__int64)a2, 76);
  }
  else if ( (char *)v5 == (char *)CImageLegacyMilBrush::IsOfType )
  {
    v6 = CImageLegacyMilBrush::IsOfType((__int64)a2, 76);
  }
  else
  {
    v6 = v5(a2, 76LL, a3);
  }
  if ( v6 )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a2);
    if ( CachedBrushCVINoRef )
    {
      v9 = *((_QWORD *)this + 82);
      *((_QWORD *)&v15 + 1) = CachedBrushCVINoRef;
      v10 = *((unsigned int *)this + 246);
      *(_QWORD *)&v15 = v9;
      LOBYTE(v16) = 1;
      v11 = v10 + 1;
      if ( (int)v10 + 1 < (unsigned int)v10 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else if ( v11 <= *((_DWORD *)this + 245) )
      {
        v13 = 5 * v10;
        v14 = *((_QWORD *)this + 120);
        *(_OWORD *)(v14 + 8 * v13) = v15;
        *(_OWORD *)(v14 + 8 * v13 + 16) = v16;
        *(_QWORD *)(v14 + 8 * v13 + 32) = v17;
        *((_DWORD *)this + 246) = v11;
      }
      else
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 960, 40LL, 1LL, &v15);
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
      }
    }
  }
  return 0LL;
}

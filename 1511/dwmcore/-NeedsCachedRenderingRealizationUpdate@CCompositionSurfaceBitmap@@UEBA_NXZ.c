/*
 * XREFs of ?NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000BEE0
 * Callers:
 *     ?NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800BCF00 (-NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
 *     ?NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@WCA@EBA_NXZ @ 0x1800BCF10 (-NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@WCA@EBA_NXZ.c)
 * Callees:
 *     ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000BF90 (-IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsStereoContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000C3C0 (-IsStereoContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800830F0 (-QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

char __fastcall CCompositionSurfaceBitmap::NeedsCachedRenderingRealizationUpdate(CBitmapRealization **this)
{
  char v2; // di
  CBitmapRealization *v3; // rbx
  __int64 (__fastcall *v4)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rsi
  int v5; // eax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( CCompositionSurfaceBitmap::IsStereoContent((CCompositionSurfaceBitmap *)this)
    || CCompositionSurfaceBitmap::IsMonitorSpecificContent((CCompositionSurfaceBitmap *)this) )
  {
    return 1;
  }
  v7 = 0LL;
  v2 = 0;
  v3 = this[51];
  if ( v3 )
  {
    v4 = **(__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **))v3;
    if ( v4 == CBitmapRealization::QueryInterface )
      v5 = CBitmapRealization::QueryInterface(v3, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v7);
    else
      v5 = v4(v3, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v7);
    if ( v5 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v7 + 48LL))(v7);
      if ( v7 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return v2;
}

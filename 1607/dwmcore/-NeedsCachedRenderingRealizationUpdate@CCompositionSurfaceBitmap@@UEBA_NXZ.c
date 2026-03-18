/*
 * XREFs of ?NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000FBB0
 * Callers:
 *     ?NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800BFD80 (-NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
 *     ?NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@WCA@EBA_NXZ @ 0x1800BFD90 (-NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@WCA@EBA_NXZ.c)
 * Callees:
 *     ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000FC60 (-IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsStereoContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000FDE0 (-IsStereoContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180090050 (-QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::NeedsCachedRenderingRealizationUpdate(CBitmapRealization **this)
{
  char v2; // di
  CBitmapRealization *v3; // rcx
  __int64 (__fastcall *v4)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rax
  int v5; // eax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( CCompositionSurfaceBitmap::IsStereoContent((CCompositionSurfaceBitmap *)this)
    || CCompositionSurfaceBitmap::IsMonitorSpecificContent((CCompositionSurfaceBitmap *)this) )
  {
    return 1;
  }
  v7 = 0LL;
  v2 = 0;
  v3 = this[52];
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

/*
 * XREFs of ?NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180007DA0
 * Callers:
 *     ?NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@WBI@EBA_NXZ @ 0x18009A2A0 (-NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@WBI@EBA_NXZ.c)
 * Callees:
 *     ?QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180046670 (-QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CCompositionSurfaceBitmap::NeedsCachedRenderingRealizationUpdate(CCompositionSurfaceBitmap *this)
{
  char v1; // si
  __int64 (__fastcall ***v2)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rbx
  __int64 (__fastcall *v3)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rdi
  int v4; // eax
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = 0;
  v2 = (__int64 (__fastcall ***)(CBitmapRealization *__hidden, const struct _GUID *, void **))*((_QWORD *)this + 50);
  if ( v2 )
  {
    v3 = **v2;
    if ( v3 == CBitmapRealization::QueryInterface )
      v4 = CBitmapRealization::QueryInterface(
             *((CBitmapRealization **)this + 50),
             &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
             &v6);
    else
      v4 = v3(*((CBitmapRealization **)this + 50), &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v6);
    if ( v4 >= 0 )
    {
      v1 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v6 + 48LL))(v6);
      if ( v6 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return v1;
}

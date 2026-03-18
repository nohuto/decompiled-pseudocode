/*
 * XREFs of ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180010764
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18009F8C4 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNo.c)
 * Callees:
 *     ?Create@CSecondaryD2DBitmap@@SAJAEBU_GUID@@U_LUID@@IIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@PEAPEAV1@@Z @ 0x180012700 (-Create@CSecondaryD2DBitmap@@SAJAEBU_GUID@@U_LUID@@IIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@PEAPEAV1@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18009DBA0 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::CreateAndCacheBitmap(
        CD2DBitmapCache *this,
        struct _LUID a2,
        struct CSecondaryD2DBitmap **a3)
{
  __int64 v5; // rbx
  enum D2D1_ALPHA_MODE v6; // edi
  enum DXGI_FORMAT v7; // eax
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  enum DXGI_FORMAT v14; // [rsp+20h] [rbp-20h]
  unsigned int v15; // [rsp+70h] [rbp+30h] BYREF
  struct _LUID v16; // [rsp+78h] [rbp+38h]
  unsigned int v17; // [rsp+80h] [rbp+40h] BYREF
  struct CSecondaryD2DBitmap *v18; // [rsp+88h] [rbp+48h] BYREF

  v16 = a2;
  v18 = 0LL;
  *a3 = 0LL;
  (*(void (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this + 6) + 24LL))(
    *((_QWORD *)this + 6),
    &v17,
    &v15);
  v5 = *((_QWORD *)this + 6);
  v6 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
  v7 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  v8 = CSecondaryD2DBitmap::Create((const struct _GUID *)this + 2, v16, v17, v15, v7, v6, &v18);
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = DXGI_FORMAT_BC2_TYPELESS|0x100;
    goto LABEL_16;
  }
  v8 = CD2DResource::AddResourceNotifier(
         (struct CSecondaryD2DBitmap *)((char *)v18 + 16),
         (CD2DBitmapCache *)((char *)this + 24));
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = DXGI_FORMAT_BC4_TYPELESS|0x100;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v14);
    goto LABEL_17;
  }
  v10 = *((_DWORD *)this + 26);
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v9 = 0;
    if ( v11 <= *((_DWORD *)this + 25) )
    {
      *(_QWORD *)(*((_QWORD *)this + 10) + 8LL * *((unsigned int *)this + 26)) = v18;
      *((_DWORD *)this + 26) = v11;
      goto LABEL_7;
    }
    v12 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 80, 8LL, 1LL, &v18);
    v9 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
  }
  if ( v9 >= 0 )
  {
LABEL_7:
    *a3 = v18;
    return (unsigned int)v9;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x151u);
LABEL_17:
  if ( v18 )
    (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)v9;
}

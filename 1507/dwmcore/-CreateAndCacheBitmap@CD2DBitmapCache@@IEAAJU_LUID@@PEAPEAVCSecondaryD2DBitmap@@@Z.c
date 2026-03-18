/*
 * XREFs of ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180151BF4
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18001B640 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNo.c)
 * Callees:
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180016000 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Create@CSecondaryD2DBitmap@@SAJAEBU_GUID@@U_LUID@@IIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@PEAPEAV1@@Z @ 0x180150380 (-Create@CSecondaryD2DBitmap@@SAJAEBU_GUID@@U_LUID@@IIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@PEAPEAV1@.c)
 */

__int64 __fastcall CD2DBitmapCache::CreateAndCacheBitmap(
        CD2DBitmapCache *this,
        struct _LUID a2,
        struct CSecondaryD2DBitmap **a3)
{
  __int64 v3; // rdi
  __int64 v6; // rsi
  enum DXGI_FORMAT v7; // eax
  int v8; // eax
  unsigned int v9; // esi
  int v10; // r9d
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // ebx
  struct CSecondaryD2DBitmap *v14; // rdi
  int v16; // eax
  enum DXGI_FORMAT v17; // [rsp+20h] [rbp-28h]
  unsigned int v18; // [rsp+80h] [rbp+38h] BYREF
  struct _LUID v19; // [rsp+88h] [rbp+40h]
  unsigned int v20; // [rsp+90h] [rbp+48h] BYREF
  struct CSecondaryD2DBitmap *v21; // [rsp+98h] [rbp+50h] BYREF

  v19 = a2;
  v3 = *((_QWORD *)this + 6);
  v21 = 0LL;
  *a3 = 0LL;
  (*(void (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v3 + 24LL))(v3, &v20, &v18);
  v6 = *((_QWORD *)this + 6);
  LODWORD(v3) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
  v7 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
  v8 = CSecondaryD2DBitmap::Create((const struct _GUID *)this + 2, v19, v20, v18, v7, (enum D2D1_ALPHA_MODE)v3, &v21);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v8 = CD2DResource::AddResourceNotifier(
           (struct CSecondaryD2DBitmap *)((char *)v21 + 16),
           (CD2DBitmapCache *)((char *)this + 24));
    v9 = v8;
    if ( v8 < 0 )
    {
      v17 = DXGI_FORMAT_BC4_TYPELESS|0x100;
      goto LABEL_5;
    }
    v11 = *((_DWORD *)this + 26);
    v12 = v11 + 1;
    if ( v11 + 1 < v11 )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v9 = -2147024362;
LABEL_17:
      v17 = DXGI_FORMAT_BC4_SNORM|0x100;
      v10 = v13;
      goto LABEL_18;
    }
    v9 = 0;
    if ( v12 > *((_DWORD *)this + 25) )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 80, 8u, 1, &v21);
      v13 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
      v9 = v13;
      if ( v13 < 0 )
        goto LABEL_17;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 10) + 8LL * *((unsigned int *)this + 26)) = v21;
      *((_DWORD *)this + 26) = v12;
    }
    v14 = 0LL;
    *a3 = v21;
    v21 = 0LL;
    goto LABEL_11;
  }
  v17 = DXGI_FORMAT_BC2_TYPELESS|0x100;
LABEL_5:
  v10 = v8;
LABEL_18:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v17);
  v14 = v21;
LABEL_11:
  if ( v14 )
    (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v14 + 16LL))(v14);
  return v9;
}

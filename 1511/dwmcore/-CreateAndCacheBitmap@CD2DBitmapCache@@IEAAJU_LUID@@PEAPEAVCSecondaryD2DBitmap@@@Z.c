/*
 * XREFs of ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18000D308
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18003032C (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNo.c)
 * Callees:
 *     ?Create@CSecondaryD2DBitmap@@SAJAEBU_GUID@@U_LUID@@IIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@PEAPEAV1@@Z @ 0x18000F80C (-Create@CSecondaryD2DBitmap@@SAJAEBU_GUID@@U_LUID@@IIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@PEAPEAV1@.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x1800278A0 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  int v13; // ebx
  struct CSecondaryD2DBitmap *v14; // rdi
  int v16; // r9d
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
  if ( v8 < 0 )
  {
    v17 = DXGI_FORMAT_BC2_TYPELESS|0x100;
LABEL_14:
    v16 = v8;
    goto LABEL_17;
  }
  v8 = CD2DResource::AddResourceNotifier(
         (struct CSecondaryD2DBitmap *)((char *)v21 + 16),
         (CD2DBitmapCache *)((char *)this + 24));
  v9 = v8;
  if ( v8 < 0 )
  {
    v17 = DXGI_FORMAT_BC4_TYPELESS|0x100;
    goto LABEL_14;
  }
  v10 = *((_DWORD *)this + 26);
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v13 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v9 = -2147024362;
  }
  else
  {
    v9 = 0;
    if ( v11 <= *((_DWORD *)this + 25) )
    {
      *(_QWORD *)(*((_QWORD *)this + 10) + 8LL * *((unsigned int *)this + 26)) = v21;
      *((_DWORD *)this + 26) = v11;
LABEL_8:
      v14 = 0LL;
      *a3 = v21;
      v21 = 0LL;
      goto LABEL_9;
    }
    v12 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 80, 8LL, 1LL, &v21);
    v13 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
    v9 = v13;
    if ( v13 >= 0 )
      goto LABEL_8;
  }
  v17 = DXGI_FORMAT_BC4_SNORM|0x100;
  v16 = v13;
LABEL_17:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v17);
  v14 = v21;
LABEL_9:
  if ( v14 )
    (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v14 + 16LL))(v14);
  return v9;
}

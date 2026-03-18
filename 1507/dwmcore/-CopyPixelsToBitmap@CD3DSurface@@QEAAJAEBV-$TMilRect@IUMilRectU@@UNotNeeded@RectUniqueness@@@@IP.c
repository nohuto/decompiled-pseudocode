/*
 * XREFs of ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1800147E8
 * Callers:
 *     ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x1800823D8 (-GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 *     ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18013EB1C (-CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 * Callees:
 *     ?IsEqualPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@0@Z @ 0x1800136EC (-IsEqualPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@0@Z.c)
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x18001378C (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180014DF0 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?UnlockRect@CD3DSurface@@QEAAXXZ @ 0x1800153FC (-UnlockRect@CD3DSurface@@QEAAXXZ.c)
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x18001545C (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?DestroyAndRelease@CD3DResource@@QEAAXXZ @ 0x180015C58 (-DestroyAndRelease@CD3DResource@@QEAAXXZ.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1800190F8 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180051BD0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800570E4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180146848 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CD3DSurface::CopyPixelsToBitmap(
        struct CD3DSurface *a1,
        struct tagRECT *a2,
        int a3,
        __m128i *a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  __m128i *v9; // rsi
  char v10; // r13
  struct IBitmapSource *v11; // r14
  struct IBitmapSource *v12; // r15
  int v13; // eax
  CD3DDeviceLevel1 **v14; // rcx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edi
  int v18; // r13d
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  bool v26; // al
  int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // r13d
  unsigned int left; // r10d
  unsigned int top; // ecx
  unsigned int right; // r9d
  unsigned int bottom; // edx
  unsigned int v34; // r8d
  int v35; // r10d
  int v36; // eax
  unsigned int v37; // r8d
  unsigned int v38; // ecx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  int v42; // eax
  int v43; // r9d
  unsigned int v44; // [rsp+20h] [rbp-E0h]
  bool v45; // [rsp+28h] [rbp-D8h]
  struct IBitmapSource *v46; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B0h] BYREF
  CD3DSurface *v48; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v49; // [rsp+60h] [rbp-A0h]
  int v50; // [rsp+64h] [rbp-9Ch]
  struct IBitmapSource *v51; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v52; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v53; // [rsp+78h] [rbp-88h]
  int v54; // [rsp+80h] [rbp-80h] BYREF
  enum DXGI_FORMAT v55; // [rsp+88h] [rbp-78h] BYREF
  __int64 v56; // [rsp+8Ch] [rbp-74h]
  __int64 v57; // [rsp+94h] [rbp-6Ch]
  int v58; // [rsp+9Ch] [rbp-64h]
  __m128i v59; // [rsp+A0h] [rbp-60h]
  int v60; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v61; // [rsp+B4h] [rbp-4Ch]
  __int64 v62; // [rsp+BCh] [rbp-44h]
  int v63; // [rsp+C4h] [rbp-3Ch]
  unsigned int v64[2]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int8 *v65; // [rsp+D0h] [rbp-30h]
  __int64 v66; // [rsp+D8h] [rbp-28h] BYREF
  struct tagRECT v67; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v68; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v69[5]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v70; // [rsp+114h] [rbp+14h]
  __int64 v71; // [rsp+11Ch] [rbp+1Ch]
  __int64 v72; // [rsp+124h] [rbp+24h]
  __int128 v73; // [rsp+130h] [rbp+30h]

  v59.m128i_i64[0] = a5;
  *(_QWORD *)v64 = a1;
  *(_QWORD *)&v68 = "DWM Temp Readback (bitmap2)";
  v9 = a4;
  v10 = 0;
  v69[0] = a2->right - a2->left;
  v11 = 0LL;
  v12 = 0LL;
  v13 = a2->bottom - a2->top;
  v69[2] = 1;
  v69[3] = 1;
  v70 = 1LL;
  v53 = (struct tagRECT *)a4;
  v50 = a3;
  v48 = 0LL;
  v51 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v14 = (CD3DDeviceLevel1 **)*((_QWORD *)a1 + 2);
  v69[1] = v13;
  v15 = *((_DWORD *)a1 + 41);
  DWORD2(v68) = 27;
  v69[4] = v15;
  v71 = 3LL;
  v73 = v68;
  v72 = 0x20000LL;
  v16 = CD3DSurface::Create(v14, (const struct DWM_TEXTURE2D_DESC *)v69, 0LL, &v48);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x288u);
    goto LABEL_30;
  }
  CD3DDeviceLevel1::CopySurfaceRect(*(CD3DDeviceLevel1 **)(*((_QWORD *)a1 + 2) + 120LL), a1, a2, v48, 0LL, v45);
  v18 = a2->bottom - a2->top;
  v49 = a2->right - a2->left;
  v67.right = v49;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0;
  v60 = *((_DWORD *)a1 + 41);
  *(_QWORD *)&v67.left = 0LL;
  v55 = DXGI_FORMAT_UNKNOWN;
  v19 = *((_QWORD *)a1 + 16);
  v67.bottom = v18;
  LODWORD(v61) = (*(__int64 (__fastcall **)(char *))(v19 + 32))((char *)a1 + 128);
  HIDWORD(v61) = *(_DWORD *)(*(_QWORD *)v64 + 196LL);
  CD3DSurface::UpdatePixelFormatInfo(v48, (const struct PixelFormatInfo *)&v60);
  v20 = CD3DSurface::LockRect(v48, (struct LOCKED_RECT *)v64, &v67, D3D11_MAP_READ);
  v17 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x2C1u);
    v10 = 0;
    goto LABEL_30;
  }
  v21 = v49;
  v22 = HrCreateBitmapFromMemoryEx(v49, v18, (const struct PixelFormatInfo *)&v60, v64[0], v18 * v64[0], v65, 0LL, &v51);
  v17 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x2D2u);
LABEL_45:
    v11 = v51;
    goto LABEL_29;
  }
  *(_QWORD *)&v68 = __PAIR64__(a7, a6);
  v23 = *(_QWORD *)v59.m128i_i64[0];
  *((_QWORD *)&v68 + 1) = __PAIR64__(v18, v21);
  v24 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64 *))(v23 + 24))(
          v59.m128i_i64[0],
          &v68,
          2LL,
          &v47);
  v17 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x2DFu);
    goto LABEL_45;
  }
  v25 = (*(__int64 (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v47 + 24LL))(v47, &v55);
  v17 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x2E4u);
    goto LABEL_45;
  }
  LODWORD(v56) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL))(v47);
  HIDWORD(v56) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 40LL))(v47);
  v49 = GetPixelFormatSize(v55) >> 3;
  v26 = IsEqualPixelFormatInfo((const struct PixelFormatInfo *)&v60, &v55);
  v11 = v51;
  if ( v26 )
  {
    v46 = v51;
  }
  else
  {
    v42 = CFormatConverter::HrConvertBitmap(v51, (const struct PixelFormatInfo *)&v55, &v46);
    v17 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x2F6u);
      v12 = v46;
      goto LABEL_29;
    }
    v12 = v46;
  }
  v27 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v47 + 72LL))(v47, &v54, &v66);
  v17 = v27;
  if ( v27 < 0 )
  {
    v44 = 763;
LABEL_52:
    v43 = v27;
    goto LABEL_60;
  }
  v27 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v47 + 64LL))(v47, &v52);
  v17 = v27;
  if ( v27 < 0 )
  {
    v44 = 764;
    goto LABEL_52;
  }
  v28 = v50;
  if ( !v50 || !v9 )
  {
    v28 = 1;
    v53 = a2;
    v50 = 1;
    v9 = (__m128i *)a2;
  }
  v29 = 0;
  if ( !v28 )
    goto LABEL_29;
  while ( 1 )
  {
    left = a2->left;
    v59 = *v9;
    top = v59.m128i_u32[1];
    right = v59.m128i_u32[2];
    bottom = v59.m128i_u32[3];
    v34 = _mm_cvtsi128_si32(v59);
    if ( left > v34 )
      v34 = left;
    if ( a2->top > (unsigned __int32)v59.m128i_i32[1] )
      top = a2->top;
    if ( a2->right < (unsigned __int32)v59.m128i_i32[2] )
      right = a2->right;
    if ( a2->bottom < (unsigned __int32)v59.m128i_i32[3] )
      bottom = a2->bottom;
    if ( right <= v34 || bottom <= top )
      goto LABEL_28;
    v35 = -left;
    v36 = -a2->top;
    v37 = v35 + v34;
    v38 = top - a2->top;
    v67.left = v37;
    v67.top = v38;
    v67.bottom = v36 + bottom - v38;
    v39 = v52 * (unsigned __int64)v38;
    v67.right = v35 + right - v37;
    if ( v39 > 0xFFFFFFFF )
      break;
    v40 = v49 * (unsigned __int64)v37;
    if ( v40 > 0xFFFFFFFF )
    {
      v44 = 822;
      goto LABEL_59;
    }
    if ( (int)v40 + (int)v39 < (unsigned int)v39 )
    {
      v44 = 824;
      goto LABEL_59;
    }
    v27 = (*(__int64 (__fastcall **)(struct IBitmapSource *, struct tagRECT *, _QWORD, _QWORD, __int64))(*(_QWORD *)v46 + 72LL))(
            v46,
            &v67,
            v52,
            (unsigned int)(v54 - (v40 + v39)),
            v66 + (unsigned int)(v40 + v39));
    v17 = v27;
    if ( v27 < 0 )
    {
      v44 = 834;
      goto LABEL_52;
    }
    v9 = (__m128i *)v53;
    v28 = v50;
LABEL_28:
    ++v9;
    ++v29;
    v53 = (struct tagRECT *)v9;
    if ( v29 >= v28 )
      goto LABEL_29;
  }
  v44 = 818;
LABEL_59:
  v43 = -2147024362;
  v17 = -2147024362;
LABEL_60:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, v44);
LABEL_29:
  v10 = 1;
LABEL_30:
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  if ( v12 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10 )
    CD3DSurface::UnlockRect(v48);
  if ( v48 )
    CD3DResource::DestroyAndRelease(v48);
  return v17;
}

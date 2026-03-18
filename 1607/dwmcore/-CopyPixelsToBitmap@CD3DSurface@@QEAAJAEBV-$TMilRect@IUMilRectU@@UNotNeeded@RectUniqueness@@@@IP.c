/*
 * XREFs of ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180016828
 * Callers:
 *     ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x180017038 (-GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 *     ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18017EC00 (-CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 * Callees:
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x18001662C (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?UnlockRect@CD3DSurface@@QEAAXXZ @ 0x1800167F0 (-UnlockRect@CD3DSurface@@QEAAXXZ.c)
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x180016CAC (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?DestroyAndRelease@CD3DResource@@QEAAXXZ @ 0x180016E1C (-DestroyAndRelease@CD3DResource@@QEAAXXZ.c)
 *     ?IsEqualPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@0@Z @ 0x180016F04 (-IsEqualPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@0@Z.c)
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x180016FA4 (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180079CB0 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800B1AE4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180184D28 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CD3DSurface::CopyPixelsToBitmap(
        struct CD3DResourceManager **a1,
        struct tagRECT *a2,
        unsigned int a3,
        __m128i *a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  struct IBitmapSource *v11; // rdi
  int v12; // eax
  struct IBitmapSource *v13; // rsi
  struct CD3DResourceManager *v14; // rcx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // r15d
  struct CD3DSurface *v19; // rbx
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  bool v24; // al
  unsigned int v25; // r15d
  unsigned int left; // r10d
  unsigned int top; // ecx
  unsigned int right; // r9d
  unsigned int bottom; // edx
  unsigned int v30; // r8d
  int v31; // r10d
  int v32; // eax
  unsigned int v33; // r8d
  unsigned int v34; // ecx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  int v38; // eax
  unsigned int v39; // [rsp+20h] [rbp-E0h]
  char v40; // [rsp+40h] [rbp-C0h]
  int v41; // [rsp+44h] [rbp-BCh]
  unsigned int v42; // [rsp+44h] [rbp-BCh]
  __int64 v43; // [rsp+48h] [rbp-B8h] BYREF
  CD3DSurface *v44; // [rsp+50h] [rbp-B0h] BYREF
  struct IBitmapSource *v45; // [rsp+58h] [rbp-A8h] BYREF
  struct IBitmapSource *v46; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v47; // [rsp+68h] [rbp-98h] BYREF
  struct CD3DSurface *v48; // [rsp+70h] [rbp-90h] BYREF
  enum DXGI_FORMAT v49; // [rsp+78h] [rbp-88h] BYREF
  __int64 v50; // [rsp+7Ch] [rbp-84h]
  __int64 v51; // [rsp+84h] [rbp-7Ch]
  int v52; // [rsp+8Ch] [rbp-74h]
  __m128i v53; // [rsp+90h] [rbp-70h]
  int v54; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v55; // [rsp+A4h] [rbp-5Ch]
  __int64 v56; // [rsp+ACh] [rbp-54h]
  int v57; // [rsp+B4h] [rbp-4Ch]
  __int64 v58; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v59; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int8 *v60; // [rsp+C8h] [rbp-38h]
  struct tagRECT v61; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v62; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v63[5]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v64; // [rsp+104h] [rbp+4h]
  __int64 v65; // [rsp+10Ch] [rbp+Ch]
  __int64 v66; // [rsp+114h] [rbp+14h]
  __int128 v67; // [rsp+120h] [rbp+20h]

  v53.m128i_i64[0] = a5;
  v48 = (struct CD3DSurface *)a1;
  *(_QWORD *)&v62 = "DWM Temp Readback (bitmap2)";
  v63[0] = a2->right - a2->left;
  v11 = 0LL;
  v12 = a2->bottom - a2->top;
  v13 = 0LL;
  v44 = 0LL;
  v63[2] = 1;
  v63[3] = 1;
  v64 = 1LL;
  v40 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v43 = 0LL;
  v14 = a1[2];
  v63[1] = v12;
  v15 = *((_DWORD *)a1 + 41);
  DWORD2(v62) = 27;
  v63[4] = v15;
  v65 = 3LL;
  v67 = v62;
  v66 = 0x20000LL;
  v16 = CD3DSurface::Create(v14, (const struct DWM_TEXTURE2D_DESC *)v63, 0LL, &v44);
  v17 = v16;
  if ( v16 < 0 )
  {
    v39 = 647;
  }
  else
  {
    CD3DDeviceLevel1::CopySurfaceRect(*((CD3DDeviceLevel1 **)a1[2] + 16), (struct CD3DSurface *)a1, a2, v44, 0LL);
    v18 = a2->bottom - a2->top;
    v41 = a2->right - a2->left;
    v61.right = v41;
    v55 = 0LL;
    v56 = 0LL;
    v57 = 0;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0;
    v49 = DXGI_FORMAT_UNKNOWN;
    *(_QWORD *)&v61.left = 0LL;
    v19 = v48;
    v61.bottom = v18;
    v54 = *((_DWORD *)v48 + 41);
    LODWORD(v55) = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v48 + 16) + 32LL))((__int64)v48 + 128);
    HIDWORD(v55) = *((_DWORD *)v19 + 49);
    CD3DSurface::UpdatePixelFormatInfo(v44, (const struct PixelFormatInfo *)&v54);
    v16 = CD3DSurface::LockRect(v44, (struct LOCKED_RECT *)&v59, &v61, D3D11_MAP_READ);
    v17 = v16;
    if ( v16 >= 0 )
    {
      v40 = 1;
      v20 = HrCreateBitmapFromMemoryEx(v41, v18, (const struct PixelFormatInfo *)&v54, v59, v18 * v59, v60, 0LL, &v45);
      v17 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x2D1u);
      }
      else
      {
        *(_QWORD *)&v62 = __PAIR64__(a7, a6);
        v21 = *(_QWORD *)v53.m128i_i64[0];
        *((_QWORD *)&v62 + 1) = __PAIR64__(v18, v41);
        v22 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64 *))(v21 + 24))(
                v53.m128i_i64[0],
                &v62,
                2LL,
                &v43);
        v17 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x2DEu);
        }
        else
        {
          v23 = (*(__int64 (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v43 + 24LL))(v43, &v49);
          v17 = v23;
          if ( v23 >= 0 )
          {
            LODWORD(v50) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
            HIDWORD(v50) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 40LL))(v43);
            v42 = GetPixelFormatSize(v49) >> 3;
            v24 = IsEqualPixelFormatInfo((const struct PixelFormatInfo *)&v54, (const struct PixelFormatInfo *)&v49);
            v11 = v45;
            if ( v24 )
            {
              v46 = v45;
            }
            else
            {
              v38 = CFormatConverter::HrConvertBitmap(v45, (const struct PixelFormatInfo *)&v49, &v46);
              v17 = v38;
              if ( v38 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x2F5u);
                v13 = v46;
                goto LABEL_28;
              }
              v13 = v46;
            }
            v16 = (*(__int64 (__fastcall **)(__int64, struct CD3DSurface **, __int64 *))(*(_QWORD *)v43 + 72LL))(
                    v43,
                    &v48,
                    &v58);
            v17 = v16;
            if ( v16 < 0 )
            {
              v39 = 762;
            }
            else
            {
              v16 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v43 + 64LL))(v43, &v47);
              v17 = v16;
              if ( v16 >= 0 )
              {
                if ( !a3 || !a4 )
                {
                  a3 = 1;
                  a4 = (__m128i *)a2;
                }
                v25 = 0;
                while ( 1 )
                {
                  left = a2->left;
                  v53 = *a4;
                  top = v53.m128i_u32[1];
                  right = v53.m128i_u32[2];
                  bottom = v53.m128i_u32[3];
                  v30 = _mm_cvtsi128_si32(v53);
                  if ( left > v30 )
                    v30 = left;
                  if ( a2->top > (unsigned __int32)v53.m128i_i32[1] )
                    top = a2->top;
                  if ( a2->right < (unsigned __int32)v53.m128i_i32[2] )
                    right = a2->right;
                  if ( a2->bottom < (unsigned __int32)v53.m128i_i32[3] )
                    bottom = a2->bottom;
                  if ( right > v30 && bottom > top )
                  {
                    v31 = -left;
                    v32 = -a2->top;
                    v33 = v31 + v30;
                    v34 = top - a2->top;
                    v61.left = v33;
                    v61.top = v34;
                    v61.bottom = v32 + bottom - v34;
                    v35 = v47 * (unsigned __int64)v34;
                    v61.right = v31 + right - v33;
                    if ( v35 > 0xFFFFFFFF )
                    {
                      v17 = -2147024362;
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x331u);
                      goto LABEL_28;
                    }
                    v36 = v42 * (unsigned __int64)v33;
                    if ( v36 > 0xFFFFFFFF )
                    {
                      v17 = -2147024362;
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x335u);
                      goto LABEL_28;
                    }
                    if ( (int)v36 + (int)v35 < (unsigned int)v35 )
                    {
                      v17 = -2147024362;
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x337u);
                      goto LABEL_28;
                    }
                    v16 = (*(__int64 (__fastcall **)(struct IBitmapSource *, struct tagRECT *, _QWORD, _QWORD, __int64))(*(_QWORD *)v46 + 72LL))(
                            v46,
                            &v61,
                            v47,
                            (unsigned int)((_DWORD)v48 - (v36 + v35)),
                            v58 + (unsigned int)(v36 + v35));
                    v17 = v16;
                    if ( v16 < 0 )
                    {
                      v39 = 833;
                      goto LABEL_56;
                    }
                  }
                  ++v25;
                  ++a4;
                  if ( v25 >= a3 )
                    goto LABEL_28;
                }
              }
              v39 = 763;
            }
            goto LABEL_56;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x2E3u);
        }
      }
      v11 = v45;
      goto LABEL_28;
    }
    v39 = 704;
  }
LABEL_56:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v39);
LABEL_28:
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  if ( v13 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v11 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v40 )
    CD3DSurface::UnlockRect(v44);
  if ( v44 )
    CD3DResource::DestroyAndRelease(v44);
  return v17;
}

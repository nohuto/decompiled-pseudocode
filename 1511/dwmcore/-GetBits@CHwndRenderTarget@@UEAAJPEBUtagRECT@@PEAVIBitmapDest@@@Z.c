/*
 * XREFs of ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x18007CED0
 * Callers:
 *     ?GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180074E70 (-GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18007C120 (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007D178 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatInfo@IPixelFormat@@QEAAJPEAUPixelFormatInfo@@@Z @ 0x1800B1880 (-GetPixelFormatInfo@IPixelFormat@@QEAAJPEAUPixelFormatInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18010613C (-HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z @ 0x180113E94 (-UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::GetBits(
        CHwndRenderTarget *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // esi
  float left; // xmm9_4
  float top; // xmm6_4
  float right; // xmm7_4
  float bottom; // xmm8_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  unsigned int v16; // r13d
  int PixelFormatInfo; // eax
  float v18; // xmm3_4
  float v19; // xmm4_4
  int v21; // r9d
  float v22; // xmm2_4
  float v23; // xmm0_4
  signed int v24; // r15d
  signed int v25; // edi
  unsigned int v26; // [rsp+28h] [rbp-99h]
  float v27; // [rsp+38h] [rbp-89h]
  float v28; // [rsp+38h] [rbp-89h]
  struct IBitmapDest *v29; // [rsp+40h] [rbp-81h] BYREF
  IPixelFormat *v30; // [rsp+48h] [rbp-79h] BYREF
  __int64 v31; // [rsp+50h] [rbp-71h] BYREF
  int v32; // [rsp+58h] [rbp-69h]
  _BYTE v33[24]; // [rsp+60h] [rbp-61h] BYREF
  __int128 v34; // [rsp+78h] [rbp-49h] BYREF
  float v35; // [rsp+88h] [rbp-39h] BYREF
  float v36; // [rsp+8Ch] [rbp-35h]
  float v37; // [rsp+90h] [rbp-31h]
  float v38; // [rsp+94h] [rbp-2Dh]

  v3 = *((_QWORD *)this + 6);
  v4 = 0;
  v31 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  left = (float)a2->left;
  top = (float)a2->top;
  right = (float)a2->right;
  bottom = (float)a2->bottom;
  if ( !v3 )
  {
    v4 = -2003304442;
    v26 = 1396;
LABEL_28:
    v21 = v4;
LABEL_49:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v26);
    goto LABEL_18;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 160LL))(v3) )
  {
    v4 = -2147024891;
    v26 = 1401;
    goto LABEL_28;
  }
  (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6), &v35);
  v11 = v35;
  if ( left > v35 )
  {
    v11 = left;
    v35 = left;
  }
  v12 = v36;
  if ( top > v36 )
  {
    v12 = top;
    v36 = top;
  }
  v13 = v37;
  if ( v37 > right )
  {
    v13 = right;
    v37 = right;
  }
  v14 = v38;
  if ( v38 > bottom )
  {
    v14 = bottom;
    v38 = bottom;
  }
  if ( v13 <= v11 || v14 <= v12 )
  {
    v38 = 0.0;
    v37 = 0.0;
    v36 = 0.0;
    v35 = 0.0;
    goto LABEL_18;
  }
  v15 = (float)(v11 - left) + 6291456.25;
  v16 = (int)(LODWORD(v15) << 10) >> 11;
  v27 = (float)(v12 - top) + 6291456.25;
  v32 = (int)(LODWORD(v27) << 10) >> 11;
  CHwndRenderTarget::DesktopRectToRenderTargetRect((__int64)this - 40, (const struct MilRectF *)&v35, &v34);
  if ( (**(int (__fastcall ***)(struct IBitmapDest *, GUID *, __int64 *))a3)(
         a3,
         &GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4,
         &v31) >= 0 )
  {
    v18 = *((float *)&v34 + 1);
    v19 = *(float *)&v34;
    if ( ((*((_DWORD *)this + 20) - 2) & 0xFFFFFFFD) == 0 )
    {
      v22 = *((float *)&v34 + 2) - *(float *)&v34;
      if ( (float)(*((float *)&v34 + 3) - *((float *)&v34 + 1)) <= (float)(*((float *)&v34 + 2) - *(float *)&v34) )
        v22 = *((float *)&v34 + 3);
      *((float *)&v34 + 2) = *(float *)&v34 + v22;
      *((float *)&v34 + 3) = *((float *)&v34 + 1) + v22;
    }
  }
  else
  {
    PixelFormatInfo = CHwndRenderTarget::RenderForCapture((CHwndRenderTarget *)((char *)this - 40));
    v4 = PixelFormatInfo;
    if ( PixelFormatInfo < 0 )
    {
      v26 = 1454;
LABEL_48:
      v21 = PixelFormatInfo;
      goto LABEL_49;
    }
    v18 = *((float *)&v34 + 1);
    v19 = *(float *)&v34;
  }
  if ( *((_DWORD *)this + 20) == 1 || v31 )
  {
    PixelFormatInfo = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct IBitmapDest *, _QWORD, int))(**((_QWORD **)this + 6) + 96LL))(
                        *((_QWORD *)this + 6),
                        &v34,
                        a3,
                        v16,
                        (int)(LODWORD(v27) << 10) >> 11);
    v4 = PixelFormatInfo;
    if ( PixelFormatInfo >= 0 )
      goto LABEL_18;
    v26 = 1469;
    goto LABEL_48;
  }
  v23 = (float)(*((float *)&v34 + 2) - v19) + 6291456.25;
  v24 = (int)(LODWORD(v23) << 10) >> 11;
  v28 = (float)(*((float *)&v34 + 3) - v18) + 6291456.25;
  v25 = (int)(LODWORD(v28) << 10) >> 11;
  if ( v24 > 0 && v25 > 0 )
  {
    PixelFormatInfo = (**(__int64 (__fastcall ***)(struct IBitmapDest *, GUID *, IPixelFormat **))a3)(
                        a3,
                        &GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b,
                        &v30);
    v4 = PixelFormatInfo;
    if ( PixelFormatInfo >= 0 )
    {
      PixelFormatInfo = IPixelFormat::GetPixelFormatInfo(v30, (struct PixelFormatInfo *)v33);
      v4 = PixelFormatInfo;
      if ( PixelFormatInfo >= 0 )
      {
        PixelFormatInfo = HrCreateDestBitmap(v24, v25, (const struct PixelFormatInfo *)v33, &v29);
        v4 = PixelFormatInfo;
        if ( PixelFormatInfo >= 0 )
        {
          PixelFormatInfo = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct IBitmapDest *, _QWORD, _DWORD))(**((_QWORD **)this + 6) + 96LL))(
                              *((_QWORD *)this + 6),
                              &v34,
                              v29,
                              0LL,
                              0);
          v4 = PixelFormatInfo;
          if ( PixelFormatInfo >= 0 )
          {
            PixelFormatInfo = UnRotateBits(v29, (enum DXGI_MODE_ROTATION)*((_DWORD *)this + 20), a3, v16, v32);
            v4 = PixelFormatInfo;
            if ( PixelFormatInfo >= 0 )
              goto LABEL_18;
            v26 = 1509;
          }
          else
          {
            v26 = 1499;
          }
        }
        else
        {
          v26 = 1493;
        }
      }
      else
      {
        v26 = 1485;
      }
    }
    else
    {
      v26 = 1483;
    }
    goto LABEL_48;
  }
LABEL_18:
  if ( v29 )
    (*(void (__fastcall **)(struct IBitmapDest *))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v30 )
    (*(void (__fastcall **)(IPixelFormat *))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  return v4;
}

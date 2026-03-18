/*
 * XREFs of ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180009330
 * Callers:
 *     ?GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800090D0 (-GetBits@CDesktopRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800091F4 (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800095B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatInfo@IPixelFormat@@QEAAJPEAUPixelFormatInfo@@@Z @ 0x1800B74B4 (-GetPixelFormatInfo@IPixelFormat@@QEAAJPEAUPixelFormatInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18011C5E4 (-HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z @ 0x18012D3C8 (-UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::GetBits(
        CHwndRenderTarget *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  __m128i v3; // xmm9
  unsigned int v4; // ebx
  __int64 v7; // rcx
  float v8; // xmm9_4
  float top; // xmm6_4
  float right; // xmm7_4
  float bottom; // xmm8_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  unsigned int v17; // r12d
  int v18; // r13d
  int PixelFormatInfo; // eax
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  int v25; // r9d
  float v26; // xmm1_4
  float v27; // xmm0_4
  signed int v28; // r14d
  signed int v29; // esi
  unsigned int v30; // [rsp+28h] [rbp-89h]
  float v31; // [rsp+38h] [rbp-79h]
  float v32; // [rsp+38h] [rbp-79h]
  struct IBitmapDest *v33; // [rsp+40h] [rbp-71h] BYREF
  IPixelFormat *v34; // [rsp+48h] [rbp-69h] BYREF
  __int64 v35; // [rsp+50h] [rbp-61h] BYREF
  _BYTE v36[24]; // [rsp+58h] [rbp-59h] BYREF
  float v37; // [rsp+70h] [rbp-41h] BYREF
  float v38; // [rsp+74h] [rbp-3Dh]
  float v39; // [rsp+78h] [rbp-39h]
  float v40; // [rsp+7Ch] [rbp-35h]
  __int128 v41; // [rsp+80h] [rbp-31h] BYREF

  v3 = _mm_cvtsi32_si128(a2->left);
  v4 = 0;
  v35 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v7 = *((_QWORD *)this + 6);
  LODWORD(v8) = _mm_cvtepi32_ps(v3).m128_u32[0];
  top = (float)a2->top;
  right = (float)a2->right;
  bottom = (float)a2->bottom;
  if ( !v7 )
  {
    v4 = -2003304442;
    v30 = 1453;
LABEL_28:
    v25 = v4;
LABEL_31:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, v30);
    goto LABEL_18;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 168LL))(v7) )
  {
    v4 = -2147024891;
    v30 = 1458;
    goto LABEL_28;
  }
  (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6), &v37);
  v12 = v37;
  if ( v8 > v37 )
  {
    v12 = v8;
    v37 = v8;
  }
  v13 = v38;
  if ( top > v38 )
  {
    v13 = top;
    v38 = top;
  }
  v14 = v39;
  if ( v39 > right )
  {
    v14 = right;
    v39 = right;
  }
  v15 = v40;
  if ( v40 > bottom )
  {
    v15 = bottom;
    v40 = bottom;
  }
  if ( v14 <= v12 || v15 <= v13 )
  {
    v40 = 0.0;
    v39 = 0.0;
    v38 = 0.0;
    v37 = 0.0;
    goto LABEL_18;
  }
  v16 = (float)(v12 - v8) + 6291456.25;
  v17 = (int)(LODWORD(v16) << 10) >> 11;
  v31 = (float)(v13 - top) + 6291456.25;
  v18 = (int)(LODWORD(v31) << 10) >> 11;
  CHwndRenderTarget::DesktopRectToRenderTargetRect((__int64)this - 112, 0, (__int64)&v37, &v41);
  if ( (**(int (__fastcall ***)(struct IBitmapDest *, GUID *, __int64 *))a3)(
         a3,
         &GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4,
         &v35) >= 0 )
  {
    if ( ((*((_DWORD *)this + 20) - 2) & 0xFFFFFFFD) == 0 )
    {
      v23 = *(float *)&v41;
      v22 = *((float *)&v41 + 1);
      v26 = fminf(*((float *)&v41 + 2) - *(float *)&v41, *((float *)&v41 + 3) - *((float *)&v41 + 1));
      v21 = *(float *)&v41 + v26;
      v20 = *((float *)&v41 + 1) + v26;
      *((float *)&v41 + 2) = *(float *)&v41 + v26;
      *((float *)&v41 + 3) = *((float *)&v41 + 1) + v26;
      goto LABEL_16;
    }
  }
  else
  {
    PixelFormatInfo = CHwndRenderTarget::RenderForCapture((CHwndRenderTarget *)((char *)this - 112));
    v4 = PixelFormatInfo;
    if ( PixelFormatInfo < 0 )
    {
      v30 = 1511;
      goto LABEL_30;
    }
  }
  v20 = *((float *)&v41 + 3);
  v21 = *((float *)&v41 + 2);
  v22 = *((float *)&v41 + 1);
  v23 = *(float *)&v41;
LABEL_16:
  if ( *((_DWORD *)this + 20) == 1 || v35 )
  {
    PixelFormatInfo = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct IBitmapDest *, _QWORD, int))(**((_QWORD **)this + 6) + 96LL))(
                        *((_QWORD *)this + 6),
                        &v41,
                        a3,
                        v17,
                        v18);
    v4 = PixelFormatInfo;
    if ( PixelFormatInfo >= 0 )
      goto LABEL_18;
    v30 = 1526;
    goto LABEL_30;
  }
  v27 = (float)(v21 - v23) + 6291456.25;
  v28 = (int)(LODWORD(v27) << 10) >> 11;
  v32 = (float)(v20 - v22) + 6291456.25;
  v29 = (int)(LODWORD(v32) << 10) >> 11;
  if ( v28 > 0 && v29 > 0 )
  {
    PixelFormatInfo = (**(__int64 (__fastcall ***)(struct IBitmapDest *, GUID *, IPixelFormat **))a3)(
                        a3,
                        &GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b,
                        &v34);
    v4 = PixelFormatInfo;
    if ( PixelFormatInfo < 0 )
    {
      v30 = 1540;
      goto LABEL_30;
    }
    PixelFormatInfo = IPixelFormat::GetPixelFormatInfo(v34, (struct PixelFormatInfo *)v36);
    v4 = PixelFormatInfo;
    if ( PixelFormatInfo < 0 )
    {
      v30 = 1542;
      goto LABEL_30;
    }
    PixelFormatInfo = HrCreateDestBitmap(v28, v29, (const struct PixelFormatInfo *)v36, &v33);
    v4 = PixelFormatInfo;
    if ( PixelFormatInfo < 0 )
    {
      v30 = 1550;
      goto LABEL_30;
    }
    PixelFormatInfo = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct IBitmapDest *, _QWORD, _DWORD))(**((_QWORD **)this + 6) + 96LL))(
                        *((_QWORD *)this + 6),
                        &v41,
                        v33,
                        0LL,
                        0);
    v4 = PixelFormatInfo;
    if ( PixelFormatInfo < 0 )
    {
      v30 = 1556;
      goto LABEL_30;
    }
    PixelFormatInfo = UnRotateBits(v33, (enum DXGI_MODE_ROTATION)*((_DWORD *)this + 20), a3, v17, v18);
    v4 = PixelFormatInfo;
    if ( PixelFormatInfo < 0 )
    {
      v30 = 1566;
LABEL_30:
      v25 = PixelFormatInfo;
      goto LABEL_31;
    }
  }
LABEL_18:
  if ( v33 )
    (*(void (__fastcall **)(struct IBitmapDest *))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v34 )
    (*(void (__fastcall **)(IPixelFormat *))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  return v4;
}

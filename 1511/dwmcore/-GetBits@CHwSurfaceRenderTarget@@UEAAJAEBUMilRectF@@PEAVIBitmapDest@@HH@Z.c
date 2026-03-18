/*
 * XREFs of ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x18008D4F8
 * Callers:
 *     ?GetBits@CHwDisplayRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x1800802D0 (-GetBits@CHwDisplayRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 *     ?GetBits@CHwTextureRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x18014B250 (-GetBits@CHwTextureRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18002A398 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetBits(
        CHwSurfaceRenderTarget *this,
        const struct MilRectF *a2,
        struct IBitmapDest *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v7; // rbx
  unsigned int v9; // esi
  float v10; // xmm0_4
  float v11; // eax
  double v12; // xmm0_8
  int v13; // eax
  double v14; // xmm0_8
  int v15; // eax
  __int64 v16; // rdi
  int v17; // eax
  __int64 *v18; // rdx
  __int64 *v19; // r8
  __int64 v20; // r9
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // [rsp+40h] [rbp-58h] BYREF
  struct tagRECT v25; // [rsp+48h] [rbp-50h] BYREF

  v7 = *((_QWORD *)this + 20);
  v9 = 0;
  v10 = *(float *)a2 + 6291456.25;
  *(float *)&v24 = v10;
  v11 = v10;
  v12 = *((float *)a2 + 2);
  v25.left = (int)(LODWORD(v11) << 10) >> 11;
  *(float *)&v12 = v12 + 6291456.25;
  LODWORD(v24) = LODWORD(v12);
  v13 = LODWORD(v12);
  v14 = *((float *)a2 + 1);
  v25.right = v13 << 10 >> 11;
  *(float *)&v14 = v14 + 6291456.25;
  LODWORD(v24) = LODWORD(v14);
  v15 = LODWORD(v14);
  LODWORD(v14) = *((_DWORD *)a2 + 3);
  ++*(_DWORD *)(v7 + 504);
  v25.top = v15 << 10 >> 11;
  v25.bottom = COERCE_INT(*(float *)&v14 + 6291456.25) << 10 >> 11;
  v24 = v7;
  *(_DWORD *)(v7 + 508) = GetCurrentThreadId();
  v16 = *((_QWORD *)this + 20);
  ++*(_DWORD *)(v16 + 856);
  if ( (*(unsigned __int8 (__fastcall **)(CHwSurfaceRenderTarget *))(*(_QWORD *)this + 192LL))(this) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CHwSurfaceRenderTarget *))(*(_QWORD *)this + 160LL))(this) )
    {
      v9 = -2147024891;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024891, 0x33Fu);
    }
    else
    {
      v17 = CD3DSurface::CopyPixelsToBitmap(*((struct CD3DSurface **)this + 21), &v25, 0, 0LL, (__int64)a3, a4, a5);
      v9 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x347u);
    }
  }
  v18 = *(__int64 **)(v16 + 936);
  v19 = (__int64 *)(v16 + 928);
  while ( v18 != v19 && *((_DWORD *)v18 + 8) == *(_DWORD *)(v16 + 856) )
  {
    *((_DWORD *)v18 + 8) = 0;
    v18 = (__int64 *)v18[1];
  }
  v20 = *v18;
  if ( (__int64 *)*v18 != v19 )
  {
    v22 = *(_QWORD **)(v16 + 936);
    *v18 = (__int64)v19;
    v23 = *(_QWORD **)(v16 + 920);
    *(_QWORD *)(v16 + 936) = v18;
    *v23 = v20;
    *(_QWORD *)(v20 + 8) = v23;
    *(_QWORD *)(v16 + 920) = v22;
    *v22 = v16 + 912;
  }
  --*(_DWORD *)(v16 + 856);
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v24);
  return v9;
}

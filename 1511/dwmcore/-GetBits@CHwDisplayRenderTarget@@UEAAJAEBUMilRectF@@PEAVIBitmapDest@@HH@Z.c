/*
 * XREFs of ?GetBits@CHwDisplayRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x1800802D0
 * Callers:
 *     ?GetBits@CHwDisplayRenderTarget@@WLA@EAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x1800BD890 (-GetBits@CHwDisplayRenderTarget@@WLA@EAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x18008D4F8 (-GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVISlicerBitmap@@HH@Z @ 0x180145118 (-CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV-$TMilRect@IUMilRectU@@UNo.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetBits(
        CHwDisplayRenderTarget *this,
        const struct MilRectF *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  unsigned int v5; // edi
  __int64 v6; // rbx
  double v8; // xmm0_8
  int v12; // eax
  double v13; // xmm0_8
  int v14; // eax
  double v15; // xmm0_8
  __int64 v16; // r14
  int Bits; // eax
  __int64 *v18; // rdx
  __int64 *v19; // r8
  __int64 v20; // r9
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // r8
  float v25; // r15d
  unsigned int v26; // [rsp+20h] [rbp-51h]
  float v27; // [rsp+30h] [rbp-41h] BYREF
  int v28; // [rsp+34h] [rbp-3Dh] BYREF
  __int64 v29; // [rsp+38h] [rbp-39h] BYREF
  CMILPoolResource *v30; // [rsp+40h] [rbp-31h] BYREF
  __int64 v31; // [rsp+48h] [rbp-29h] BYREF
  __int64 v32; // [rsp+50h] [rbp-21h] BYREF
  __int64 v33; // [rsp+58h] [rbp-19h] BYREF
  _DWORD v34[4]; // [rsp+60h] [rbp-11h] BYREF

  v5 = 0;
  v6 = *((_QWORD *)this + 20);
  v8 = *(float *)a2;
  v29 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v33 = v6;
  *(float *)&v8 = v8 + 6291456.25;
  v27 = *(float *)&v8;
  v12 = LODWORD(v8);
  v13 = *((float *)a2 + 2);
  v34[0] = v12 << 10 >> 11;
  *(float *)&v13 = v13 + 6291456.25;
  v27 = *(float *)&v13;
  v14 = LODWORD(v13);
  v15 = *((float *)a2 + 1);
  v34[2] = v14 << 10 >> 11;
  *(float *)&v15 = v15 + 6291456.25;
  v27 = *(float *)&v15;
  LODWORD(v15) = *((_DWORD *)a2 + 3);
  v34[1] = (int)(LODWORD(v27) << 10) >> 11;
  v27 = *(float *)&v15 + 6291456.25;
  v34[3] = (int)(LODWORD(v27) << 10) >> 11;
  ++*(_DWORD *)(v6 + 504);
  *(_DWORD *)(v6 + 508) = GetCurrentThreadId();
  v16 = *((_QWORD *)this + 20);
  ++*(_DWORD *)(v16 + 856);
  if ( (*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 192LL))(this) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 160LL))(this) )
    {
      v5 = -2147024891;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024891, 0x211u);
      goto LABEL_5;
    }
    if ( (**(int (__fastcall ***)(struct IBitmapDest *, GUID *, __int64 *))a3)(
           a3,
           &GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4,
           &v29) < 0 )
    {
      (*(void (__fastcall **)(CHwDisplayRenderTarget *, _DWORD *))(*(_QWORD *)this + 232LL))(this, v34);
      Bits = CHwSurfaceRenderTarget::GetBits(this, a2, a3, a4, a5);
      v5 = Bits;
      if ( Bits >= 0 )
        goto LABEL_5;
      v26 = 583;
      goto LABEL_31;
    }
    v28 = 0;
    Bits = (*(__int64 (__fastcall **)(__int64, __int64 *, int *, float *))(*(_QWORD *)v29 + 56LL))(
             v29,
             &v32,
             &v28,
             &v27);
    v5 = Bits;
    if ( Bits < 0 )
    {
      v26 = 551;
LABEL_31:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bits, v26);
      goto LABEL_5;
    }
    if ( v32 == *(_QWORD *)(*((_QWORD *)this + 20) + 584LL) && v28 == *((_DWORD *)this + 28) )
    {
      v25 = v27;
      if ( v27 != 0.0 )
      {
        if ( (**(int (__fastcall ***)(CHwDisplayRenderTarget *, GUID *, __int64 *))this)(
               this,
               &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
               &v31) < 0 )
          goto LABEL_5;
        v25 = v27;
      }
      LOBYTE(v24) = 1;
      Bits = (*(__int64 (__fastcall **)(CHwDisplayRenderTarget *, _QWORD, __int64, CMILPoolResource **))(*(_QWORD *)this + 216LL))(
               this,
               LODWORD(v25),
               v24,
               &v30);
      v5 = Bits;
      if ( Bits >= 0 )
      {
        Bits = CD3DDeviceLevel1::CopyPixelsToSlicerBitmap(*((CD3DDeviceLevel1 **)this + 20), v30, a4, a5);
        v5 = Bits;
        if ( Bits >= 0 )
          goto LABEL_5;
        v26 = 566;
      }
      else
      {
        v26 = 560;
      }
      goto LABEL_31;
    }
  }
LABEL_5:
  if ( v30 )
    CMILPoolResource::Release(v30);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
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
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v33);
  return v5;
}

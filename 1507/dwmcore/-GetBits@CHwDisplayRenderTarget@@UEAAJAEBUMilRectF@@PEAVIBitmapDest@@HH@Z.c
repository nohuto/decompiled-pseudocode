/*
 * XREFs of ?GetBits@CHwDisplayRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x180044640
 * Callers:
 *     ?GetBits@CHwDisplayRenderTarget@@WLA@EAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x18009AC20 (-GetBits@CHwDisplayRenderTarget@@WLA@EAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x1800823D8 (-GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVISlicerBitmap@@HH@Z @ 0x1801338D8 (-CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV-$TMilRect@IUMilRectU@@UNo.c)
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
  __int64 v28; // [rsp+38h] [rbp-39h] BYREF
  CMILPoolResource *v29; // [rsp+40h] [rbp-31h] BYREF
  int v30; // [rsp+48h] [rbp-29h] BYREF
  __int64 v31; // [rsp+50h] [rbp-21h] BYREF
  __int64 v32; // [rsp+58h] [rbp-19h] BYREF
  __int64 v33; // [rsp+60h] [rbp-11h] BYREF
  _DWORD v34[4]; // [rsp+68h] [rbp-9h] BYREF

  v5 = 0;
  v6 = *((_QWORD *)this + 20);
  v8 = *(float *)a2;
  v28 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
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
  ++*(_DWORD *)(v6 + 512);
  *(_DWORD *)(v6 + 516) = GetCurrentThreadId();
  v16 = *((_QWORD *)this + 20);
  ++*(_DWORD *)(v16 + 904);
  if ( (*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 192LL))(this) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 160LL))(this) )
    {
      v5 = -2147024891;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024891, 0x210u);
      goto LABEL_5;
    }
    if ( (**(int (__fastcall ***)(struct IBitmapDest *, GUID *, __int64 *))a3)(
           a3,
           &GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4,
           &v28) < 0 )
    {
      (*(void (__fastcall **)(CHwDisplayRenderTarget *, _DWORD *))(*(_QWORD *)this + 232LL))(this, v34);
      Bits = CHwSurfaceRenderTarget::GetBits(this, a2, a3, a4, a5);
      v5 = Bits;
      if ( Bits >= 0 )
        goto LABEL_5;
      v26 = 582;
      goto LABEL_31;
    }
    Bits = (*(__int64 (__fastcall **)(__int64, __int64 *, int *, float *))(*(_QWORD *)v28 + 56LL))(
             v28,
             &v32,
             &v30,
             &v27);
    v5 = Bits;
    if ( Bits < 0 )
    {
      v26 = 550;
LABEL_31:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bits, v26);
      goto LABEL_5;
    }
    if ( v32 == *(_QWORD *)(*((_QWORD *)this + 20) + 576LL) && v30 == *((_DWORD *)this + 28) )
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
               &v29);
      v5 = Bits;
      if ( Bits >= 0 )
      {
        Bits = CD3DDeviceLevel1::CopyPixelsToSlicerBitmap(*((CD3DDeviceLevel1 **)this + 20), v29, a4, a5);
        v5 = Bits;
        if ( Bits >= 0 )
          goto LABEL_5;
        v26 = 565;
      }
      else
      {
        v26 = 559;
      }
      goto LABEL_31;
    }
  }
LABEL_5:
  if ( v29 )
    CMILPoolResource::Release(v29);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  v18 = *(__int64 **)(v16 + 984);
  v19 = (__int64 *)(v16 + 976);
  while ( v18 != v19 && *((_DWORD *)v18 + 8) == *(_DWORD *)(v16 + 904) )
  {
    *((_DWORD *)v18 + 8) = 0;
    v18 = (__int64 *)v18[1];
  }
  v20 = *v18;
  if ( (__int64 *)*v18 != v19 )
  {
    v22 = *(_QWORD **)(v16 + 984);
    *v18 = (__int64)v19;
    v23 = *(_QWORD **)(v16 + 968);
    *(_QWORD *)(v16 + 984) = v18;
    *v23 = v20;
    *(_QWORD *)(v20 + 8) = v23;
    *(_QWORD *)(v16 + 968) = v22;
    *v22 = v16 + 960;
  }
  --*(_DWORD *)(v16 + 904);
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v33);
  return v5;
}

/*
 * XREFs of ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@00PEA_N@Z @ 0x1800B7644
 * Callers:
 *     ?ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800B7A10 (-ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@0PEA_N0PEAVCDrawingContext@@@Z @ 0x180120DA4 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UD.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260 (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Invert@CBaseMatrix@@IEAAHAEBV1@@Z @ 0x1800476D8 (-Invert@CBaseMatrix@@IEAAHAEBV1@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180094744 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?IsPureTranslate@CBaseMatrix@@QEBAHXZ @ 0x1800FBDE8 (-IsPureTranslate@CBaseMatrix@@QEBAHXZ.c)
 */

__int64 __fastcall CMoveRenderPassInfo::SetLastLocalToWorldTransform(
        __int64 a1,
        CBaseMatrix *a2,
        __int128 *a3,
        _OWORD *a4,
        _BYTE *a5)
{
  unsigned int v9; // r12d
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // r13
  _OWORD *v11; // rax
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  float v24; // xmm1_4
  bool v25; // zf
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  __int64 v29; // rax
  __int64 v30; // rax
  __int128 *v31; // rax
  _OWORD *v32; // rax
  unsigned int v34; // [rsp+20h] [rbp-E0h]
  __int128 v35; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v36; // [rsp+50h] [rbp-B0h]
  __int128 v37; // [rsp+60h] [rbp-A0h]
  __int128 v38; // [rsp+70h] [rbp-90h]
  _OWORD v39[4]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v40[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v41[48]; // [rsp+100h] [rbp+0h] BYREF
  float v42; // [rsp+130h] [rbp+30h]
  float v43; // [rsp+134h] [rbp+34h]

  v9 = 0;
  PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(*(CComposition **)(a1 + 64));
  if ( a4 )
  {
    v11 = *(_OWORD **)(a1 + 40);
    if ( v11 )
    {
      *a4 = *v11;
      a4[1] = v11[1];
      a4[2] = v11[2];
      a4[3] = v11[3];
    }
  }
  if ( a5 )
    *a5 = 0;
  if ( a2 && (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(a2) )
  {
    v12 = *(_OWORD **)(a1 + 40);
    if ( v12 )
    {
      v13 = *((_OWORD *)a2 + 1);
      v39[0] = *(_OWORD *)a2;
      v39[1] = v13;
      v14 = *((_OWORD *)a2 + 3);
      v39[2] = *((_OWORD *)a2 + 2);
      v39[3] = v14;
      v15 = v12[1];
      v40[0] = *v12;
      v40[1] = v15;
      v16 = v12[3];
      v40[2] = v12[2];
      v40[3] = v16;
      if ( a3 )
      {
        v17 = a3[1];
        v35 = *a3;
        v18 = a3[2];
        v36 = v17;
        v19 = a3[3];
        v37 = v18;
        v38 = v19;
        D2DMatrixMultiply((struct D2DMatrix *)v39, (const struct D2DMatrix *)v39, (const struct D2DMatrix *)&v35);
      }
      v20 = *(__int128 **)(a1 + 48);
      if ( v20 )
      {
        v21 = v20[1];
        v35 = *v20;
        v22 = v20[2];
        v36 = v21;
        v23 = v20[3];
        v37 = v22;
        v38 = v23;
        D2DMatrixMultiply((struct D2DMatrix *)v40, (const struct D2DMatrix *)v40, (const struct D2DMatrix *)&v35);
      }
      CBaseMatrix::Invert((CBaseMatrix *)v41, (const struct CBaseMatrix *)v40);
      D2DMatrixMultiply((struct D2DMatrix *)v41, (const struct D2DMatrix *)v41, (const struct D2DMatrix *)v39);
      if ( (unsigned int)CBaseMatrix::IsPureTranslate((CBaseMatrix *)v41) )
      {
        v24 = v42;
        v25 = v42 == 0.0;
        v26 = v43;
        *(float *)(a1 + 56) = v42;
        *(float *)(a1 + 60) = v26;
        if ( !v25 || v26 != 0.0 )
        {
          v27 = v24 + 6291456.25;
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((int)(LODWORD(v27) << 10) >> 11) - v24)) & _xmm) <= 0.00390625 )
          {
            v28 = v26 + 6291456.25;
            if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((int)(LODWORD(v28) << 10) >> 11) - v26)) & _xmm) <= 0.00390625 )
            {
              if ( a5 )
                *a5 = 1;
            }
          }
        }
      }
    }
    if ( !*(_QWORD *)(a1 + 40) )
    {
      v29 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              64LL);
      *(_QWORD *)(a1 + 40) = v29;
      if ( !v29 )
      {
        v34 = 337;
LABEL_23:
        v9 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v34);
LABEL_33:
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)(a1 + 40));
        *(_QWORD *)(a1 + 40) = 0LL;
        return v9;
      }
    }
    if ( a3 )
    {
      if ( !*(_QWORD *)(a1 + 48) )
      {
        v30 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                64LL);
        *(_QWORD *)(a1 + 48) = v30;
        if ( !v30 )
        {
          v34 = 343;
          goto LABEL_23;
        }
      }
      v31 = *(__int128 **)(a1 + 48);
      *v31 = *a3;
      v31[1] = a3[1];
      v31[2] = a3[2];
      v31[3] = a3[3];
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *(_QWORD *)(a1 + 48));
      *(_QWORD *)(a1 + 48) = 0LL;
    }
    v32 = *(_OWORD **)(a1 + 40);
    *v32 = *(_OWORD *)a2;
    v32[1] = *((_OWORD *)a2 + 1);
    v32[2] = *((_OWORD *)a2 + 2);
    v32[3] = *((_OWORD *)a2 + 3);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 352LL);
    (*(void (__fastcall **)(struct IRenderTargetDesktop *, _QWORD))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef + 240LL))(
      PrimaryDesktopRenderTargetNoRef,
      *(_QWORD *)(a1 + 72));
  }
  else
  {
    a2 = 0LL;
  }
  if ( !a2 )
    goto LABEL_33;
  return v9;
}

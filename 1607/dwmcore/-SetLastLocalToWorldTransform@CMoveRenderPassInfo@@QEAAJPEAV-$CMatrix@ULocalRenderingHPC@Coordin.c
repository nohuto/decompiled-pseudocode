/*
 * XREFs of ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@00PEA_N@Z @ 0x1800BB3C8
 * Callers:
 *     ?ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800BB714 (-ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@0PEA_N0PEAVCDrawingContext@@@Z @ 0x180138CF8 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UD.c)
 * Callees:
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x18003AE80 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A260 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A7A0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B440 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMoveRenderPassInfo::SetLastLocalToWorldTransform(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned int v9; // r15d
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // r12
  __int64 v11; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  const struct CMILMatrix *v21; // rdx
  float v22; // xmm1_4
  bool v23; // zf
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // [rsp+28h] [rbp-E0h]
  _OWORD v33[4]; // [rsp+38h] [rbp-D0h] BYREF
  int v34; // [rsp+78h] [rbp-90h]
  _OWORD v35[4]; // [rsp+88h] [rbp-80h] BYREF
  int v36; // [rsp+C8h] [rbp-40h]
  _BYTE v37[48]; // [rsp+D8h] [rbp-30h] BYREF
  float v38; // [rsp+108h] [rbp+0h]
  float v39; // [rsp+10Ch] [rbp+4h]
  int v40; // [rsp+118h] [rbp+10h]

  v9 = 0;
  PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(*(CComposition **)(a1 + 64));
  if ( a4 )
  {
    v11 = *(_QWORD *)(a1 + 40);
    if ( v11 )
    {
      *(_OWORD *)a4 = *(_OWORD *)v11;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(v11 + 16);
      *(_OWORD *)(a4 + 32) = *(_OWORD *)(v11 + 32);
      *(_OWORD *)(a4 + 48) = *(_OWORD *)(v11 + 48);
      *(_DWORD *)(a4 + 64) = *(_DWORD *)(v11 + 64);
    }
  }
  if ( a5 )
    *a5 = 0;
  if ( !PrimaryDesktopRenderTargetNoRef || !a2 || !CMILMatrix::Is2DAxisAlignedPreserving<1>(a2) )
  {
    a2 = 0LL;
    goto LABEL_10;
  }
  v13 = *(_QWORD *)(a1 + 40);
  if ( v13 )
  {
    v14 = *(_OWORD *)a2;
    v15 = *(_OWORD *)(a2 + 16);
    v16 = *(_DWORD *)(a2 + 64);
    v40 = 0;
    v35[0] = v14;
    v17 = *(_OWORD *)(a2 + 32);
    v35[1] = v15;
    v18 = *(_OWORD *)(a2 + 48);
    v35[2] = v17;
    v35[3] = v18;
    v36 = v16;
    v34 = *(_DWORD *)(v13 + 64);
    v19 = *(_OWORD *)(v13 + 16);
    v33[0] = *(_OWORD *)v13;
    v33[1] = v19;
    v20 = *(_OWORD *)(v13 + 48);
    v33[2] = *(_OWORD *)(v13 + 32);
    v33[3] = v20;
    if ( a3 )
      CMILMatrix::Multiply((CMILMatrix *)v35, (const struct CMILMatrix *)a3);
    v21 = *(const struct CMILMatrix **)(a1 + 48);
    if ( v21 )
      CMILMatrix::Multiply((CMILMatrix *)v33, v21);
    CMILMatrix::SetToInverse((CMILMatrix *)v37, (const struct CMILMatrix *)v33);
    CMILMatrix::Multiply((CMILMatrix *)v37, (const struct CMILMatrix *)v35);
    if ( (unsigned __int8)CMILMatrix::IsTranslate<1>((__int64)v37) )
    {
      v22 = v38;
      v23 = v38 == 0.0;
      v24 = v39;
      *(float *)(a1 + 56) = v38;
      *(float *)(a1 + 60) = v24;
      if ( !v23 || v24 != 0.0 )
      {
        v25 = v22 + 6291456.25;
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((int)(LODWORD(v25) << 10) >> 11) - v22)) & _xmm) <= 0.00390625 )
        {
          v26 = v24 + 6291456.25;
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((int)(LODWORD(v26) << 10) >> 11) - v24)) & _xmm) <= 0.00390625 )
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
    v30 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            68LL);
    if ( v30 )
      *(_DWORD *)(v30 + 64) = 0;
    *(_QWORD *)(a1 + 40) = v30;
    if ( !v30 )
    {
      v32 = 324;
LABEL_41:
      v9 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v32);
      goto LABEL_11;
    }
  }
  if ( !a3 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(a1 + 48));
    *(_QWORD *)(a1 + 48) = 0LL;
    goto LABEL_28;
  }
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v31 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            68LL);
    if ( v31 )
      *(_DWORD *)(v31 + 64) = 0;
    *(_QWORD *)(a1 + 48) = v31;
    if ( !v31 )
    {
      v32 = 330;
      goto LABEL_41;
    }
  }
  v27 = *(_QWORD *)(a1 + 48);
  *(_OWORD *)v27 = *(_OWORD *)a3;
  *(_OWORD *)(v27 + 16) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(v27 + 32) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(v27 + 48) = *(_OWORD *)(a3 + 48);
  *(_DWORD *)(v27 + 64) = *(_DWORD *)(a3 + 64);
LABEL_28:
  v28 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)v28 = *(_OWORD *)a2;
  *(_OWORD *)(v28 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v28 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v28 + 48) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(v28 + 64) = *(_DWORD *)(a2 + 64);
  v29 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 352LL);
  (*(void (__fastcall **)(struct IRenderTargetDesktop *, __int64))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef + 232LL))(
    PrimaryDesktopRenderTargetNoRef,
    v29);
LABEL_10:
  if ( !a2 )
  {
LABEL_11:
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(a1 + 40));
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  return v9;
}

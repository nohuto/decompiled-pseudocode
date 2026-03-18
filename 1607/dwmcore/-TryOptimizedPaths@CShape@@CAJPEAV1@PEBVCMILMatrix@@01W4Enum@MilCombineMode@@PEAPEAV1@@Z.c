/*
 * XREFs of ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180095374
 * Callers:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180001748 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z @ 0x1800982D4 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z.c)
 * Callees:
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x18002BE80 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002BF80 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18002C2EC (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002C340 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18002C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18002C950 (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A260 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800976A0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180097A50 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800980B4 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009A468 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::TryOptimizedPaths(
        CRegionShape *a1,
        __int64 a2,
        CRegionShape *a3,
        const struct CMILMatrix *a4,
        int a5,
        struct CShape **a6)
{
  unsigned int v6; // ebx
  __int64 (__fastcall *v10)(CRegionShape *, _QWORD *); // rax
  __int64 (__fastcall *v11)(CRegionShape *, __int64, __int64); // rax
  char (__fastcall *v12)(CRegionShape *, unsigned int *); // rax
  char IsRectangles; // al
  bool (__fastcall *v14)(CRectanglesShape *__hidden, unsigned int *); // rax
  bool v15; // al
  __int64 (__fastcall *v16)(CRegionShape *, _QWORD *); // rax
  int TightBounds; // eax
  __int64 (__fastcall *v18)(CRegionShape *, float *, const struct CMILMatrix *); // rax
  int v19; // eax
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  LPVOID (__fastcall *v24)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  _QWORD *v25; // rax
  struct CShape *v26; // rdi
  _QWORD *v27; // r14
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rax
  unsigned int v36; // [rsp+20h] [rbp-50h]
  unsigned int v37; // [rsp+30h] [rbp-40h] BYREF
  __int128 v38; // [rsp+38h] [rbp-38h] BYREF
  float v39; // [rsp+48h] [rbp-28h] BYREF
  float v40; // [rsp+4Ch] [rbp-24h]
  float v41; // [rsp+50h] [rbp-20h]
  float v42; // [rsp+54h] [rbp-1Ch]
  __int128 v43; // [rsp+58h] [rbp-18h] BYREF

  v6 = 0;
  *a6 = 0LL;
  if ( a1 )
  {
    v10 = *(__int64 (__fastcall **)(CRegionShape *, _QWORD *))(*(_QWORD *)a1 + 24LL);
    if ( (char *)v10 == (char *)CRectanglesShape::GetTightBounds )
    {
      CRectanglesShape::GetTightBounds(a1, &v43);
    }
    else if ( v10 == CRegionShape::GetTightBounds )
    {
      CRegionShape::GetTightBounds(a1, &v43);
    }
    else
    {
      ((void (__fastcall *)(CRegionShape *, __int128 *, _QWORD))v10)(a1, &v43, 0LL);
    }
    if ( !(unsigned __int8)IsRectEmptyOrInvalid(&v43) && a3 )
    {
      v11 = *(__int64 (__fastcall **)(CRegionShape *, __int64, __int64))(*(_QWORD *)a3 + 24LL);
      if ( (char *)v11 == (char *)CRectanglesShape::GetTightBounds )
      {
        CRectanglesShape::GetTightBounds(a3, &v39);
      }
      else if ( v11 == CShape::GetTightBounds )
      {
        CShape::GetTightBounds(a3, (__int64)&v39, 0LL);
      }
      else
      {
        v11(a3, (__int64)&v39, 0LL);
      }
      if ( !(unsigned __int8)IsRectEmptyOrInvalid(&v39) )
      {
        if ( a5 != 1 )
          return v6;
        v12 = *(char (__fastcall **)(CRegionShape *, unsigned int *))(*(_QWORD *)a1 + 32LL);
        if ( (char *)v12 == (char *)CRectanglesShape::IsRectangles )
          IsRectangles = CRectanglesShape::IsRectangles(a1, &v37);
        else
          IsRectangles = v12 == CRegionShape::IsRectangles ? CRegionShape::IsRectangles(a1, &v37) : v12(a1, &v37);
        if ( !IsRectangles || v37 != 1 )
          return v6;
        v14 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(*(_QWORD *)a3 + 32LL);
        v15 = v14 == CRectanglesShape::IsRectangles ? CRectanglesShape::IsRectangles(a3, &v37) : v14(a3, &v37);
        if ( !v15 || v37 != 1 || a4 && !CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)a4) )
          return v6;
        v16 = *(__int64 (__fastcall **)(CRegionShape *, _QWORD *))(*(_QWORD *)a1 + 24LL);
        if ( (char *)v16 == (char *)CRectanglesShape::GetTightBounds )
        {
          TightBounds = CRectanglesShape::GetTightBounds(a1, &v38);
        }
        else if ( v16 == CRegionShape::GetTightBounds )
        {
          TightBounds = CRegionShape::GetTightBounds(a1, &v38);
        }
        else
        {
          TightBounds = ((__int64 (__fastcall *)(CRegionShape *, __int128 *, _QWORD))v16)(a1, &v38, 0LL);
        }
        v6 = TightBounds;
        if ( TightBounds < 0 )
        {
          v36 = 660;
        }
        else
        {
          v18 = *(__int64 (__fastcall **)(CRegionShape *, float *, const struct CMILMatrix *))(*(_QWORD *)a3 + 24LL);
          if ( (char *)v18 == (char *)CRectanglesShape::GetTightBounds )
            v19 = CRectanglesShape::GetTightBounds(a3, &v39);
          else
            v19 = v18(a3, &v39, a4);
          v6 = v19;
          if ( v19 >= 0 )
          {
            v20 = *(float *)&v38;
            if ( v39 > *(float *)&v38 )
            {
              v20 = v39;
              *(float *)&v38 = v39;
            }
            v21 = *((float *)&v38 + 1);
            if ( v40 > *((float *)&v38 + 1) )
            {
              v21 = v40;
              *((float *)&v38 + 1) = v40;
            }
            v22 = *((float *)&v38 + 2);
            if ( *((float *)&v38 + 2) > v41 )
            {
              v22 = v41;
              *((float *)&v38 + 2) = v41;
            }
            v23 = *((float *)&v38 + 3);
            if ( *((float *)&v38 + 3) > v42 )
            {
              v23 = v42;
              *((float *)&v38 + 3) = v42;
            }
            if ( v22 <= v20 || v23 <= v21 )
              v38 = 0uLL;
            v24 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
            if ( v24 == WPF::ProcessHeapImpl::Alloc )
              v25 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x40uLL);
            else
              v25 = (_QWORD *)v24(WPF::g_pProcessHeap, 64LL);
            v26 = (struct CShape *)v25;
            if ( v25 )
            {
              v27 = v25 + 1;
              *v25 = &CRectanglesShape::`vftable';
              v28 = v25 + 5;
              *((_DWORD *)v27 + 6) = 0;
              *v27 = v28;
              v27[1] = v28;
              *((_DWORD *)v27 + 4) = 1;
              *((_DWORD *)v27 + 5) = 1;
              *((_QWORD *)v26 + 7) = 0LL;
              *((_DWORD *)v27 + 6) = 0;
              DynArrayImpl<0>::ShrinkToSize(v27, 16LL);
              v29 = *((_QWORD *)v26 + 7);
              if ( v29 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
                *((_QWORD *)v26 + 7) = 0LL;
              }
              v43 = v38;
              DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
                v27,
                &v43,
                1LL);
            }
            *a6 = v26;
            if ( v26 )
              return v6;
            v36 = 665;
            goto LABEL_96;
          }
          v36 = 661;
        }
        v32 = v6;
LABEL_97:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, v36);
        return v6;
      }
    }
    if ( !(unsigned __int8)CShape::IsEmpty(a1) )
      goto LABEL_61;
  }
  if ( a3 && !(unsigned __int8)CShape::IsEmpty(a3) )
  {
LABEL_61:
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        v31 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                64LL);
        if ( v31 )
        {
          *(_QWORD *)v31 = &CRectanglesShape::`vftable';
          *(_DWORD *)(v31 + 32) = 0;
          *(_QWORD *)(v31 + 8) = v31 + 40;
          *(_QWORD *)(v31 + 16) = v31 + 40;
          *(_DWORD *)(v31 + 24) = 1;
          *(_DWORD *)(v31 + 28) = 1;
          *(_QWORD *)(v31 + 56) = 0LL;
        }
        *a6 = (struct CShape *)v31;
        if ( v31 )
          return v6;
        v36 = 610;
        goto LABEL_96;
      }
      if ( a5 != 2 )
        return v6;
      if ( !a1 || (unsigned __int8)CShape::IsEmpty(a1) )
      {
        v35 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                64LL);
        if ( v35 )
        {
          *(_QWORD *)v35 = &CRectanglesShape::`vftable';
          *(_DWORD *)(v35 + 32) = 0;
          *(_QWORD *)(v35 + 8) = v35 + 40;
          *(_QWORD *)(v35 + 16) = v35 + 40;
          *(_DWORD *)(v35 + 24) = 1;
          *(_DWORD *)(v35 + 28) = 1;
          *(_QWORD *)(v35 + 56) = 0LL;
        }
        *a6 = (struct CShape *)v35;
        if ( v35 )
          return v6;
        v36 = 624;
LABEL_96:
        v32 = -2147024882;
        v6 = -2147024882;
        goto LABEL_97;
      }
      v34 = CShape::CopyShape((struct ID2D1RegionGeometry **)a1, 0LL, a6);
      v6 = v34;
      if ( v34 >= 0 )
        return v6;
      v36 = 636;
    }
    else if ( !a1 || (unsigned __int8)CShape::IsEmpty(a1) )
    {
      if ( a4 && (!CShape::IsAxisAlignedRectangle(a3) || !CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)a4)) )
        return v6;
      v34 = CShape::CopyShape((struct ID2D1RegionGeometry **)a3, a4, a6);
      v6 = v34;
      if ( v34 >= 0 )
        return v6;
      v36 = 587;
    }
    else
    {
      v34 = CShape::CopyShape((struct ID2D1RegionGeometry **)a1, 0LL, a6);
      v6 = v34;
      if ( v34 >= 0 )
        return v6;
      v36 = 598;
    }
    v32 = v34;
    goto LABEL_97;
  }
  v33 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          64LL);
  if ( v33 )
  {
    *(_QWORD *)v33 = &CRectanglesShape::`vftable';
    *(_DWORD *)(v33 + 32) = 0;
    *(_QWORD *)(v33 + 8) = v33 + 40;
    *(_QWORD *)(v33 + 16) = v33 + 40;
    *(_DWORD *)(v33 + 24) = 1;
    *(_DWORD *)(v33 + 28) = 1;
    *(_QWORD *)(v33 + 56) = 0LL;
  }
  *a6 = (struct CShape *)v33;
  if ( !v33 )
  {
    v36 = 562;
    goto LABEL_96;
  }
  return v6;
}

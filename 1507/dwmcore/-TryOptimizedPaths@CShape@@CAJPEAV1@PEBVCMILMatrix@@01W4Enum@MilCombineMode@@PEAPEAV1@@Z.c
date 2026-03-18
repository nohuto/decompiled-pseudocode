/*
 * XREFs of ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800788C0
 * Callers:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18000D558 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x1800222FC (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Is2DAffine@CBaseMatrix@@QEBAHH@Z @ 0x180022410 (-Is2DAffine@CBaseMatrix@@QEBAHH@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180077F5C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180077FF0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18007824C (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800782D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x180078558 (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180078DC0 (-GetTightBounds@CRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180079110 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CShape::TryOptimizedPaths(
        CRectangleShape *a1,
        CBaseMatrix *a2,
        CRectangleShape *a3,
        float *a4,
        int a5,
        struct CShape **a6)
{
  unsigned int v10; // esi
  __int64 (__fastcall *v11)(CRectangleShape *); // rbx
  __int64 (__fastcall *v12)(CComplexShape *, __int64, CBaseMatrix *); // rbx
  float v13; // xmm1_4
  __int64 (__fastcall *v14)(CRectangleShape *); // rbx
  int TightBounds; // eax
  __int64 (__fastcall *v16)(CRectangleShape *); // rbx
  int v17; // eax
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  LPVOID (__fastcall *v22)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  char *v23; // rax
  float v25; // xmm1_4
  int v26; // eax
  CRectangleShape *v27; // rax
  CRectangleShape *v28; // rcx
  CRectangleShape *v29; // rax
  CRectangleShape *v30; // rcx
  int v31; // eax
  int v32; // eax
  CRectangleShape *v33; // rax
  CRectangleShape *v34; // rcx
  unsigned int v35; // [rsp+20h] [rbp-58h]
  __int128 v36; // [rsp+30h] [rbp-48h] BYREF
  float v37; // [rsp+40h] [rbp-38h] BYREF
  float v38; // [rsp+44h] [rbp-34h]
  float v39; // [rsp+48h] [rbp-30h]
  float v40; // [rsp+4Ch] [rbp-2Ch]
  __int128 v41; // [rsp+50h] [rbp-28h]

  v10 = 0;
  *a6 = 0LL;
  if ( !a1 )
    goto LABEL_107;
  v11 = *(__int64 (__fastcall **)(CRectangleShape *))(*(_QWORD *)a1 + 24LL);
  if ( v11 == CRectangleShape::GetTightBounds )
    CRectangleShape::GetTightBounds(a1);
  else
    ((void (__fastcall *)(CRectangleShape *, float *, _QWORD))v11)(a1, &v37, 0LL);
  if ( v39 > v37 && v40 > v38 && a3 )
  {
    v12 = *(__int64 (__fastcall **)(CComplexShape *, __int64, CBaseMatrix *))(*(_QWORD *)a3 + 24LL);
    if ( (char *)v12 == (char *)CRectangleShape::GetTightBounds )
    {
      CRectangleShape::GetTightBounds(a3);
    }
    else if ( v12 == CShape::GetTightBounds )
    {
      CShape::GetTightBounds(a3, (__int64)&v36, 0LL);
    }
    else
    {
      v12(a3, (__int64)&v36, 0LL);
    }
    if ( *((float *)&v36 + 2) > *(float *)&v36 && *((float *)&v36 + 3) > *((float *)&v36 + 1) )
    {
      if ( a5 != 1
        || (*(unsigned int (__fastcall **)(CRectangleShape *))(*(_QWORD *)a1 + 8LL))(a1)
        && ((*(unsigned int (__fastcall **)(CRectangleShape *))(*(_QWORD *)a1 + 8LL))(a1) != 2
         || (unsigned int)CRegionShape::GetRectCount(a1) != 1) )
      {
        return v10;
      }
      if ( (*(unsigned int (__fastcall **)(CRectangleShape *))(*(_QWORD *)a3 + 8LL))(a3)
        && ((*(unsigned int (__fastcall **)(CRectangleShape *))(*(_QWORD *)a3 + 8LL))(a3) != 2
         || (unsigned int)CRegionShape::GetRectCount(a3) != 1) )
      {
        return v10;
      }
      if ( a2 && !(unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(a2) )
        return v10;
      if ( a4 )
      {
        if ( !(unsigned int)CBaseMatrix::Is2DAffine((CBaseMatrix *)a4, 1) )
          return v10;
        v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a4[1]) & _xmm);
        if ( v13 >= 0.00012207031 || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a4[4]) & _xmm) >= 0.00012207031 )
        {
          v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*a4) & _xmm);
          if ( v25 >= 0.00012207031 || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a4[5]) & _xmm) >= 0.00012207031 )
            return v10;
        }
      }
      v14 = *(__int64 (__fastcall **)(CRectangleShape *))(*(_QWORD *)a1 + 24LL);
      if ( v14 == CRectangleShape::GetTightBounds )
        TightBounds = CRectangleShape::GetTightBounds(a1);
      else
        TightBounds = ((__int64 (__fastcall *)(CRectangleShape *, __int128 *, CBaseMatrix *))v14)(a1, &v36, a2);
      v10 = TightBounds;
      if ( TightBounds < 0 )
      {
        v35 = 635;
      }
      else
      {
        v16 = *(__int64 (__fastcall **)(CRectangleShape *))(*(_QWORD *)a3 + 24LL);
        if ( v16 == CRectangleShape::GetTightBounds )
          v17 = CRectangleShape::GetTightBounds(a3);
        else
          v17 = ((__int64 (__fastcall *)(CRectangleShape *, float *, float *))v16)(a3, &v37, a4);
        v10 = v17;
        if ( v17 >= 0 )
        {
          v18 = *(float *)&v36;
          if ( v37 > *(float *)&v36 )
          {
            v18 = v37;
            *(float *)&v36 = v37;
          }
          v19 = *((float *)&v36 + 1);
          if ( v38 > *((float *)&v36 + 1) )
          {
            v19 = v38;
            *((float *)&v36 + 1) = v38;
          }
          v20 = *((float *)&v36 + 2);
          if ( *((float *)&v36 + 2) > v39 )
          {
            v20 = v39;
            *((float *)&v36 + 2) = v39;
          }
          v21 = *((float *)&v36 + 3);
          if ( *((float *)&v36 + 3) > v40 )
          {
            v21 = v40;
            *((float *)&v36 + 3) = v40;
          }
          if ( v20 <= v18 || v21 <= v19 )
            v36 = 0uLL;
          v22 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
          if ( v22 == WPF::ProcessHeapImpl::Alloc )
            v23 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x20uLL);
          else
            v23 = (char *)v22(WPF::g_pProcessHeap, 32LL);
          if ( v23 )
          {
            *(_QWORD *)v23 = &CRectangleShape::`vftable';
            *((_QWORD *)v23 + 3) = 0LL;
            v41 = v36;
            *(_OWORD *)(v23 + 8) = v36;
          }
          else
          {
            v23 = 0LL;
          }
          *a6 = (struct CShape *)v23;
          if ( v23 )
            return v10;
          v35 = 640;
          goto LABEL_103;
        }
        v35 = 636;
      }
LABEL_104:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v35);
      return v10;
    }
  }
  if ( CShape::IsEmpty(a1) )
  {
LABEL_107:
    if ( !a3 || CShape::IsEmpty(a3) )
    {
      v33 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 32LL);
      if ( v33 )
        v34 = CRectangleShape::CRectangleShape(v33, 0.0, 0.0, 0.0, 0.0);
      else
        v34 = 0LL;
      *a6 = v34;
      if ( v34 )
        return v10;
      v35 = 537;
      goto LABEL_103;
    }
  }
  if ( a5 )
  {
    if ( a5 == 1 )
    {
      v29 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 32LL);
      if ( v29 )
        v30 = CRectangleShape::CRectangleShape(v29, 0.0, 0.0, 0.0, 0.0);
      else
        v30 = 0LL;
      *a6 = v30;
      if ( v30 )
        return v10;
      v35 = 585;
    }
    else
    {
      if ( a5 != 2 )
        return v10;
      if ( a1 && !CShape::IsEmpty(a1) )
      {
        if ( !a2 || CShape::IsAxisAlignedRectangle(a1) )
        {
          v26 = CShape::CopyShape(a1, a2, a6);
          v10 = v26;
          if ( v26 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x263u);
        }
        return v10;
      }
      v27 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 32LL);
      if ( v27 )
        v28 = CRectangleShape::CRectangleShape(v27, 0.0, 0.0, 0.0, 0.0);
      else
        v28 = 0LL;
      *a6 = v28;
      if ( v28 )
        return v10;
      v35 = 599;
    }
LABEL_103:
    v10 = -2147024882;
    goto LABEL_104;
  }
  if ( !a1 || CShape::IsEmpty(a1) )
  {
    if ( !a4
      || CShape::IsAxisAlignedRectangle(a3) && (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CBaseMatrix *)a4) )
    {
      v32 = CShape::CopyShape(a3, (const struct CMILMatrix *)a4, a6);
      v10 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x232u);
    }
  }
  else if ( !a2 || CShape::IsAxisAlignedRectangle(a1) && (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(a2) )
  {
    v31 = CShape::CopyShape(a1, a2, a6);
    v10 = v31;
    if ( v31 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x23Du);
  }
  return v10;
}

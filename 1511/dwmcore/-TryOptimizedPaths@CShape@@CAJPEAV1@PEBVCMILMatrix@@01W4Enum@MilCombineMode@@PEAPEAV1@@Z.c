/*
 * XREFs of ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18001665C
 * Callers:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800165BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260 (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18004DB78 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18004DE74 (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004DF0C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180058270 (-GetTightBounds@CRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180058858 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CShape::TryOptimizedPaths(
        CShape *a1,
        CBaseMatrix *a2,
        CShape *a3,
        CBaseMatrix *a4,
        int a5,
        struct CShape **a6)
{
  unsigned int v6; // esi
  __int64 (__fastcall *v11)(CRectangleShape *); // rsi
  int TightBounds; // eax
  __int64 (__fastcall *v13)(CRectangleShape *); // rbx
  int v14; // eax
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  void *(__fastcall *v19)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  char *v20; // rax
  CRectangleShape *v22; // rax
  int v23; // r9d
  CRectangleShape *v24; // rax
  int v25; // eax
  CRectangleShape *v26; // rax
  unsigned int v27; // [rsp+20h] [rbp-58h]
  __int128 v28; // [rsp+30h] [rbp-48h] BYREF
  float v29; // [rsp+40h] [rbp-38h] BYREF
  float v30; // [rsp+44h] [rbp-34h]
  float v31; // [rsp+48h] [rbp-30h]
  float v32; // [rsp+4Ch] [rbp-2Ch]
  __int128 v33; // [rsp+50h] [rbp-28h]

  v6 = 0;
  *a6 = 0LL;
  if ( a1 )
  {
    if ( !CShape::IsEmpty(a1) && a3 && !CShape::IsEmpty(a3) )
    {
      if ( a5 != 1
        || !CShape::IsAxisAlignedRectangle(a1)
        || !CShape::IsAxisAlignedRectangle(a3)
        || a2 && !(unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(a2)
        || a4 && !(unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(a4) )
      {
        return v6;
      }
      v11 = *(__int64 (__fastcall **)(CRectangleShape *))(*(_QWORD *)a1 + 24LL);
      if ( v11 == CRectangleShape::GetTightBounds )
        TightBounds = CRectangleShape::GetTightBounds(a1);
      else
        TightBounds = ((__int64 (__fastcall *)(CShape *, __int128 *, CBaseMatrix *))v11)(a1, &v28, a2);
      v6 = TightBounds;
      if ( TightBounds < 0 )
      {
        v27 = 647;
      }
      else
      {
        v13 = *(__int64 (__fastcall **)(CRectangleShape *))(*(_QWORD *)a3 + 24LL);
        if ( v13 == CRectangleShape::GetTightBounds )
          v14 = CRectangleShape::GetTightBounds(a3);
        else
          v14 = ((__int64 (__fastcall *)(CShape *, float *, CBaseMatrix *))v13)(a3, &v29, a4);
        v6 = v14;
        if ( v14 >= 0 )
        {
          v15 = *(float *)&v28;
          if ( v29 > *(float *)&v28 )
          {
            v15 = v29;
            *(float *)&v28 = v29;
          }
          v16 = *((float *)&v28 + 1);
          if ( v30 > *((float *)&v28 + 1) )
          {
            v16 = v30;
            *((float *)&v28 + 1) = v30;
          }
          v17 = *((float *)&v28 + 2);
          if ( *((float *)&v28 + 2) > v31 )
          {
            v17 = v31;
            *((float *)&v28 + 2) = v31;
          }
          v18 = *((float *)&v28 + 3);
          if ( *((float *)&v28 + 3) > v32 )
          {
            v18 = v32;
            *((float *)&v28 + 3) = v32;
          }
          if ( v17 <= v15 || v18 <= v16 )
            v28 = 0uLL;
          v19 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL);
          if ( v19 == WPF::ProcessHeapImpl::Alloc )
            v20 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x20uLL);
          else
            v20 = (char *)v19(WPF::g_pProcessHeap, 32uLL);
          if ( v20 )
          {
            *((_QWORD *)v20 + 3) = 0LL;
            *(_QWORD *)v20 = &CRectangleShape::`vftable';
            v33 = v28;
            *(_OWORD *)(v20 + 8) = v28;
          }
          *a6 = (struct CShape *)v20;
          if ( v20 )
            return v6;
          v27 = 652;
          goto LABEL_80;
        }
        v27 = 648;
      }
      v23 = v6;
LABEL_81:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, v27);
      return v6;
    }
    if ( !CShape::IsEmpty(a1) )
      goto LABEL_38;
  }
  if ( a3 && !CShape::IsEmpty(a3) )
  {
LABEL_38:
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        v22 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 8LL))(
                                   WPF::g_pProcessHeap,
                                   32LL);
        if ( v22 )
          v22 = CRectangleShape::CRectangleShape(v22, 0.0, 0.0, 0.0, 0.0);
        *a6 = v22;
        if ( v22 )
          return v6;
        v27 = 597;
        goto LABEL_80;
      }
      if ( a5 != 2 )
        return v6;
      if ( !a1 || CShape::IsEmpty(a1) )
      {
        v26 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 8LL))(
                                   WPF::g_pProcessHeap,
                                   32LL);
        if ( v26 )
          v26 = CRectangleShape::CRectangleShape(v26, 0.0, 0.0, 0.0, 0.0);
        *a6 = v26;
        if ( v26 )
          return v6;
        v27 = 611;
LABEL_80:
        v23 = -2147024882;
        v6 = -2147024882;
        goto LABEL_81;
      }
      if ( a2 && !CShape::IsAxisAlignedRectangle(a1) )
        return v6;
      v25 = CShape::CopyShape(a1, a2, a6);
      v6 = v25;
      if ( v25 >= 0 )
        return v6;
      v27 = 623;
    }
    else if ( !a1 || CShape::IsEmpty(a1) )
    {
      if ( a4 && (!CShape::IsAxisAlignedRectangle(a3) || !(unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(a4)) )
        return v6;
      v25 = CShape::CopyShape(a3, a4, a6);
      v6 = v25;
      if ( v25 >= 0 )
        return v6;
      v27 = 574;
    }
    else
    {
      if ( a2 && (!CShape::IsAxisAlignedRectangle(a1) || !(unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(a2)) )
        return v6;
      v25 = CShape::CopyShape(a1, a2, a6);
      v6 = v25;
      if ( v25 >= 0 )
        return v6;
      v27 = 585;
    }
    v23 = v25;
    goto LABEL_81;
  }
  v24 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             32LL);
  if ( v24 )
    v24 = CRectangleShape::CRectangleShape(v24, 0.0, 0.0, 0.0, 0.0);
  *a6 = v24;
  if ( !v24 )
  {
    v27 = 549;
    goto LABEL_80;
  }
  return v6;
}

/*
 * XREFs of ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180055530
 * Callers:
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x18000C688 (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180023F98 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18002CBC0 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004ED08 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004F938 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004FA24 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x1800528C0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800560D0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18005A3E0 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800976A0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x180162380 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 */

__int64 __fastcall CCpuClippingData::Update(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  int v5; // r14d
  int v8; // r10d
  bool v9; // r12
  char v10; // r15
  _QWORD *v11; // rbp
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v16; // r14
  bool v17; // dl
  int v18; // r8d
  unsigned __int64 v19; // rcx
  int v20; // r8d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  int *v25; // r8
  CRectanglesShape *v26; // r9
  CGeometry *v27; // rcx
  char v28; // al
  int v29; // ecx
  float v30; // xmm1_4
  struct _LIST_ENTRY *v31; // r9
  float *v32; // r10
  bool v33; // al
  float *v34; // rcx
  __int64 v35; // r9
  float *v36; // r10
  bool v37; // al
  float v38; // xmm2_4
  void *(__fastcall *v39)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v40; // rax
  void *(__fastcall *v41)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v42; // rax
  __int64 v43; // r11
  CVisual *v44; // rcx
  CRectanglesShape *v45; // rdx
  struct _LIST_ENTRY *Blink; // r9
  struct _LIST_ENTRY *v47; // r8
  int ShapeDataNoRef; // eax
  bool (__fastcall *v49)(CRectanglesShape *__hidden, unsigned int *); // rax
  bool v50; // al
  CRectanglesShape *EffectInternal; // rcx
  __int64 (__fastcall *v52)(CRectanglesShape *, __int64); // rax
  char v53; // al
  __int64 (__fastcall *v54)(CRectanglesShape *, __int64); // rax
  char v55; // al
  CRectanglesShape *v56; // rax
  const struct CMILMatrix *Matrix; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  float *v60; // rax
  CVisual *v61; // [rsp+30h] [rbp-78h]
  float *v62; // [rsp+40h] [rbp-68h]
  CVisual *v63; // [rsp+40h] [rbp-68h]
  int v64; // [rsp+B0h] [rbp+8h]
  CRectanglesShape *v65; // [rsp+B8h] [rbp+10h] BYREF
  struct _LIST_ENTRY *v66; // [rsp+C0h] [rbp+18h]
  bool v67; // [rsp+C8h] [rbp+20h]

  v5 = a4;
  v67 = a4 == 2;
  v8 = *(_DWORD *)a1;
  v9 = *(_DWORD *)a1 == 0;
  v10 = 0;
  v11 = 0LL;
  p_Blink = 0LL;
  v64 = 3;
  if ( *(_QWORD *)(a2 + 24) == a3 )
  {
    if ( a4 <= 3 )
      v5 = 3;
  }
  else
  {
    v13 = *(_QWORD *)(a3 + 144);
    v14 = 0LL;
    if ( *(_BYTE *)(a2 + 32) )
    {
      v14 = (_QWORD *)(v13 + 320);
    }
    else
    {
      v23 = *(_QWORD *)(v13 + 272);
      if ( (*(_DWORD *)(v23 + 4) & 0x80000) != 0 )
      {
        v24 = *(_DWORD *)(v23 + 12);
        v25 = (int *)(v23 + 12);
        if ( (v24 & 0x7F000000) != 0xD000000 )
        {
          do
          {
            v25 = (int *)((char *)v25 + (v24 & 0xFFFFFF) + 4);
            v24 = *v25;
          }
          while ( (*v25 & 0x7F000000) != 0xD000000 );
        }
        v65 = *(CRectanglesShape **)(v25 + 1);
        if ( v65 )
        {
          v26 = *(CRectanglesShape **)v65;
          if ( *(CRectanglesShape **)v65 != v65 )
          {
            while ( *((_QWORD *)v26 + 4) != a2 )
            {
              v26 = *(CRectanglesShape **)v26;
              if ( v26 == v65 )
                goto LABEL_4;
            }
            v14 = (_QWORD *)((char *)v26 - 224);
          }
        }
      }
    }
LABEL_4:
    v11 = v14 + 17;
    p_Blink = (struct _LIST_ENTRY **)(v14 + 17);
    if ( *((_DWORD *)v14 + 34) == 5 && v5 <= 3 )
      v5 = 3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 272) + 4LL) & 0x10000000) != 0 )
  {
    v63 = **(CVisual ***)CVisual::GetTransformParentDataInternal((CVisual *)a3);
    if ( v63 )
    {
      v44 = *(CVisual **)(a3 + 144);
      v45 = 0LL;
      Blink = 0LL;
      v65 = 0LL;
      v66 = 0LL;
      v61 = v44;
      if ( v44 )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(v43 + 32) )
          {
            v47 = (struct _LIST_ENTRY *)((char *)v44 + 320);
          }
          else
          {
            TreeDataListHead = CVisual::GetTreeDataListHead(v44);
            if ( !TreeDataListHead || (Flink = TreeDataListHead->Flink, TreeDataListHead->Flink == TreeDataListHead) )
            {
LABEL_178:
              v47 = 0LL;
            }
            else
            {
              while ( 1 )
              {
                v47 = Flink - 14;
                if ( Flink[2].Flink == (struct _LIST_ENTRY *)v43 )
                  break;
                Flink = Flink->Flink;
                if ( Flink == TreeDataListHead )
                  goto LABEL_178;
              }
            }
            Blink = v66;
            v45 = v65;
            v44 = v61;
          }
          if ( v44 == v63 )
          {
            p_Blink = &v47[8].Blink;
            goto LABEL_129;
          }
          if ( (unsigned int)(LODWORD(v47[8].Blink) - 1) > 1 )
            break;
          if ( (struct _LIST_ENTRY *)v45 <= v47[9].Flink )
            v45 = (CRectanglesShape *)v47[9].Flink;
          v65 = v45;
          if ( *((_QWORD *)v44 + 37) && Blink <= v47[10].Blink )
          {
            Blink = v47[10].Blink;
            v66 = Blink;
          }
          v44 = (CVisual *)*((_QWORD *)v44 + 18);
          v61 = v44;
          if ( !v44 )
            goto LABEL_129;
        }
        if ( v5 <= 3 )
          v5 = 3;
      }
      else
      {
LABEL_129:
        if ( (unsigned __int64)v45 > *(_QWORD *)(a1 + 64) )
          v9 = 1;
      }
      if ( (unsigned __int64)Blink > *(_QWORD *)(a1 + 64) )
        *(_QWORD *)(a1 + 40) = 0LL;
    }
  }
  if ( v5 > v8 )
    v9 = 1;
  if ( !*(_QWORD *)(a1 + 40) )
  {
    v9 = 1;
    v10 = 1;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 352LL);
  }
  if ( !*(_QWORD *)(a1 + 56) )
  {
    v9 = 1;
    v10 = 1;
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 352LL);
  }
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( !v9 )
      goto LABEL_14;
  }
  else
  {
    v9 = 1;
    v10 = 1;
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 352LL);
  }
  if ( v5 == 5 )
  {
    v29 = 5;
    goto LABEL_95;
  }
  if ( !CCommonRegistryData::m_fEnableCpuClipping )
  {
    v29 = 5;
    goto LABEL_95;
  }
  if ( v5 == 4 )
  {
    v29 = 4;
    goto LABEL_95;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 272) + 4LL) & 0x8000000) == 0 )
    goto LABEL_63;
  EffectInternal = CVisual::GetEffectInternal((CVisual *)a3);
  v65 = EffectInternal;
  v52 = *(__int64 (__fastcall **)(CRectanglesShape *, __int64))(*(_QWORD *)EffectInternal + 48LL);
  if ( (char *)v52 == (char *)CEffectGroup::IsOfType )
    v53 = CEffectGroup::IsOfType(EffectInternal, 24LL);
  else
    v53 = v52(EffectInternal, 24LL);
  if ( v53 )
  {
    v56 = v65;
  }
  else
  {
    v54 = *(__int64 (__fastcall **)(CRectanglesShape *, __int64))(*(_QWORD *)v65 + 48LL);
    if ( (char *)v54 == (char *)CEffectGroup::IsOfType )
      v55 = CEffectGroup::IsOfType(v65, 8LL);
    else
      v55 = v54(v65, 8LL);
    if ( !v55 )
      goto LABEL_63;
    v56 = (CRectanglesShape *)*((_QWORD *)v65 + 19);
    v65 = v56;
  }
  if ( v56 )
  {
    Matrix = CTransform3D::GetMatrix(v56, (const struct D2D_SIZE_F *)(a3 + 192));
    if ( !(unsigned __int8)CMILMatrix::Is2DAffine<0>(Matrix)
      || (v60 = (float *)CTransform3D::GetMatrix(v65, (const struct D2D_SIZE_F *)(a3 + 192)),
          !CMILMatrix::IsInvertibleDeterminant((float)(v60[5] * *v60) - (float)(v60[4] * v60[1]))) )
    {
      v29 = 4;
LABEL_95:
      v64 = v29;
      goto LABEL_96;
    }
  }
LABEL_63:
  if ( v5 == 2 )
  {
    v28 = 1;
    v67 = 1;
  }
  else
  {
    v27 = *(CGeometry **)(a3 + 296);
    if ( !v27 )
      goto LABEL_65;
    v65 = 0LL;
    ShapeDataNoRef = CGeometry::GetShapeDataNoRef(v27, (const struct D2D_SIZE_F *)(a3 + 192), &v65);
    if ( ShapeDataNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x12Au);
      v28 = 1;
      v67 = 1;
      goto LABEL_66;
    }
    v49 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(*(_QWORD *)v65 + 32LL);
    v50 = v49 == CRectanglesShape::IsRectangles
        ? CRectanglesShape::IsRectangles(v65, (unsigned int *)&v65)
        : v49(v65, (unsigned int *)&v65);
    if ( v50 && (unsigned int)v65 <= 1 )
    {
LABEL_65:
      v28 = v67;
    }
    else
    {
      v28 = 1;
      v67 = 1;
    }
  }
LABEL_66:
  if ( !*(_QWORD *)(a3 + 296) || v28 )
  {
    v29 = 4;
    v64 = 4;
  }
  else
  {
    v29 = 3;
  }
  if ( v5 != 3 )
  {
    v30 = *(float *)(a3 + 172);
    if ( *(float *)(a3 + 176) == 0.0 && *(float *)(a3 + 180) == 0.0 && v30 == 0.0 || v30 == 0.0 )
    {
      v31 = *(struct _LIST_ENTRY **)(a3 + 288);
      v66 = v31;
      if ( !v31 )
        goto LABEL_92;
      v32 = (float *)(a3 + 192);
      v33 = ((__int64)v31[2].Flink & 1) != 0;
      if ( a3 != -192 )
      {
        if ( ((__int64)v31[2].Flink & 1) == 0
          && BYTE4(v31[13].Flink)
          && (*((float *)&v31[12].Blink + 1) != *v32 || *(float *)&v31[13].Flink != *(float *)(a3 + 196)) )
        {
          v33 = 1;
        }
        *(struct _LIST_ENTRY **)((char *)&v31[12].Blink + 4) = *(struct _LIST_ENTRY **)v32;
      }
      if ( v33 )
      {
        ((void (__fastcall *)(struct _LIST_ENTRY *, __int64, struct _LIST_ENTRY **))v31->Flink[7].Flink)(
          v31,
          a3 + 192,
          &v31[8].Blink);
        v31 = v66;
        LODWORD(v66[2].Flink) &= ~1u;
      }
      v62 = (float *)&v31[8].Blink;
      if ( !(unsigned __int8)CMILMatrix::Is2DAffine<0>(&v31[8].Blink) )
        goto LABEL_143;
      v37 = (*(_BYTE *)(v35 + 32) & 1) != 0;
      if ( v36 )
      {
        if ( (*(_BYTE *)(v35 + 32) & 1) == 0
          && *(_BYTE *)(v35 + 212)
          && (*(float *)(v35 + 204) != *v36 || *(float *)(v35 + 208) != v36[1]) )
        {
          v37 = 1;
        }
        *(_QWORD *)(v35 + 204) = *(_QWORD *)v36;
      }
      if ( v37 )
      {
        (*(void (__fastcall **)(__int64, float *, float *))(*(_QWORD *)v35 + 112LL))(v35, v36, v34);
        v34 = v62;
        LODWORD(v66[2].Flink) &= ~1u;
      }
      v38 = (float)(v34[5] * *v34) - (float)(v34[4] * v34[1]);
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v38 - 0.0)) & _xmm) >= 0.00000011920929
        && _finite((float)(1.0 / v38)) )
      {
LABEL_92:
        if ( v5 == 2 )
        {
          v29 = 2;
        }
        else
        {
          v29 = 1;
          if ( v67 )
            v29 = 2;
        }
      }
      else
      {
LABEL_143:
        v29 = v64;
      }
    }
    goto LABEL_95;
  }
LABEL_96:
  if ( *(_DWORD *)a1 != v29 )
  {
    *(_DWORD *)a1 = v64;
    v10 = 1;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 352LL);
  }
LABEL_14:
  *(_BYTE *)(a1 + 76) = a5;
  if ( p_Blink
    && *(_DWORD *)p_Blink != 5
    && (unsigned __int64)p_Blink[4] > *(_QWORD *)(a1 + 32)
    && ((unsigned int)(*(_DWORD *)a1 - 1) <= 1 || *(_DWORD *)a1 == 4 && *(_QWORD *)(a3 + 296)) )
  {
    v10 = 1;
  }
  else if ( !v10 )
  {
    goto LABEL_18;
  }
  if ( *(_DWORD *)a1 == 5 )
    goto LABEL_18;
  v16 = 0LL;
  if ( p_Blink && *(_DWORD *)p_Blink != 5 )
    v16 = (__int64)p_Blink[2];
  if ( *(_QWORD *)(a1 + 16) )
    goto LABEL_193;
  v39 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v39 == WPF::ProcessHeapImpl::Alloc )
    v40 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x44uLL);
  else
    v40 = (_DWORD *)v39(WPF::g_pProcessHeap, 68uLL);
  if ( v40 )
    v40[16] = 0;
  *(_QWORD *)(a1 + 16) = v40;
  if ( v40 )
  {
LABEL_193:
    if ( *(_QWORD *)(a3 + 296) )
    {
      if ( !*(_QWORD *)(a1 + 24) )
      {
        v41 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL);
        if ( v41 == WPF::ProcessHeapImpl::Alloc )
          v42 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x44uLL);
        else
          v42 = (_DWORD *)v41(WPF::g_pProcessHeap, 68uLL);
        if ( v42 )
          v42[16] = 0;
        *(_QWORD *)(a1 + 24) = v42;
        if ( !v42 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x187u);
          goto LABEL_190;
        }
      }
    }
    else if ( *(_QWORD *)(a1 + 24) )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    CVisual::CalcEffectiveTransform(a3, *(_DWORD *)a1, v16, &a5, *(CMILMatrix **)(a1 + 16), *(_QWORD *)(a1 + 24));
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 352LL);
LABEL_18:
    if ( !v9 && !v10 )
      return 0LL;
    v17 = v11 && *((_DWORD *)v11 + 18);
    v18 = *(_DWORD *)a1;
    v19 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 64) = v19;
    *(_DWORD *)(a1 + 72) = 0;
    v20 = v18 - 1;
    if ( v20 )
    {
      if ( v20 != 2 )
        return 0LL;
    }
    else
    {
      if ( v19 <= v11[8] )
        v19 = v11[8];
      *(_QWORD *)(a1 + 64) = v19;
      if ( v17 )
      {
        *(_DWORD *)(a1 + 72) = *((_DWORD *)v11 + 18);
        v21 = *(_QWORD *)(a1 + 40);
        if ( v19 > v21 )
          v21 = v19;
        *(_QWORD *)(a1 + 64) = v21;
      }
    }
    v22 = *(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(a1 + 64) > v22 )
      v22 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v22;
    if ( v17 || *(_QWORD *)(a3 + 296) )
    {
      if ( v22 <= *(_QWORD *)(a1 + 56) )
        v22 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 64) = v22;
      if ( *(_QWORD *)(a3 + 296) )
        ++*(_DWORD *)(a1 + 72);
    }
    return 0LL;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x17Eu);
LABEL_190:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xCCu);
  return 2147942414LL;
}

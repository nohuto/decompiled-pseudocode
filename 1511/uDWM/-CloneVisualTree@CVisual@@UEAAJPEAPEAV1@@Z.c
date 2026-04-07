/*
 * XREFs of ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x1800228F0
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001AD60 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001FC50 (-CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z @ 0x1800241E0 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@@Z @ 0x18003D2C0 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x180099AB0 (-CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001803C (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x18001AC90 (-SetSize@CText@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001AD60 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CTopLevelAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001C510 (-CloneVisualTree@CTopLevelAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001FC50 (-CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x1800204B0 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180021DA0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@@Z @ 0x18003D2C0 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CVisual::CloneVisualTree(CVisual *this, struct CVisual **a2)
{
  struct CVisual *v3; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  char v7; // r12
  __int64 (__fastcall *v8)(CClientArea *__hidden, struct CVisual **); // r8
  __int64 (__fastcall *v9)(CCanvas *, struct CVisual **); // r9
  __int64 (__fastcall *v10)(struct tagSIZE *, const struct tagSIZE *); // rbp
  double v11; // xmm4_8
  double v12; // xmm3_8
  float v13; // xmm0_4
  float v14; // xmm0_4
  char v15; // r8
  char v16; // cl
  double v17; // xmm2_8
  float v18; // xmm0_4
  unsigned int v19; // ebx
  CCanvas *v21; // rbx
  __int64 (__fastcall *v22)(CText *, struct CVisual **); // r15
  int inserted; // eax
  struct CVisual *v24; // r15
  void (__fastcall *v25)(CVisual *__hidden, unsigned int); // rbx
  void (__fastcall *v26)(CVisual *__hidden, unsigned int); // rbx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  struct CVisual *v30; // [rsp+30h] [rbp-68h] BYREF
  int v31; // [rsp+A8h] [rbp+10h]
  struct CVisual *v32; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *a2;
  v5 = 0;
  v31 = 0;
  v30 = 0LL;
  v32 = 0LL;
  if ( v3 )
  {
    v30 = v3;
  }
  else
  {
    v27 = CVisual::Create(*(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), &v30);
    v31 = v27;
    v19 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0x66Bu);
      v3 = v30;
LABEL_56:
      if ( v3 )
        CBaseObject::Release(v3);
      goto LABEL_21;
    }
    v3 = v30;
  }
  v6 = -1;
  v7 = 0;
LABEL_4:
  v8 = CClientArea::CloneVisualTree;
  v9 = CCanvas::CloneVisualTree;
  while ( 1 )
  {
    if ( v7 )
    {
      ++v6;
    }
    else
    {
      v7 = 1;
      v6 = 0;
    }
    if ( v6 >= *((_DWORD *)this + 18) )
      break;
    v21 = *(CCanvas **)(*((_QWORD *)this + 6) + 8LL * v6);
    if ( (*((_BYTE *)v21 + 84) & 8) == 0 )
    {
      v22 = *(__int64 (__fastcall **)(CText *, struct CVisual **))(*(_QWORD *)v21 + 144LL);
      if ( v22 == CCanvas::CloneVisualTree )
      {
        CCanvas::CloneVisualTree(v21, &v32);
      }
      else if ( v22 == CClientArea::CloneVisualTree )
      {
        CClientArea::CloneVisualTree(v21, &v32);
      }
      else if ( v22 == CTopLevelAtlasedRectsVisual::CloneVisualTree )
      {
        CTopLevelAtlasedRectsVisual::CloneVisualTree(v21, &v32);
      }
      else if ( v22 == CAtlasedRectsVisual::CloneVisualTree )
      {
        CAtlasedRectsVisual::CloneVisualTree(v21, &v32);
      }
      else if ( v22 == CText::CloneVisualTree )
      {
        CText::CloneVisualTree(v21, &v32);
      }
      else
      {
        ((void (__fastcall *)(CCanvas *, struct CVisual **, __int64 (__fastcall *)(CClientArea *__hidden, struct CVisual **), __int64 (__fastcall *)(CCanvas *, struct CVisual **)))v22)(
          v21,
          &v32,
          CClientArea::CloneVisualTree,
          CCanvas::CloneVisualTree);
      }
      v8 = CClientArea::CloneVisualTree;
      v9 = CCanvas::CloneVisualTree;
      if ( v32 )
      {
        inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)v3 + 32), v32, 0LL, 0, 1);
        v31 = inserted;
        v19 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x686u);
          goto LABEL_56;
        }
        v24 = v32;
        v8 = CClientArea::CloneVisualTree;
        v9 = CCanvas::CloneVisualTree;
        if ( v32 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v32 + 2, 0xFFFFFFFF) == 1 && v24 )
            (**(void (__fastcall ***)(struct CVisual *, __int64, __int64 (__fastcall *)(CClientArea *__hidden, struct CVisual **), __int64 (__fastcall *)(CCanvas *, struct CVisual **)))v24)(
              v24,
              1LL,
              CClientArea::CloneVisualTree,
              CCanvas::CloneVisualTree);
          v3 = v30;
          v32 = 0LL;
          goto LABEL_4;
        }
      }
    }
  }
  if ( *((_DWORD *)this + 26) != *((_DWORD *)v3 + 26) || *((_DWORD *)this + 27) != *((_DWORD *)v3 + 27) )
  {
    *((_QWORD *)v3 + 13) = *((_QWORD *)this + 13);
    v25 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v3 + 24LL);
    if ( v25 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v3, 8u);
    else
      ((void (__fastcall *)(struct CVisual *, __int64, __int64 (__fastcall *)(CClientArea *__hidden, struct CVisual **), __int64 (__fastcall *)(CCanvas *, struct CVisual **)))v25)(
        v3,
        8LL,
        CClientArea::CloneVisualTree,
        CCanvas::CloneVisualTree);
  }
  v10 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v3 + 80LL);
  if ( v10 == CVisual::SetSize )
  {
    CVisual::SetSize((struct tagSIZE *)v3, (const struct tagSIZE *)this + 14);
  }
  else if ( (char *)v10 == (char *)CText::SetSize )
  {
    CText::SetSize(v3, (const struct tagSIZE *)this + 14);
  }
  else
  {
    ((void (__fastcall *)(struct CVisual *, char *, __int64 (__fastcall *)(CClientArea *__hidden, struct CVisual **), __int64 (__fastcall *)(CCanvas *, struct CVisual **)))v10)(
      v3,
      (char *)this + 112,
      v8,
      v9);
  }
  v11 = *((double *)this + 20);
  v12 = *((double *)this + 21);
  v13 = v11;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v3 + 20) - v13)) & _xmm) > 0.0000011920929
    || (v14 = v12,
        (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v3 + 21) - v14)) & _xmm) > 0.0000011920929) )
  {
    v29 = *(_QWORD *)v3;
    *((double *)v3 + 20) = v11;
    *((double *)v3 + 21) = v12;
    (*(void (__fastcall **)(struct CVisual *, __int64))(v29 + 24))(v3, 16LL);
  }
  v15 = *((_BYTE *)v3 + 84);
  v16 = *((_BYTE *)this + 84) & 1;
  if ( v16 != (v15 & 1) )
  {
    *((_BYTE *)v3 + 84) = v15 ^ (v16 ^ v15) & 1;
    (*(void (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 16LL);
  }
  if ( *((_DWORD *)this + 47) )
  {
    *(_OWORD *)((char *)v3 + 188) = *(_OWORD *)((char *)this + 188);
    *(_OWORD *)((char *)v3 + 204) = *(_OWORD *)((char *)this + 204);
    *(_QWORD *)((char *)v3 + 220) = *(_QWORD *)((char *)this + 220);
    *((_DWORD *)v3 + 57) = *((_DWORD *)this + 57);
    v26 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v3 + 24LL);
    if ( v26 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v3, 0x40u);
    else
      v26(v3, 64u);
  }
  v17 = *((double *)this + 22);
  v18 = v17;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v3 + 22) - v18)) & _xmm) > 0.0000011920929 )
  {
    v28 = *(_QWORD *)v3;
    *((double *)v3 + 22) = v17;
    (*(void (__fastcall **)(struct CVisual *, __int64))(v28 + 24))(v3, 32LL);
  }
  if ( *((_DWORD *)this + 64) )
  {
    do
      CVisual::AddInstruction(v3, *(struct CRenderDataInstruction **)(*((_QWORD *)this + 29) + 8LL * v5++));
    while ( v5 < *((_DWORD *)this + 64) );
  }
  v19 = v31;
  *a2 = v3;
LABEL_21:
  if ( v32 )
    CBaseObject::Release(v32);
  return v19;
}

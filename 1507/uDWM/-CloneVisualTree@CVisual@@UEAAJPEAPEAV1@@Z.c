/*
 * XREFs of ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x18001D4E0
 * Callers:
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@@Z @ 0x180012A50 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x180015EA0 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z @ 0x180019D00 (-CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001EC40 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x1800983F0 (-CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@@Z @ 0x180012A50 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x180015DD0 (-SetSize@CText@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x180015EA0 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CTopLevelAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x180016E20 (-CloneVisualTree@CTopLevelAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z @ 0x180019D00 (-CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001AC60 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001C850 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180034EF8 (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CVisual::CloneVisualTree(CVisual *this, struct CVisual **a2)
{
  unsigned int v2; // ebp
  CBaseObject *v4; // rdi
  unsigned int v6; // r14d
  char v7; // r12
  __int64 (__fastcall *v8)(CAtlasedRectsVisual *, struct CVisual **); // r8
  __int64 (__fastcall *v9)(CCanvas *, struct CVisual **); // r9
  __int64 (__fastcall *v10)(struct tagSIZE *, const struct tagSIZE *); // r14
  double v11; // xmm4_8
  double v12; // xmm3_8
  float v13; // xmm0_4
  float v14; // xmm0_4
  char v15; // r8
  char v16; // cl
  double v17; // xmm2_8
  float v18; // xmm0_4
  unsigned int v19; // ebx
  CCanvas *v21; // r15
  __int64 (__fastcall *v22)(CText *, struct CVisual **); // rbx
  int inserted; // eax
  struct CVisual *v24; // r15
  void (__fastcall *v25)(CVisual *__hidden, unsigned int); // rbx
  void (__fastcall *v26)(CVisual *__hidden, unsigned int); // rbx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  CBaseObject *v30; // [rsp+30h] [rbp-68h] BYREF
  int v31; // [rsp+A8h] [rbp+10h]
  struct CVisual *v32; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  v4 = *a2;
  v31 = 0;
  v30 = 0LL;
  v32 = 0LL;
  if ( v4 )
  {
    v30 = v4;
  }
  else
  {
    v27 = CVisual::Create(*(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), &v30);
    v31 = v27;
    v19 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0x6B3u);
      v4 = v30;
LABEL_56:
      if ( v4 )
        CBaseObject::Release(v4);
      goto LABEL_21;
    }
    v4 = v30;
  }
  v6 = -1;
  v7 = 0;
LABEL_4:
  v8 = CAtlasedRectsVisual::CloneVisualTree;
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
      else if ( v22 == CAtlasedRectsVisual::CloneVisualTree )
      {
        CAtlasedRectsVisual::CloneVisualTree(v21, &v32);
      }
      else if ( v22 == CClientArea::CloneVisualTree )
      {
        CClientArea::CloneVisualTree(v21, &v32);
      }
      else if ( v22 == CTopLevelAtlasedRectsVisual::CloneVisualTree )
      {
        CTopLevelAtlasedRectsVisual::CloneVisualTree(v21, &v32);
      }
      else if ( v22 == CText::CloneVisualTree )
      {
        CText::CloneVisualTree(v21, &v32);
      }
      else
      {
        ((void (__fastcall *)(CCanvas *, struct CVisual **, __int64 (__fastcall *)(CAtlasedRectsVisual *, struct CVisual **), __int64 (__fastcall *)(CCanvas *, struct CVisual **)))v22)(
          v21,
          &v32,
          CAtlasedRectsVisual::CloneVisualTree,
          CCanvas::CloneVisualTree);
      }
      v8 = CAtlasedRectsVisual::CloneVisualTree;
      v9 = CCanvas::CloneVisualTree;
      if ( v32 )
      {
        inserted = VisualCollection::InsertRelative((CBaseObject *)((char *)v4 + 32), v32, 0LL, 0, 1);
        v31 = inserted;
        v19 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x6CEu);
          goto LABEL_56;
        }
        v24 = v32;
        v8 = CAtlasedRectsVisual::CloneVisualTree;
        v9 = CCanvas::CloneVisualTree;
        if ( v32 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v32 + 2, 0xFFFFFFFF) == 1 && v24 )
            (**(void (__fastcall ***)(struct CVisual *, __int64, __int64 (__fastcall *)(CAtlasedRectsVisual *, struct CVisual **), __int64 (__fastcall *)(CCanvas *, struct CVisual **)))v24)(
              v24,
              1LL,
              CAtlasedRectsVisual::CloneVisualTree,
              CCanvas::CloneVisualTree);
          v4 = v30;
          v32 = 0LL;
          goto LABEL_4;
        }
      }
    }
  }
  if ( *((_DWORD *)this + 26) != *((_DWORD *)v4 + 26) || *((_DWORD *)this + 27) != *((_DWORD *)v4 + 27) )
  {
    *((_QWORD *)v4 + 13) = *((_QWORD *)this + 13);
    v25 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v4 + 24LL);
    if ( v25 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v4, 8u);
    else
      ((void (__fastcall *)(CBaseObject *, __int64, __int64 (__fastcall *)(CAtlasedRectsVisual *, struct CVisual **), __int64 (__fastcall *)(CCanvas *, struct CVisual **)))v25)(
        v4,
        8LL,
        CAtlasedRectsVisual::CloneVisualTree,
        CCanvas::CloneVisualTree);
  }
  v10 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v4 + 80LL);
  if ( v10 == CVisual::SetSize )
  {
    CVisual::SetSize((struct tagSIZE *)v4, (const struct tagSIZE *)this + 14);
  }
  else if ( (char *)v10 == (char *)CText::SetSize )
  {
    CText::SetSize(v4, (const struct tagSIZE *)this + 14);
  }
  else
  {
    ((void (__fastcall *)(CBaseObject *, char *, __int64 (__fastcall *)(CAtlasedRectsVisual *, struct CVisual **), __int64 (__fastcall *)(CCanvas *, struct CVisual **)))v10)(
      v4,
      (char *)this + 112,
      v8,
      v9);
  }
  v11 = *((double *)this + 20);
  v12 = *((double *)this + 21);
  v13 = v11;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v4 + 20) - v13)) & _xmm) > 0.0000011920929
    || (v14 = v12,
        (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v4 + 21) - v14)) & _xmm) > 0.0000011920929) )
  {
    v29 = *(_QWORD *)v4;
    *((double *)v4 + 20) = v11;
    *((double *)v4 + 21) = v12;
    (*(void (__fastcall **)(CBaseObject *, __int64))(v29 + 24))(v4, 16LL);
  }
  v15 = *((_BYTE *)v4 + 84);
  v16 = *((_BYTE *)this + 84) & 1;
  if ( v16 != (v15 & 1) )
  {
    *((_BYTE *)v4 + 84) = v15 ^ (v16 ^ v15) & 1;
    (*(void (__fastcall **)(CBaseObject *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 16LL);
  }
  if ( *((_DWORD *)this + 47) )
  {
    *(_OWORD *)((char *)v4 + 188) = *(_OWORD *)((char *)this + 188);
    *(_OWORD *)((char *)v4 + 204) = *(_OWORD *)((char *)this + 204);
    *(_QWORD *)((char *)v4 + 220) = *(_QWORD *)((char *)this + 220);
    *((_DWORD *)v4 + 57) = *((_DWORD *)this + 57);
    v26 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v4 + 24LL);
    if ( v26 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v4, 0x40u);
    else
      v26(v4, 64u);
  }
  v17 = *((double *)this + 22);
  v18 = v17;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v4 + 22) - v18)) & _xmm) > 0.0000011920929 )
  {
    v28 = *(_QWORD *)v4;
    *((double *)v4 + 22) = v17;
    (*(void (__fastcall **)(CBaseObject *, __int64))(v28 + 24))(v4, 32LL);
  }
  if ( *((_DWORD *)this + 64) )
  {
    do
      CVisual::AddInstruction(v4, *(struct CRenderDataInstruction **)(*((_QWORD *)this + 29) + 8LL * v2++));
    while ( v2 < *((_DWORD *)this + 64) );
  }
  v19 = v31;
  *a2 = v4;
LABEL_21:
  if ( v32 )
    CBaseObject::Release(v32);
  return v19;
}

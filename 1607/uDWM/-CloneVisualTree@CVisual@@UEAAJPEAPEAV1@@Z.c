/*
 * XREFs of ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x18001FB60
 * Callers:
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@@Z @ 0x180015E80 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x180017F70 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001CA30 (-CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z @ 0x180021210 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x180096890 (-CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 * Callees:
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@@Z @ 0x180015E80 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x180017D80 (-SetSize@CText@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z @ 0x180017F70 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?CloneVisualTree@CTopLevelAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x180019550 (-CloneVisualTree@CTopLevelAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001CA30 (-CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001D2A0 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001F090 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180037870 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruction@@I@Z @ 0x18003D2D0 (-AddMultipleAndSet@-$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruct.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CloneVisualTree(CVisual *this, struct CVisual **a2)
{
  CVisual *v2; // rbx
  unsigned int v3; // ebp
  unsigned int v4; // r12d
  unsigned int v7; // esi
  char v8; // r14
  __int64 (__fastcall *v9)(CTopLevelAtlasedRectsVisual *, struct CVisual **); // r9
  __int64 (__fastcall *v10)(CCanvas *, struct CVisual **); // r8
  const struct tagSIZE *v11; // rdx
  __int64 (__fastcall *v12)(struct tagSIZE *, const struct tagSIZE *); // rax
  double v13; // xmm4_8
  double v14; // xmm3_8
  float v15; // xmm0_4
  float v16; // xmm0_4
  char v17; // r8
  char v18; // cl
  double v19; // xmm2_8
  float v20; // xmm0_4
  CCanvas *v22; // rcx
  __int64 (__fastcall *v23)(CText *, struct CVisual **); // rax
  int inserted; // eax
  struct CVisual *v25; // rcx
  void (__fastcall *v26)(CVisual *__hidden, unsigned int); // rax
  __int64 v27; // rdx
  int v28; // eax
  void (__fastcall *v29)(CVisual *__hidden, unsigned int); // rax
  void (__fastcall *v30)(CVisual *__hidden, unsigned int); // rax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+30h] [rbp-68h] BYREF
  struct CVisual *v35; // [rsp+B0h] [rbp+18h] BYREF
  CVisual *v36; // [rsp+B8h] [rbp+20h] BYREF

  v2 = *a2;
  v3 = 0;
  v4 = 0;
  v36 = 0LL;
  v35 = 0LL;
  if ( v2 )
  {
    v36 = v2;
  }
  else
  {
    v31 = CVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v36);
    v4 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x63Bu);
      v2 = v36;
LABEL_60:
      if ( v2 )
        CBaseObject::Release(v2);
      goto LABEL_21;
    }
    v2 = v36;
  }
  v7 = -1;
  v8 = 0;
LABEL_4:
  v9 = CTopLevelAtlasedRectsVisual::CloneVisualTree;
  v10 = CCanvas::CloneVisualTree;
  while ( 1 )
  {
    if ( v8 )
    {
      ++v7;
    }
    else
    {
      v8 = 1;
      v7 = 0;
    }
    if ( v7 >= *((_DWORD *)this + 18) )
      break;
    v22 = *(CCanvas **)(*((_QWORD *)this + 6) + 8LL * v7);
    if ( (*((_BYTE *)v22 + 84) & 8) == 0 )
    {
      v23 = *(__int64 (__fastcall **)(CText *, struct CVisual **))(*(_QWORD *)v22 + 144LL);
      if ( v23 == CCanvas::CloneVisualTree )
      {
        CCanvas::CloneVisualTree(v22, &v35);
      }
      else if ( v23 == CClientArea::CloneVisualTree )
      {
        CClientArea::CloneVisualTree(v22, &v35);
      }
      else if ( v23 == CTopLevelAtlasedRectsVisual::CloneVisualTree )
      {
        CTopLevelAtlasedRectsVisual::CloneVisualTree(v22, &v35);
      }
      else if ( v23 == CAtlasedRectsVisual::CloneVisualTree )
      {
        CAtlasedRectsVisual::CloneVisualTree(v22, &v35);
      }
      else if ( v23 == CText::CloneVisualTree )
      {
        CText::CloneVisualTree(v22, &v35);
      }
      else
      {
        ((void (__fastcall *)(CCanvas *, struct CVisual **, __int64 (__fastcall *)(CCanvas *, struct CVisual **), __int64 (__fastcall *)(CTopLevelAtlasedRectsVisual *, struct CVisual **)))v23)(
          v22,
          &v35,
          CCanvas::CloneVisualTree,
          CTopLevelAtlasedRectsVisual::CloneVisualTree);
      }
      v10 = CCanvas::CloneVisualTree;
      v9 = CTopLevelAtlasedRectsVisual::CloneVisualTree;
      if ( v35 )
      {
        inserted = VisualCollection::InsertRelative((CVisual *)((char *)v2 + 32), v35, 0LL, 0, 1);
        v4 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x656u);
          goto LABEL_60;
        }
        v25 = v35;
        v10 = CCanvas::CloneVisualTree;
        v9 = CTopLevelAtlasedRectsVisual::CloneVisualTree;
        if ( v35 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v35 + 2, 0xFFFFFFFF) == 1 && v25 )
            (**(void (__fastcall ***)(struct CVisual *, __int64, __int64 (__fastcall *)(CCanvas *, struct CVisual **), __int64 (__fastcall *)(CTopLevelAtlasedRectsVisual *, struct CVisual **)))v25)(
              v25,
              1LL,
              CCanvas::CloneVisualTree,
              CTopLevelAtlasedRectsVisual::CloneVisualTree);
          v2 = v36;
          v35 = 0LL;
          goto LABEL_4;
        }
      }
    }
  }
  if ( *((_DWORD *)this + 26) != *((_DWORD *)v2 + 26) || *((_DWORD *)this + 27) != *((_DWORD *)v2 + 27) )
  {
    *((_QWORD *)v2 + 13) = *((_QWORD *)this + 13);
    v26 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v2 + 24LL);
    if ( v26 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v2, 8u);
    else
      ((void (__fastcall *)(CVisual *, __int64, __int64 (__fastcall *)(CCanvas *, struct CVisual **), __int64 (__fastcall *)(CTopLevelAtlasedRectsVisual *, struct CVisual **)))v26)(
        v2,
        8LL,
        CCanvas::CloneVisualTree,
        CTopLevelAtlasedRectsVisual::CloneVisualTree);
  }
  v11 = (const struct tagSIZE *)((char *)this + 112);
  v12 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v2 + 80LL);
  if ( v12 == CVisual::SetSize )
  {
    CVisual::SetSize((struct tagSIZE *)v2, v11);
  }
  else if ( (char *)v12 == (char *)CText::SetSize )
  {
    CText::SetSize(v2, v11);
  }
  else
  {
    ((void (__fastcall *)(CVisual *, const struct tagSIZE *, __int64 (__fastcall *)(CCanvas *, struct CVisual **), __int64 (__fastcall *)(CTopLevelAtlasedRectsVisual *, struct CVisual **)))v12)(
      v2,
      v11,
      v10,
      v9);
  }
  v13 = *((double *)this + 20);
  v14 = *((double *)this + 21);
  v15 = v13;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v2 + 20) - v15)) & _xmm) > 0.0000011920929
    || (v16 = v14,
        (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v2 + 21) - v16)) & _xmm) > 0.0000011920929) )
  {
    v33 = *(_QWORD *)v2;
    *((double *)v2 + 20) = v13;
    *((double *)v2 + 21) = v14;
    (*(void (__fastcall **)(CVisual *, __int64))(v33 + 24))(v2, 16LL);
  }
  v17 = *((_BYTE *)v2 + 84);
  v18 = *((_BYTE *)this + 84) & 1;
  if ( v18 != (v17 & 1) )
  {
    *((_BYTE *)v2 + 84) = v17 ^ (v18 ^ v17) & 1;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 16LL);
  }
  if ( *((_DWORD *)this + 47) )
  {
    *(_OWORD *)((char *)v2 + 188) = *(_OWORD *)((char *)this + 188);
    *(_OWORD *)((char *)v2 + 204) = *(_OWORD *)((char *)this + 204);
    *(_QWORD *)((char *)v2 + 220) = *(_QWORD *)((char *)this + 220);
    v30 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v2 + 24LL);
    if ( v30 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v2, 0x40u);
    else
      v30(v2, 64u);
  }
  v19 = *((double *)this + 22);
  v20 = v19;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v2 + 22) - v20)) & _xmm) > 0.0000011920929 )
  {
    v32 = *(_QWORD *)v2;
    *((double *)v2 + 22) = v19;
    (*(void (__fastcall **)(CVisual *, __int64))(v32 + 24))(v2, 32LL);
  }
  if ( *((_DWORD *)this + 64) )
  {
    do
    {
      v27 = *(_QWORD *)(*((_QWORD *)this + 29) + 8LL * v3);
      v34 = v27;
      if ( v27 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
        v2 = v36;
        v28 = DynArray<CRenderDataInstruction *,0>::AddMultipleAndSet((char *)v36 + 232, &v34);
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x8Eu);
        }
        else
        {
          v29 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v2 + 24LL);
          if ( v29 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags(v2, 4u);
          else
            v29(v2, 4u);
        }
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 64) );
  }
  *a2 = v2;
LABEL_21:
  if ( v35 )
    CBaseObject::Release(v35);
  return v4;
}

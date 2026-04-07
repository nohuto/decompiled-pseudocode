/*
 * XREFs of ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180019DC0
 * Callers:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800108B8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180040030 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x1800400C0 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1800135C0 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAPEAV4@@Z @ 0x1800165D0 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAP.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x1800189B0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180018AB4 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180018B1C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x180018B7C (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180018FA8 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180021DA0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180021FC8 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800224E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800335A0 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x18003E7EC (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z @ 0x18007CB3C (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x18007D2A4 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateProperties(CThumbnailVisual *this, int a2)
{
  int v2; // r14d
  int v3; // ebp
  int updated; // r15d
  struct tagSIZE *v6; // r11
  _DWORD *v7; // rcx
  LONG v8; // edx
  LONG v9; // eax
  __int64 (__fastcall *v10)(CVisual *__hidden, const struct tagSIZE *); // rdi
  int v11; // eax
  __int64 v12; // rcx
  const struct _MARGINS *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx
  struct tagSIZE **v18; // r15
  __int64 v19; // rdi
  struct IDwmWindow *v20; // rax
  int BrushForCVI; // eax
  __m128i *v22; // rdi
  __int64 v23; // r10
  unsigned int v24; // eax
  unsigned int v25; // edx
  int v26; // eax
  int v27; // ebx
  int v28; // ecx
  unsigned __int64 v29; // xmm0_8
  CBaseObject *v30; // rcx
  CBaseObject *v31; // rcx
  CBaseObject *v32; // rcx
  __int64 v33; // rax
  char v34; // al
  __int64 v35; // rax
  double v36; // xmm1_8
  double v37; // xmm1_8
  CBaseObject *v38; // rcx
  CBaseObject *v39; // rcx
  __int64 v40; // rdx
  bool v41; // r10
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  CBaseObject *v48; // rcx
  int v49; // r9d
  CBaseObject *v50; // rcx
  CBaseObject *v51; // rcx
  CBaseObject *v52; // rcx
  CBaseObject *v53; // rcx
  unsigned int v54; // [rsp+20h] [rbp-38h]
  struct tagSIZE v55; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  v3 = 0;
  updated = CThumbnailVisual::_UpdateAnimatedProperties(this, a2);
  if ( (v2 & 4) != 0 )
  {
    v33 = *((_QWORD *)this + 44);
    if ( v33 )
    {
      v34 = *(_BYTE *)(v33 + 35);
      if ( *((_BYTE *)this + 340) != v34 )
      {
        *((_BYTE *)this + 340) = v34;
        if ( v34 )
        {
          v37 = 0.0;
          *((_QWORD *)this + 40) = *((_QWORD *)this + 22);
        }
        else
        {
          v37 = *((double *)this + 40);
        }
        CVisual::SetOpacity(this, v37);
      }
    }
  }
  if ( updated < 0 && (v2 & 1) != 0 && *((_QWORD *)this + 44) )
  {
    if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
    {
      CThumbnailVisual::SetDirtyFlags(this, 0x4000);
    }
    else
    {
      v55 = v6[5];
      CVisual::SetOffset(this, (const struct tagPOINT *)&v55);
    }
    v7 = (_DWORD *)*((_QWORD *)this + 44);
    v8 = v7[13] - v7[11];
    if ( v8 < 0 )
      v8 = 0;
    v9 = v7[12] - v7[10];
    v55.cy = v8;
    if ( v9 < 0 )
      v9 = 0;
    v55.cx = v9;
    v10 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)this + 80LL);
    if ( v10 == CVisual::SetSize )
      v11 = CVisual::SetSize(this, &v55);
    else
      v11 = v10(this, &v55);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x64u);
      goto LABEL_38;
    }
    CThumbnailVisual::SetDirtyFlags(this, 4096);
    if ( CThumbnailVisual::_IsImmersiveIconic(this) )
      CThumbnailVisual::SetDirtyFlags(this, 0x10000);
  }
  if ( !*((_BYTE *)this + 340) && updated < 0 && (v2 & 4) != 0 )
  {
    v35 = *((_QWORD *)this + 44);
    if ( v35 )
    {
      if ( (*(_BYTE *)(v35 + 36) & 4) != 0 )
      {
        v36 = (double)*(unsigned __int8 *)(v35 + 72) / 255.0;
        *((double *)this + 40) = v36;
        CVisual::SetOpacity(this, v36);
      }
    }
  }
  if ( (v2 & 2) != 0 )
    CThumbnailVisual::SetDirtyFlags(this, 0x4000);
  if ( (v2 & 0x10) != 0
    && (!CWindowData::IsImmersiveWindow(*(CWindowData **)(*((_QWORD *)this + 44) + 24LL)) || !AreAllMarginsZero(v14 + 4)) )
  {
    v15 = (CBaseObject *)*((_QWORD *)this + 46);
    if ( v15 )
    {
      CBaseObject::Release(v15);
      *((_QWORD *)this + 46) = 0LL;
    }
    v16 = (CBaseObject *)*((_QWORD *)this + 52);
    if ( v16 )
    {
      CBaseObject::Release(v16);
      *((_QWORD *)this + 52) = 0LL;
    }
    v17 = (CBaseObject *)*((_QWORD *)this + 45);
    if ( v17 )
    {
      CBaseObject::Release(v17);
      *((_QWORD *)this + 45) = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x2000);
  }
  if ( (v2 & 8) != 0 )
  {
    v12 = *((_QWORD *)this + 44);
    if ( v12 )
    {
      *((_BYTE *)this + 456) = *(_DWORD *)(v12 + 73) != 0;
      CThumbnailVisual::SetDirtyFlags(this, 0x2000);
    }
  }
  if ( (v2 & 0x80000) != 0 )
  {
    BrushForCVI = CVisual::MoveToFront(this, 0);
    v3 = BrushForCVI;
    if ( BrushForCVI < 0 )
    {
      v54 = 146;
LABEL_120:
      v49 = BrushForCVI;
LABEL_123:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v49, v54);
      goto LABEL_38;
    }
  }
  if ( (v2 & 0x400000) != 0 )
    CThumbnailVisual::SetDirtyFlags(this, 0x2000);
  if ( (v2 & 0xC000000) == 0xC000000 )
    CThumbnailVisual::SetDirtyFlags(this, 0x8000);
  if ( (v2 & 0x30000000) == 0x30000000 )
    CThumbnailVisual::SetDirtyFlags(this, 0x20000);
  if ( (v2 & 0xC0000000) == 0xC0000000 )
  {
    CThumbnailVisual::SetDirtyFlags(this, 0x8000);
    if ( (v2 & 0x40000000) != 0 )
    {
      BrushForCVI = CThumbnailVisual::EnsureVisualBrush(this);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v54 = 169;
        goto LABEL_120;
      }
    }
    else
    {
      v38 = (CBaseObject *)*((_QWORD *)this + 46);
      if ( v38 )
      {
        CBaseObject::Release(v38);
        *((_QWORD *)this + 46) = 0LL;
      }
      v39 = (CBaseObject *)*((_QWORD *)this + 52);
      if ( v39 )
      {
        CBaseObject::Release(v39);
        *((_QWORD *)this + 52) = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags(this, 0x2000);
    }
  }
  if ( (v2 & 0x100000) != 0 )
  {
    if ( *((_QWORD *)this + 45) && *((_QWORD *)this + 52) )
    {
      v40 = *((_QWORD *)this + 44);
      v41 = 0;
      if ( (*(_BYTE *)(v40 + 36) & 3) == 3 && *((_BYTE *)this + 458) )
      {
        v42 = *(_DWORD *)(v40 + 48) - *(_DWORD *)(v40 + 40);
        if ( v42 < 0 )
          v42 = 0;
        v43 = *(_DWORD *)(v40 + 64) - *(_DWORD *)(v40 + 56);
        if ( v43 < 0 )
          v43 = 0;
        if ( v42 == v43 )
        {
          v44 = *(_DWORD *)(v40 + 52) - *(_DWORD *)(v40 + 44);
          if ( v44 < 0 )
            v44 = 0;
          v45 = *(_DWORD *)(v40 + 68) - *(_DWORD *)(v40 + 60);
          if ( v45 < 0 )
            v45 = 0;
          if ( v44 == v45 )
          {
            v46 = *(_DWORD *)(v40 + 48) - *(_DWORD *)(v40 + 40);
            if ( v46 < 0 )
              v46 = 0;
            if ( v46 == *((_DWORD *)this + 123) )
            {
              v47 = *(_DWORD *)(v40 + 52) - *(_DWORD *)(v40 + 44);
              v41 = 0;
              if ( v47 < 0 )
                v47 = 0;
              if ( v47 == *((_DWORD *)this + 124) )
                v41 = 1;
            }
          }
        }
      }
      CSecondaryWindowRepresentation::MakeStatic(
        *((CSecondaryWindowRepresentation **)this + 45),
        v41,
        (CThumbnailVisual *)((char *)this + 516),
        (struct CResource **)this + 52);
      v48 = (CBaseObject *)*((_QWORD *)this + 46);
      if ( v48 )
      {
        CBaseObject::Release(v48);
        *((_QWORD *)this + 46) = 0LL;
      }
      BrushForCVI = CSecondaryWindowRepresentation::CreateBrushForCVI(
                      (__int64)v48,
                      2,
                      *((_QWORD *)this + 52),
                      *((_QWORD *)this + 48),
                      0LL,
                      (CBaseObject **)this + 46);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v54 = 206;
        goto LABEL_120;
      }
      if ( !*(_BYTE *)(*((_QWORD *)this + 45) + 160LL) )
      {
        if ( CThumbnailVisual::_IsImmersiveIconic(this) )
        {
          *(_DWORD *)(*((_QWORD *)this + 44) + 36LL) |= 0x800000u;
          v2 |= 0x800000u;
        }
        else
        {
          CThumbnailVisual::SetDirtyFlags(this, 0x8000);
          CThumbnailVisual::SetDirtyFlags(this, 0x40000);
          CThumbnailVisual::SetDirtyFlags(this, 4096);
          *((_BYTE *)this + 458) = 0;
          CVisual::RenderRecursive(this);
        }
      }
      goto LABEL_34;
    }
    v18 = (struct tagSIZE **)((char *)this + 352);
    v19 = *(_QWORD *)(*((_QWORD *)this + 44) + 24LL);
    if ( *(char *)(v19 + 572) >= 0
      || *(_QWORD *)(v19 + 400)
      || (v20 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v19 + 24) + 352LL))(*(_QWORD *)(v19 + 24))) == 0LL )
    {
LABEL_60:
      v30 = (CBaseObject *)*((_QWORD *)this + 46);
      if ( v30 )
      {
        CBaseObject::Release(v30);
        *((_QWORD *)this + 46) = 0LL;
      }
      v31 = (CBaseObject *)*((_QWORD *)this + 52);
      if ( v31 )
      {
        CBaseObject::Release(v31);
        *((_QWORD *)this + 52) = 0LL;
      }
      v32 = (CBaseObject *)*((_QWORD *)this + 45);
      if ( v32 )
      {
        CBaseObject::Release(v32);
        *((_QWORD *)this + 45) = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags(this, 0x2000);
      goto LABEL_34;
    }
    v55 = 0LL;
    BrushForCVI = CWindowList::GetSyncedWindowData(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                    v20,
                    0,
                    (struct CWindowData **)&v55);
    v3 = BrushForCVI;
    if ( BrushForCVI < 0 )
    {
      v54 = 236;
      goto LABEL_120;
    }
    DynArray<CThumbnailData *,0>::Remove(*(_QWORD *)&(*v18)[3] + 488LL, (char *)this + 352);
    v22 = (__m128i *)v55;
    v23 = *(_QWORD *)&v55 + 488LL;
    (*v18)[3] = v55;
    v24 = *(_DWORD *)(v23 + 24);
    v25 = v24 + 1;
    if ( v24 + 1 < v24 )
    {
      v27 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v3 = -2147024362;
    }
    else
    {
      v3 = 0;
      if ( v25 <= *(_DWORD *)(v23 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)v23 + 8LL * *(unsigned int *)(v23 + 24)) = *v18;
        *(_DWORD *)(v23 + 24) = v25;
LABEL_59:
        v28 = _mm_cvtsi128_si32(v22[5]);
        v29 = _mm_srli_si128(v22[5], 8).m128i_u64[0];
        (*v18)[7].cy += v29;
        (*v18)[7].cx += v28;
        (*v18)[8].cx -= v28;
        (*v18)[8].cy -= HIDWORD(v29);
        goto LABEL_60;
      }
      v26 = DynArrayImpl<0>::AddMultipleAndSet(v23, 8LL, 1LL, (char *)this + 352);
      v27 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0xC0u);
      v3 = v27;
      if ( v27 >= 0 )
        goto LABEL_59;
    }
    v54 = 239;
    v49 = v27;
    goto LABEL_123;
  }
LABEL_34:
  if ( (v2 & 0x800000) != 0 )
  {
    v50 = (CBaseObject *)*((_QWORD *)this + 46);
    if ( v50 )
    {
      CBaseObject::Release(v50);
      *((_QWORD *)this + 46) = 0LL;
    }
    v51 = (CBaseObject *)*((_QWORD *)this + 52);
    if ( v51 )
    {
      CBaseObject::Release(v51);
      *((_QWORD *)this + 52) = 0LL;
    }
    v52 = (CBaseObject *)*((_QWORD *)this + 45);
    if ( v52 )
    {
      CBaseObject::Release(v52);
      *((_QWORD *)this + 45) = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x2000);
    CThumbnailVisual::OnRepresentationTypeUpdated(this);
  }
  if ( *((_BYTE *)this + 456) && !*((_DWORD *)this + 64) )
    CThumbnailVisual::SetDirtyFlags(this, 0x2000);
LABEL_38:
  if ( v3 < 0 )
  {
    v53 = (CBaseObject *)*((_QWORD *)this + 56);
    if ( v53 )
    {
      CBaseObject::Release(v53);
      *((_QWORD *)this + 56) = 0LL;
    }
    *((_QWORD *)this + 56) = 0LL;
  }
  return (unsigned int)v3;
}

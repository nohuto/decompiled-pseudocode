/*
 * XREFs of ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180014204
 * Callers:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180010C30 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180012000 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180012090 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1800058E8 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x18000818C (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012F30 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180013018 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180013080 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x1800130E0 (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180013474 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180017DC4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001C850 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001CB70 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001D0C8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001D130 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180029520 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAPEAV4@@Z @ 0x1800335A0 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAP.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z @ 0x180074AB8 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x180075214 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
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
  __int64 v14; // rax
  char v15; // al
  __int64 v16; // rax
  double v17; // xmm1_8
  const struct _MARGINS *v18; // rdx
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  struct tagSIZE **v22; // r15
  __int64 v23; // rdi
  struct IDwmWindow *v24; // rax
  int BrushForCVI; // eax
  __m128i *v26; // rdi
  __int64 v27; // r10
  unsigned int v28; // eax
  unsigned int v29; // edx
  int v30; // eax
  int v31; // ebx
  int v32; // ecx
  unsigned __int64 v33; // xmm0_8
  CBaseObject *v34; // rcx
  CBaseObject *v35; // rcx
  CBaseObject *v36; // rcx
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
    v14 = *((_QWORD *)this + 44);
    if ( v14 )
    {
      v15 = *(_BYTE *)(v14 + 35);
      if ( *((_BYTE *)this + 340) != v15 )
      {
        *((_BYTE *)this + 340) = v15;
        if ( v15 )
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x80u);
      goto LABEL_38;
    }
    CThumbnailVisual::SetDirtyFlags(this, 4096);
    if ( CThumbnailVisual::_IsImmersiveIconic(this) )
      CThumbnailVisual::SetDirtyFlags(this, 0x10000);
  }
  if ( !*((_BYTE *)this + 340) && updated < 0 && (v2 & 4) != 0 )
  {
    v16 = *((_QWORD *)this + 44);
    if ( v16 )
    {
      if ( (*(_BYTE *)(v16 + 36) & 4) != 0 )
      {
        v17 = (double)*(unsigned __int8 *)(v16 + 72) / 255.0;
        *((double *)this + 40) = v17;
        CVisual::SetOpacity(this, v17);
      }
    }
  }
  if ( (v2 & 2) != 0 )
    CThumbnailVisual::SetDirtyFlags(this, 0x4000);
  if ( (v2 & 0x10) != 0
    && (!CWindowData::IsImmersiveWindow(*(CWindowData **)(*((_QWORD *)this + 44) + 24LL)) || !AreAllMarginsZero(v18 + 4)) )
  {
    v19 = (CBaseObject *)*((_QWORD *)this + 46);
    if ( v19 )
    {
      CBaseObject::Release(v19);
      *((_QWORD *)this + 46) = 0LL;
    }
    v20 = (CBaseObject *)*((_QWORD *)this + 52);
    if ( v20 )
    {
      CBaseObject::Release(v20);
      *((_QWORD *)this + 52) = 0LL;
    }
    v21 = (CBaseObject *)*((_QWORD *)this + 45);
    if ( v21 )
    {
      CBaseObject::Release(v21);
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
      v54 = 174;
LABEL_119:
      v49 = BrushForCVI;
LABEL_122:
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
        v54 = 197;
        goto LABEL_119;
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
                      v48,
                      2LL,
                      *((_QWORD *)this + 52),
                      *((_QWORD *)this + 48),
                      0LL,
                      (char *)this + 368);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v54 = 234;
        goto LABEL_119;
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
    v22 = (struct tagSIZE **)((char *)this + 352);
    v23 = *(_QWORD *)(*((_QWORD *)this + 44) + 24LL);
    if ( (*(_BYTE *)(v23 + 557) & 2) == 0
      || *(_QWORD *)(v23 + 384)
      || (v24 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 24) + 368LL))(*(_QWORD *)(v23 + 24))) == 0LL )
    {
LABEL_66:
      v34 = (CBaseObject *)*((_QWORD *)this + 46);
      if ( v34 )
      {
        CBaseObject::Release(v34);
        *((_QWORD *)this + 46) = 0LL;
      }
      v35 = (CBaseObject *)*((_QWORD *)this + 52);
      if ( v35 )
      {
        CBaseObject::Release(v35);
        *((_QWORD *)this + 52) = 0LL;
      }
      v36 = (CBaseObject *)*((_QWORD *)this + 45);
      if ( v36 )
      {
        CBaseObject::Release(v36);
        *((_QWORD *)this + 45) = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags(this, 0x2000);
      goto LABEL_34;
    }
    v55 = 0LL;
    BrushForCVI = CWindowList::GetSyncedWindowData(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                    v24,
                    0,
                    (struct CWindowData **)&v55);
    v3 = BrushForCVI;
    if ( BrushForCVI < 0 )
    {
      v54 = 264;
      goto LABEL_119;
    }
    DynArray<CThumbnailData *,0>::Remove((__int64 *)(*(_QWORD *)&(*v22)[3] + 472LL), (__int64 *)this + 44);
    v26 = (__m128i *)v55;
    v27 = *(_QWORD *)&v55 + 472LL;
    (*v22)[3] = v55;
    v28 = *(_DWORD *)(v27 + 24);
    v29 = v28 + 1;
    if ( v28 + 1 < v28 )
    {
      v31 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v3 = -2147024362;
    }
    else
    {
      v3 = 0;
      if ( v29 <= *(_DWORD *)(v27 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)v27 + 8LL * *(unsigned int *)(v27 + 24)) = *v22;
        *(_DWORD *)(v27 + 24) = v29;
LABEL_65:
        v32 = _mm_cvtsi128_si32(v26[5]);
        v33 = _mm_srli_si128(v26[5], 8).m128i_u64[0];
        (*v22)[7].cy += v33;
        (*v22)[7].cx += v32;
        (*v22)[8].cx -= v32;
        (*v22)[8].cy -= HIDWORD(v33);
        goto LABEL_66;
      }
      v30 = DynArrayImpl<0>::AddMultipleAndSet(v27, 8LL, 1LL, (char *)this + 352);
      v31 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v30, 0xC0u);
      v3 = v31;
      if ( v31 >= 0 )
        goto LABEL_65;
    }
    v54 = 267;
    v49 = v31;
    goto LABEL_122;
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

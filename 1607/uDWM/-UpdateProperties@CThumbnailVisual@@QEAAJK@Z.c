/*
 * XREFs of ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180017064
 * Callers:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000B2B0 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x18003FB80 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18003FC10 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 * Callees:
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x180009284 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180015FA0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180016068 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x1800160D0 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x180016140 (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180016574 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x18001B620 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001F090 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001F250 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001F7A4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAPEAV4@@Z @ 0x180033D28 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAP.c)
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x18003FA64 (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z @ 0x18007D7B4 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x18007DE78 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateProperties(CSecondaryWindowRepresentation **this, int a2)
{
  int v2; // esi
  int v3; // edi
  int updated; // r14d
  CSecondaryWindowRepresentation *v6; // rcx
  LONG v7; // edx
  LONG v8; // eax
  __int64 (__fastcall *v9)(CVisual *__hidden, const struct tagSIZE *); // rax
  int v10; // eax
  CSecondaryWindowRepresentation *v11; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  struct tagSIZE **v16; // r14
  struct tagSIZE v17; // rcx
  struct IDwmWindow *v18; // rax
  int BrushForCVI; // eax
  struct tagSIZE v20; // r15
  __int64 v21; // r10
  unsigned int v22; // eax
  unsigned int v23; // edx
  __m128i v24; // xmm1
  int v25; // ecx
  unsigned __int64 v26; // xmm0_8
  CBaseObject *v27; // rcx
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  CSecondaryWindowRepresentation *v30; // rax
  char v31; // al
  CSecondaryWindowRepresentation *v32; // rax
  double v33; // xmm1_8
  int v34; // eax
  int v35; // ebp
  double v36; // xmm1_8
  int v37; // r9d
  CBaseObject *v38; // rcx
  CBaseObject *v39; // rcx
  CSecondaryWindowRepresentation *v40; // rdx
  bool v41; // r10
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  CBaseObject *v48; // rcx
  CBaseObject *v49; // rcx
  CBaseObject *v50; // rcx
  CBaseObject *v51; // rcx
  CBaseObject *v52; // rcx
  unsigned int v53; // [rsp+20h] [rbp-38h]
  struct tagSIZE v54; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  v3 = 0;
  updated = CThumbnailVisual::_UpdateAnimatedProperties((CThumbnailVisual *)this, a2);
  if ( (v2 & 4) != 0 )
  {
    v30 = this[44];
    if ( v30 )
    {
      v31 = *((_BYTE *)v30 + 35);
      if ( *((_BYTE *)this + 340) != v31 )
      {
        *((_BYTE *)this + 340) = v31;
        if ( v31 )
        {
          v36 = 0.0;
          this[40] = this[22];
        }
        else
        {
          v36 = *((double *)this + 40);
        }
        CVisual::SetOpacity((CVisual *)this, v36);
      }
    }
  }
  if ( updated < 0 && (v2 & 1) != 0 && this[44] )
  {
    if ( CThumbnailVisual::_IsThumbnailCVIStatic((CThumbnailVisual *)this) )
    {
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x4000);
    }
    else
    {
      v54 = (struct tagSIZE)*((_QWORD *)this[44] + 5);
      CVisual::SetOffset((CVisual *)this, (const struct tagPOINT *)&v54);
    }
    v6 = this[44];
    v7 = *((_DWORD *)v6 + 13) - *((_DWORD *)v6 + 11);
    if ( v7 < 0 )
      v7 = 0;
    v8 = *((_DWORD *)v6 + 12) - *((_DWORD *)v6 + 10);
    v54.cy = v7;
    if ( v8 < 0 )
      v8 = 0;
    v54.cx = v8;
    v9 = (__int64 (__fastcall *)(CVisual *__hidden, const struct tagSIZE *))*((_QWORD *)*this + 10);
    if ( v9 == CVisual::SetSize )
      v10 = CVisual::SetSize((CVisual *)this, &v54);
    else
      v10 = v9((CVisual *)this, &v54);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x64u);
      goto LABEL_38;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 4096);
    if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this) )
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x10000);
  }
  if ( !*((_BYTE *)this + 340) && updated < 0 && (v2 & 4) != 0 )
  {
    v32 = this[44];
    if ( v32 )
    {
      if ( (*((_BYTE *)v32 + 36) & 4) != 0 )
      {
        v33 = (double)*((unsigned __int8 *)v32 + 72) / 255.0;
        *((double *)this + 40) = v33;
        CVisual::SetOpacity((CVisual *)this, v33);
      }
    }
  }
  if ( (v2 & 2) != 0 )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x4000);
  if ( (v2 & 0x10) != 0
    && (!CWindowData::IsImmersiveWindow(*((CWindowData **)this[44] + 3))
     || !AreAllMarginsZero((const struct _MARGINS *)(*((_QWORD *)this[44] + 3) + 64LL))) )
  {
    v13 = this[46];
    if ( v13 )
    {
      CBaseObject::Release(v13);
      this[46] = 0LL;
    }
    v14 = this[52];
    if ( v14 )
    {
      CBaseObject::Release(v14);
      this[52] = 0LL;
    }
    v15 = this[45];
    if ( v15 )
    {
      CBaseObject::Release(v15);
      this[45] = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000);
  }
  if ( (v2 & 8) != 0 )
  {
    v11 = this[44];
    if ( v11 )
    {
      *((_BYTE *)this + 456) = *(_DWORD *)((char *)v11 + 73) != 0;
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000);
    }
  }
  if ( (v2 & 0x80000) != 0 )
  {
    BrushForCVI = CVisual::MoveToFront((CVisual *)this, 0);
    v3 = BrushForCVI;
    if ( BrushForCVI < 0 )
    {
      v53 = 146;
LABEL_88:
      v37 = BrushForCVI;
      goto LABEL_84;
    }
  }
  if ( (v2 & 0x400000) != 0 )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000);
  if ( (v2 & 0xC000000) == 0xC000000 )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000);
  if ( (v2 & 0x30000000) == 0x30000000 )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x20000);
  if ( (v2 & 0xC0000000) == 0xC0000000 )
  {
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000);
    if ( (v2 & 0x40000000) != 0 )
    {
      BrushForCVI = CThumbnailVisual::EnsureVisualBrush((CThumbnailVisual *)this);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v53 = 169;
        goto LABEL_88;
      }
    }
    else
    {
      v38 = this[46];
      if ( v38 )
      {
        CBaseObject::Release(v38);
        this[46] = 0LL;
      }
      v39 = this[52];
      if ( v39 )
      {
        CBaseObject::Release(v39);
        this[52] = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000);
    }
  }
  if ( (v2 & 0x100000) != 0 )
  {
    if ( this[45] && this[52] )
    {
      v40 = this[44];
      v41 = 0;
      if ( (*((_BYTE *)v40 + 36) & 3) == 3 && *((_BYTE *)this + 458) )
      {
        v42 = *((_DWORD *)v40 + 12) - *((_DWORD *)v40 + 10);
        if ( v42 < 0 )
          v42 = 0;
        v43 = *((_DWORD *)v40 + 16) - *((_DWORD *)v40 + 14);
        if ( v43 < 0 )
          v43 = 0;
        if ( v42 == v43 )
        {
          v44 = *((_DWORD *)v40 + 13) - *((_DWORD *)v40 + 11);
          if ( v44 < 0 )
            v44 = 0;
          v45 = *((_DWORD *)v40 + 17) - *((_DWORD *)v40 + 15);
          if ( v45 < 0 )
            v45 = 0;
          if ( v44 == v45 )
          {
            v46 = *((_DWORD *)v40 + 12) - *((_DWORD *)v40 + 10);
            if ( v46 < 0 )
              v46 = 0;
            if ( v46 == *((_DWORD *)this + 123) )
            {
              v47 = *((_DWORD *)v40 + 13) - *((_DWORD *)v40 + 11);
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
        this[45],
        v41,
        (const struct MilPointAndSizeL *)((char *)this + 516),
        this + 52);
      v48 = this[46];
      if ( v48 )
      {
        CBaseObject::Release(v48);
        this[46] = 0LL;
      }
      BrushForCVI = CSecondaryWindowRepresentation::CreateBrushForCVI(v48, 2LL, this[52], this[48], 0LL, this + 46);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v53 = 206;
        goto LABEL_88;
      }
      if ( !*((_BYTE *)this[45] + 160) )
      {
        if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this) )
        {
          *((_DWORD *)this[44] + 9) |= 0x800000u;
          v2 |= 0x800000u;
        }
        else
        {
          CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000);
          CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x40000);
          CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 4096);
          *((_BYTE *)this + 458) = 0;
          CVisual::RenderRecursive((CVisual *)this);
        }
      }
      goto LABEL_34;
    }
    v16 = (struct tagSIZE **)(this + 44);
    if ( !CWindowData::IsShellManaged(*((CWindowData **)this[44] + 3))
      || (v17 = (*v16)[3], *(_QWORD *)(*(_QWORD *)&v17 + 408LL))
      || (v18 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&v17 + 24LL) + 352LL))(*(_QWORD *)(*(_QWORD *)&v17 + 24LL))) == 0LL )
    {
LABEL_58:
      v27 = this[46];
      if ( v27 )
      {
        CBaseObject::Release(v27);
        this[46] = 0LL;
      }
      v28 = this[52];
      if ( v28 )
      {
        CBaseObject::Release(v28);
        this[52] = 0LL;
      }
      v29 = this[45];
      if ( v29 )
      {
        CBaseObject::Release(v29);
        this[45] = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000);
      goto LABEL_34;
    }
    v54 = 0LL;
    BrushForCVI = CWindowList::GetSyncedWindowData(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                    v18,
                    0,
                    (struct CWindowData **)&v54);
    v3 = BrushForCVI;
    if ( BrushForCVI < 0 )
    {
      v53 = 236;
      goto LABEL_88;
    }
    DynArray<CThumbnailData *,0>::Remove(*(_QWORD *)&(*v16)[3] + 496LL, this + 44);
    v20 = v54;
    v21 = *(_QWORD *)&v54 + 496LL;
    (*v16)[3] = v54;
    v22 = *(_DWORD *)(v21 + 24);
    v23 = v22 + 1;
    if ( v22 + 1 < v22 )
    {
      v35 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
    }
    else
    {
      v3 = 0;
      if ( v23 <= *(_DWORD *)(v21 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)v21 + 8LL * v22) = *v16;
        *(_DWORD *)(v21 + 24) = v23;
LABEL_57:
        v24 = *(__m128i *)(*(_QWORD *)&v20 + 80LL);
        v25 = _mm_cvtsi128_si32(v24);
        v26 = _mm_srli_si128(v24, 8).m128i_u64[0];
        (*v16)[7].cy += v26;
        (*v16)[7].cx += v25;
        (*v16)[8].cx -= v25;
        (*v16)[8].cy -= HIDWORD(v26);
        goto LABEL_58;
      }
      v34 = DynArrayImpl<0>::AddMultipleAndSet(v21, 8LL, 1LL, this + 44);
      v35 = v34;
      if ( v34 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0xC0u);
      v3 = v35;
      if ( v35 >= 0 )
        goto LABEL_57;
    }
    v53 = 239;
    v37 = v35;
LABEL_84:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, v53);
    goto LABEL_38;
  }
LABEL_34:
  if ( (v2 & 0x800000) != 0 )
  {
    v49 = this[46];
    if ( v49 )
    {
      CBaseObject::Release(v49);
      this[46] = 0LL;
    }
    v50 = this[52];
    if ( v50 )
    {
      CBaseObject::Release(v50);
      this[52] = 0LL;
    }
    v51 = this[45];
    if ( v51 )
    {
      CBaseObject::Release(v51);
      this[45] = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000);
    CThumbnailVisual::OnRepresentationTypeUpdated((CThumbnailVisual *)this);
  }
  if ( *((_BYTE *)this + 456) && !*((_DWORD *)this + 64) )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000);
LABEL_38:
  if ( v3 < 0 )
  {
    v52 = this[56];
    if ( v52 )
    {
      CBaseObject::Release(v52);
      this[56] = 0LL;
    }
    this[56] = 0LL;
  }
  return (unsigned int)v3;
}

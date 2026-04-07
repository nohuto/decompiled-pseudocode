/*
 * XREFs of ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800341F4
 * Callers:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180018FCC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800349D8 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180012FB0 (-OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800131A0 (-OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x180017B54 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180017C5C (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x180017CFC (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180017DC4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18001CA30 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800256C0 (-OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180033E98 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18003451C (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x180034AF8 (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x180071498 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnRepresentationUpdated(CSecondaryWindowRepresentation *this)
{
  unsigned int v2; // esi
  CWindowData *v3; // rcx
  CWindowData **v4; // rdi
  char v5; // bp
  int v6; // eax
  char v7; // r14
  __int64 v8; // r9
  int v9; // eax
  int v10; // eax
  CWindowData *v11; // r8
  char v12; // r15
  CWindowData *v13; // rdx
  CWindowData *v14; // r8
  CWindowData *v15; // rdx
  int v16; // eax
  CTopLevelWindow3D *v17; // r14
  void (__fastcall *v18)(CThumbnailVisual *, const struct CSecondaryWindowRepresentation *); // rbp
  CWindowData *v19; // rdx
  CWindowData *v20; // r8
  CVisual *v21; // rcx
  CBaseObject *v23; // rcx
  void (__fastcall *v24)(CThumbnailVisual *, const struct CSecondaryWindowRepresentation *); // rbp
  CBaseObject *v25; // rcx
  int v26; // eax
  __int128 v27; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (CWindowData *)*((_QWORD *)this + 4);
  if ( !v3 || *((_BYTE *)this + 160) )
    return v2;
  v4 = (CWindowData **)((char *)this + 64);
  v5 = 1;
  v27 = *((_OWORD *)this + 4);
  v6 = *((_DWORD *)this + 10);
  if ( (v6 & 0x800) != 0 )
  {
    *((_DWORD *)this + 18) = 3;
    *v4 = v3;
  }
  else
  {
    CWindowData::GetIdealWindowRepresentation(
      v3,
      (v6 & 0x20) != 0,
      (CSecondaryWindowRepresentation *)((char *)this + 64));
  }
  v7 = 0;
  if ( (CWindowData *)v27 != *v4 || DWORD2(v27) != *((_DWORD *)this + 18) )
  {
    CSecondaryWindowRepresentation::ReleaseAllResources(this);
    v7 = 1;
    if ( *((_DWORD *)this + 18) == 3 && CWindowData::IsImmersiveWindow(*((CWindowData **)this + 4)) )
    {
      v25 = (CBaseObject *)*((_QWORD *)this + 64);
      if ( v25 )
      {
        CBaseObject::Release(v25);
        *((_QWORD *)this + 64) = 0LL;
      }
      v26 = CImmersiveWindowIconic::Create(
              *((struct CWindowData **)this + 4),
              *((_DWORD *)this + 41),
              (enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 30),
              (*((_DWORD *)this + 10) & 0x1000) != 0,
              (struct CImmersiveWindowIconic **)this + 64);
      v2 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x1CBu);
        return v2;
      }
    }
    v9 = CWindowData::ChangeSecondaryWindowRepresentation(*((CWindowData **)this + 4), this, (CWindowData **)&v27, v8);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x1CEu);
      return v2;
    }
    v10 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(this);
    v2 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x1CFu);
      return v2;
    }
  }
  v11 = 0LL;
  v12 = *((_BYTE *)this + 472);
  v13 = *v4;
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v11 = *(CWindowData **)(*((_QWORD *)v13 + 48) + 32LL);
      goto LABEL_12;
    }
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_12;
    if ( !CWindowData::IsImmersiveWindow(*v4) )
    {
      v11 = *(CWindowData **)(*((_QWORD *)v13 + 49) + 80LL);
      goto LABEL_12;
    }
  }
  v11 = v13;
LABEL_12:
  if ( CWindowData::IsSimpleClientArea(v11) && !*((_QWORD *)this + 6) )
  {
    v14 = 0LL;
    v15 = *v4;
    switch ( *((_DWORD *)this + 18) )
    {
      case 1:
LABEL_15:
        v14 = v15;
        break;
      case 2:
        v14 = *(CWindowData **)(*((_QWORD *)v15 + 48) + 32LL);
        break;
      case 3:
        if ( CWindowData::IsImmersiveWindow(*v4) )
          goto LABEL_15;
        v14 = *(CWindowData **)(*((_QWORD *)v15 + 49) + 80LL);
        break;
    }
    if ( !CWindowData::IsImmersiveWindow(v14) )
      goto LABEL_17;
  }
  v5 = 0;
LABEL_17:
  *((_BYTE *)this + 472) = v5;
  if ( !v7 )
  {
    if ( !v12 && !v5 )
      return v2;
    v23 = (CBaseObject *)*((_QWORD *)this + 50);
    if ( v23 )
    {
      CBaseObject::Release(v23);
      *((_QWORD *)this + 50) = 0LL;
    }
  }
  if ( (*((_BYTE *)this + 40) & 2) != 0 )
  {
    v24 = *(void (__fastcall **)(CThumbnailVisual *, const struct CSecondaryWindowRepresentation *))(**((_QWORD **)this + 21) + 16LL);
    if ( v24 == CThumbnailVisual::OnRootVisualChanged )
      CThumbnailVisual::OnRootVisualChanged(*((CThumbnailVisual **)this + 21), this);
    else
      v24(*((CThumbnailVisual **)this + 21), this);
  }
  v16 = *((_DWORD *)this + 6);
  if ( (v16 & 4) == 0 )
  {
    v17 = (CTopLevelWindow3D *)*((_QWORD *)this + 21);
    *((_DWORD *)this + 6) = v16 | 4;
    v18 = **(void (__fastcall ***)(CThumbnailVisual *, const struct CSecondaryWindowRepresentation *))v17;
    if ( v18 == CTopLevelWindow3D::OnSWRInvalidated )
    {
      CTopLevelWindow3D::OnSWRInvalidated(v17, this);
    }
    else if ( v18 == CThumbnailVisual::OnSWRInvalidated )
    {
      CThumbnailVisual::OnSWRInvalidated(v17, this);
    }
    else
    {
      v18(v17, this);
    }
  }
  v19 = 0LL;
  v20 = *v4;
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v19 = *(CWindowData **)(*((_QWORD *)v20 + 48) + 32LL);
      goto LABEL_24;
    }
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_24;
    if ( !CWindowData::IsImmersiveWindow(*v4) )
    {
      v19 = *(CWindowData **)(*((_QWORD *)v20 + 49) + 80LL);
      goto LABEL_24;
    }
  }
  v19 = v20;
LABEL_24:
  v21 = (CVisual *)*((_QWORD *)v19 + 46);
  if ( v21 )
    CVisual::PropagateDirtyChildren(v21);
  CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(this);
  return v2;
}

/*
 * XREFs of ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180017220
 * Callers:
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180017A18 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001E880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180016EC8 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180017558 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x180017B38 (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     ?OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180018A50 (-OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180018C70 (-OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x18001D370 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18001D478 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x18001D518 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180021E88 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800339C0 (-OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x180079678 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnRepresentationUpdated(CSecondaryWindowRepresentation *this)
{
  unsigned int v2; // esi
  CWindowData *v3; // rcx
  CWindowData **v4; // rdi
  char v5; // bp
  int v6; // eax
  char v7; // r14
  int v8; // eax
  int v9; // eax
  CWindowData *v10; // r8
  char v11; // r15
  CWindowData *v12; // rdx
  CWindowData *v13; // r8
  CWindowData *v14; // rdx
  int v15; // eax
  CTopLevelWindow3D *v16; // r14
  void (__fastcall *v17)(CThumbnailVisual *__hidden, const struct CSecondaryWindowRepresentation *); // rbp
  CWindowData *v18; // rdx
  CWindowData *v19; // r8
  CVisual *v20; // rcx
  CBaseObject *v22; // rcx
  void (__fastcall *v23)(CThumbnailVisual *__hidden, const struct CSecondaryWindowRepresentation *); // rbp
  CBaseObject *v24; // rcx
  int v25; // eax
  __int128 v26; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (CWindowData *)*((_QWORD *)this + 4);
  if ( !v3 || *((_BYTE *)this + 160) )
    return v2;
  v4 = (CWindowData **)((char *)this + 64);
  v5 = 1;
  v26 = *((_OWORD *)this + 4);
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
  if ( (CWindowData *)v26 != *v4 || DWORD2(v26) != *((_DWORD *)this + 18) )
  {
    CSecondaryWindowRepresentation::ReleaseAllResources(this);
    v7 = 1;
    if ( *((_DWORD *)this + 18) == 3 && CWindowData::IsImmersiveWindow(*((CWindowData **)this + 4)) )
    {
      v24 = (CBaseObject *)*((_QWORD *)this + 64);
      if ( v24 )
      {
        CBaseObject::Release(v24);
        *((_QWORD *)this + 64) = 0LL;
      }
      v25 = CImmersiveWindowIconic::Create(
              *((struct CWindowData **)this + 4),
              *((_DWORD *)this + 41),
              (enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 30),
              (*((_DWORD *)this + 10) & 0x1000) != 0,
              (struct CImmersiveWindowIconic **)this + 64);
      v2 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0x1CBu);
        return v2;
      }
    }
    v8 = CWindowData::ChangeSecondaryWindowRepresentation(
           *((CWindowData **)this + 4),
           this,
           (struct CWindowRepresentation *)&v26);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x1CEu);
      return v2;
    }
    v9 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated((CWindowData **)this);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x1CFu);
      return v2;
    }
  }
  v10 = 0LL;
  v11 = *((_BYTE *)this + 472);
  v12 = *v4;
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v10 = *(CWindowData **)(*((_QWORD *)v12 + 50) + 32LL);
      goto LABEL_11;
    }
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_11;
    if ( !CWindowData::IsImmersiveWindow(*v4) )
    {
      v10 = *(CWindowData **)(*((_QWORD *)v12 + 51) + 80LL);
      goto LABEL_11;
    }
  }
  v10 = v12;
LABEL_11:
  if ( CWindowData::IsSimpleClientArea(v10) && !*((_QWORD *)this + 6) )
  {
    v13 = 0LL;
    v14 = *v4;
    switch ( *((_DWORD *)this + 18) )
    {
      case 1:
LABEL_14:
        v13 = v14;
        break;
      case 2:
        v13 = *(CWindowData **)(*((_QWORD *)v14 + 50) + 32LL);
        break;
      case 3:
        if ( CWindowData::IsImmersiveWindow(*v4) )
          goto LABEL_14;
        v13 = *(CWindowData **)(*((_QWORD *)v14 + 51) + 80LL);
        break;
    }
    if ( !CWindowData::IsImmersiveWindow(v13) )
      goto LABEL_16;
  }
  v5 = 0;
LABEL_16:
  *((_BYTE *)this + 472) = v5;
  if ( !v7 )
  {
    if ( !v11 && !v5 )
      return v2;
    v22 = (CBaseObject *)*((_QWORD *)this + 50);
    if ( v22 )
    {
      CBaseObject::Release(v22);
      *((_QWORD *)this + 50) = 0LL;
    }
  }
  if ( (*((_BYTE *)this + 40) & 2) != 0 )
  {
    v23 = *(void (__fastcall **)(CThumbnailVisual *__hidden, const struct CSecondaryWindowRepresentation *))(**((_QWORD **)this + 21) + 16LL);
    if ( v23 == CThumbnailVisual::OnRootVisualChanged )
      CThumbnailVisual::OnRootVisualChanged(*((CThumbnailVisual **)this + 21), this);
    else
      v23(*((CThumbnailVisual **)this + 21), this);
  }
  v15 = *((_DWORD *)this + 6);
  if ( (v15 & 4) == 0 )
  {
    v16 = (CTopLevelWindow3D *)*((_QWORD *)this + 21);
    *((_DWORD *)this + 6) = v15 | 4;
    v17 = **(void (__fastcall ***)(CThumbnailVisual *__hidden, const struct CSecondaryWindowRepresentation *))v16;
    if ( v17 == CTopLevelWindow3D::OnSWRInvalidated )
    {
      CTopLevelWindow3D::OnSWRInvalidated(v16, this);
    }
    else if ( v17 == CThumbnailVisual::OnSWRInvalidated )
    {
      CThumbnailVisual::OnSWRInvalidated(v16, this);
    }
    else
    {
      v17(v16, this);
    }
  }
  v18 = 0LL;
  v19 = *v4;
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v18 = *(CWindowData **)(*((_QWORD *)v19 + 50) + 32LL);
      goto LABEL_23;
    }
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_23;
    if ( !CWindowData::IsImmersiveWindow(*v4) )
    {
      v18 = *(CWindowData **)(*((_QWORD *)v19 + 51) + 80LL);
      goto LABEL_23;
    }
  }
  v18 = v19;
LABEL_23:
  v20 = (CVisual *)*((_QWORD *)v18 + 48);
  if ( v20 )
    CVisual::PropagateDirtyChildren(v20);
  CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(this);
  return v2;
}

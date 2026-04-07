/*
 * XREFs of ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180012518
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18001DCDC (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180016490 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x18001673C (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x180016D78 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180016F68 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001803C (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18001A4F8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18001A610 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x1800213C4 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021ED8 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180021F38 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A1A0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800335A0 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003C580 (-Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18003D184 (-Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z @ 0x18003D99C (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowSnapshot::ProcessFreezeSnapshotAndRelease(CWindowSnapshot *this, struct CWindowData *a2)
{
  __int64 v2; // rax
  struct CWindowData *v5; // r15
  CSecondaryWindowRepresentation *v6; // r14
  int SyncedWindowData; // eax
  int Brush; // ebx
  __int64 v9; // rdi
  int v10; // eax
  __m128i *v11; // r8
  int v12; // ecx
  CWindowData *v13; // rdx
  int v14; // ecx
  __m128i v15; // xmm1
  int v16; // eax
  unsigned __int64 v17; // xmm0_8
  int v18; // r12d
  int v19; // r15d
  int v20; // eax
  int v21; // r12d
  int v22; // eax
  __int64 i; // rax
  int v24; // edi
  __int64 v25; // rdx
  float ScalingFactorForCVI; // xmm0_4
  bool v27; // zf
  int v28; // ecx
  CResource *v29; // rcx
  int v30; // r9d
  int v31; // r8d
  char *v32; // r12
  CVisual **v33; // r15
  __int64 v34; // rcx
  int v35; // ecx
  CVisual *v36; // rdi
  CVisual *v37; // rdi
  CBaseObject *v38; // rcx
  CVisual *v39; // rdi
  int v41; // ecx
  struct IDwmWindow *v42; // rax
  float v43; // xmm1_4
  int v44; // r9d
  unsigned int v45; // [rsp+20h] [rbp-A9h]
  CVisual *v46; // [rsp+40h] [rbp-89h] BYREF
  int v47[2]; // [rsp+48h] [rbp-81h] BYREF
  int v48; // [rsp+50h] [rbp-79h]
  int v49; // [rsp+54h] [rbp-75h]
  CSecondaryWindowRepresentation *v50; // [rsp+58h] [rbp-71h] BYREF
  int v51; // [rsp+60h] [rbp-69h]
  struct tagRECT v52; // [rsp+70h] [rbp-59h] BYREF
  struct CRenderDataInstruction *v53; // [rsp+80h] [rbp-49h] BYREF
  int v54; // [rsp+88h] [rbp-41h]
  struct tagRECT v55; // [rsp+90h] [rbp-39h]
  struct CWindowData *v56; // [rsp+A0h] [rbp-29h] BYREF
  int v57; // [rsp+A8h] [rbp-21h]
  _DWORD v58[2]; // [rsp+B0h] [rbp-19h] BYREF
  double v59; // [rsp+B8h] [rbp-11h]
  double v60; // [rsp+C0h] [rbp-9h]
  int v61; // [rsp+C8h] [rbp-1h] BYREF
  _QWORD v62[2]; // [rsp+CCh] [rbp+3h]
  int v63; // [rsp+DCh] [rbp+13h]

  v2 = *((_QWORD *)this + 4);
  v46 = 0LL;
  v53 = 0LL;
  v5 = a2;
  v50 = 0LL;
  *(_DWORD *)(v2 + 64) = 0;
  v6 = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 4) + 68LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 72LL) = 0;
  SyncedWindowData = CTopLevelWindow::Create(
                       *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                       &v46);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v45 = 172;
LABEL_81:
    v44 = SyncedWindowData;
    goto LABEL_82;
  }
  v9 = *((_QWORD *)v5 + 3);
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 80LL))(*((_QWORD *)v5 + 3)) )
    {
      v42 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 3) + 352LL))(*((_QWORD *)a2 + 3));
      if ( v42 )
      {
        v56 = 0LL;
        SyncedWindowData = CWindowList::GetSyncedWindowData(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                             v42,
                             0,
                             &v56);
        Brush = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          v45 = 180;
          goto LABEL_81;
        }
        v5 = v56;
      }
    }
  }
  *((_QWORD *)a2 + 50) = 0LL;
  v57 = 1543;
  v10 = CSecondaryWindowRepresentation::Create(1543LL, (char *)this + 16, v5, 0LL, 100, &v50);
  Brush = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xC3u);
    goto LABEL_39;
  }
  v6 = v50;
  SyncedWindowData = CSecondaryWindowRepresentation::Validate(v50);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v45 = 197;
    goto LABEL_81;
  }
  SyncedWindowData = CResource::Create(49LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v45 = 200;
    goto LABEL_81;
  }
  v61 = 35;
  v62[0] = 0LL;
  v11 = 0LL;
  v62[1] = 0LL;
  v63 = 0;
  v12 = *((_DWORD *)v6 + 18);
  v13 = (CWindowData *)*((_QWORD *)v6 + 8);
  v55.left = *((_DWORD *)v6 + 22);
  v55.top = *((_DWORD *)v6 + 24);
  v55.right = *((_DWORD *)v6 + 20) - *((_DWORD *)v6 + 23);
  v55.bottom = *((_DWORD *)v6 + 21) - *((_DWORD *)v6 + 25);
  v52 = v55;
  v14 = v12 - 1;
  if ( !v14 )
    goto LABEL_8;
  v41 = v14 - 1;
  if ( v41 )
  {
    if ( v41 == 1 )
    {
      if ( CWindowData::IsImmersiveWindow(v13) )
      {
LABEL_8:
        v11 = (__m128i *)v13;
        goto LABEL_9;
      }
      v11 = *(__m128i **)(*((_QWORD *)v13 + 51) + 80LL);
    }
  }
  else
  {
    v11 = *(__m128i **)(*((_QWORD *)v13 + 50) + 32LL);
  }
LABEL_9:
  v15 = v11[5];
  v16 = _mm_cvtsi128_si32(v15);
  v17 = _mm_srli_si128(v15, 8).m128i_u64[0];
  v52.right -= v16;
  v52.left += v16;
  v18 = v52.bottom - HIDWORD(v17);
  v52.top = v17 + v55.top;
  v52.bottom -= HIDWORD(v17);
  v19 = v52.right - v52.left;
  *(_QWORD *)v47 = 0LL;
  v20 = v52.right - v52.left;
  if ( v52.right - v52.left < 0 )
    v20 = 0;
  v21 = v18 - (v17 + v55.top);
  v54 = v20;
  v22 = v21;
  if ( v21 < 0 )
    v22 = 0;
  v51 = v22;
  for ( i = 0LL; i < 16; i += 4LL )
    *(float *)((char *)v62 + i + 4) = (float)*(int *)((char *)&v52.left + i);
  SyncedWindowData = CResource::Send(*((CResource **)this + 7), &v61, 0x18u);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v45 = 216;
    goto LABEL_81;
  }
  v24 = v54;
  SyncedWindowData = ResourceHelper::CreateRectangleGeometry(0, 0, v54, v51, (struct CResource **)this + 11);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v45 = 221;
    goto LABEL_81;
  }
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, &v52);
  v27 = *((_QWORD *)this + 6) == 0LL;
  v28 = (int)(float)((float)v51 * ScalingFactorForCVI);
  v48 = (int)(float)((float)v24 * ScalingFactorForCVI);
  *((float *)this + 18) = ScalingFactorForCVI;
  v49 = v28;
  if ( v27 )
    CDesktopManager::GetCVIFromCache((int)(float)((float)v24 * ScalingFactorForCVI), v28, (struct CResource **)this + 6);
  Brush = CSecondaryWindowRepresentation::GetBrush(v6, v25, (char *)this + 56, 0LL);
  if ( Brush < 0 )
  {
    v45 = 241;
  }
  else
  {
    if ( *((_BYTE *)v6 + 160) )
    {
      v43 = *((float *)v6 + 126);
      *((float *)this + 18) = v43;
      if ( v19 < 0 )
        v19 = 0;
      if ( v21 < 0 )
        v21 = 0;
      v31 = (int)(float)((float)v19 * v43);
      v48 = v31;
      v30 = (int)(float)((float)v21 * v43);
      v49 = v30;
    }
    else
    {
      v29 = (CResource *)*((_QWORD *)this + 8);
      v58[1] = 0;
      v58[0] = 36;
      v59 = (double)v48;
      v60 = (double)v49;
      SyncedWindowData = CResource::Send(v29, v58, 0x18u);
      Brush = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v45 = 248;
        goto LABEL_81;
      }
      CSecondaryWindowRepresentation::SnapshotIfStatic(
        v6,
        *((struct CResource **)this + 6),
        *((struct CResource **)this + 5),
        (const struct MilPointAndSizeL *)v47);
      v30 = v49;
      v31 = v48;
    }
    SyncedWindowData = ResourceHelper::CreateRectangleGeometry(v47[0], v47[1], v31, v30, (struct CResource **)this + 11);
    Brush = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v45 = 261;
      goto LABEL_81;
    }
    v32 = (char *)this + 96;
    Brush = CClientArea::Create(
              *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
              0,
              (struct CClientArea **)this + 12);
    if ( Brush >= 0 )
    {
      SyncedWindowData = CDrawGeometryInstruction::Create(
                           *((struct CResource **)this + 5),
                           *((struct CResource **)this + 11),
                           &v53);
      Brush = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v45 = 268;
        goto LABEL_81;
      }
      v33 = (CVisual **)((char *)this + 80);
      SyncedWindowData = CVisual::Create(
                           *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                           (struct CVisual **)this + 10);
      Brush = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v45 = 270;
        goto LABEL_81;
      }
      CVisual::SetScale(*v33, (float)(1.0 / *((float *)this + 18)), (float)(1.0 / *((float *)this + 18)));
      CVisual::SetInterpolationMode(*v33, 1LL);
      SyncedWindowData = CVisual::AddInstruction(*v33, v53);
      Brush = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v45 = 274;
        goto LABEL_81;
      }
      SyncedWindowData = CVisual::RenderRecursive(*v33);
      Brush = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v45 = 275;
        goto LABEL_81;
      }
      v34 = *(_QWORD *)(*(_QWORD *)v32 + 16LL);
      if ( v34 )
        v35 = *(_DWORD *)(v34 + 24);
      else
        v35 = 0;
      v36 = v46;
      *(_DWORD *)(*((_QWORD *)this + 4) + 128LL) = v35;
      *(_QWORD *)(*((_QWORD *)this + 4) + 384LL) = v36;
      if ( v36 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v36 + 2);
        v6 = v50;
      }
      *((_QWORD *)v46 + 93) = *((_QWORD *)this + 4);
      SyncedWindowData = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v32 + 32LL), *v33, 0LL, 0, 1);
      Brush = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v45 = 281;
        goto LABEL_81;
      }
      v37 = v46;
      CVisual::SetDirtyFlags(v46, 0x400000u);
      CVisual::SetDirtyFlags(v37, 0x2000u);
      SyncedWindowData = CTopLevelWindow::ShowWindow(v37, 1);
      Brush = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v45 = 286;
        goto LABEL_81;
      }
      SyncedWindowData = CVisual::RenderRecursive(v37);
      Brush = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v45 = 287;
        goto LABEL_81;
      }
      v38 = (CBaseObject *)*((_QWORD *)this + 3);
      if ( v38 )
        CBaseObject::Release(v38);
      v39 = v46;
      *((_QWORD *)this + 3) = v46;
      _InterlockedIncrement((volatile signed __int32 *)v39 + 2);
      *((_QWORD *)a2 + 50) = this;
      *(_BYTE *)(*((_QWORD *)this + 4) + 572LL) &= ~8u;
LABEL_39:
      v6 = v50;
      goto LABEL_40;
    }
    v45 = 263;
  }
  v44 = Brush;
LABEL_82:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v44, v45);
LABEL_40:
  if ( v46 )
    CBaseObject::Release(v46);
  if ( v53 )
    CBaseObject::Release(v53);
  if ( v6 )
    CBaseObject::Release(v6);
  return (unsigned int)Brush;
}

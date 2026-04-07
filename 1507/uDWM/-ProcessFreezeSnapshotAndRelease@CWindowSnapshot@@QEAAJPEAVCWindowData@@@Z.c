/*
 * XREFs of ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180004F10
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180018458 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z @ 0x1800092A8 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180010AD0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x1800128A4 (-Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180014A30 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180017DC4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18001BD84 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001CA80 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x18001CAE0 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180024864 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180029520 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x18003370C (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x180033D48 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180033F40 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180034EF8 (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180035018 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180039EC8 (-Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowSnapshot::ProcessFreezeSnapshotAndRelease(CWindowSnapshot *this, struct CWindowData *a2)
{
  __int64 v2; // rax
  struct CWindowData *v5; // r15
  CBaseObject *v6; // r14
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
  CBaseObject *v37; // rcx
  CVisual *v38; // rdi
  int v40; // ecx
  struct IDwmWindow *v41; // rax
  float v42; // xmm1_4
  int v43; // r9d
  unsigned int v44; // [rsp+20h] [rbp-A9h]
  CVisual *v45; // [rsp+40h] [rbp-89h] BYREF
  int v46[2]; // [rsp+48h] [rbp-81h] BYREF
  int v47; // [rsp+50h] [rbp-79h]
  int v48; // [rsp+54h] [rbp-75h]
  CBaseObject *v49; // [rsp+58h] [rbp-71h] BYREF
  int v50; // [rsp+60h] [rbp-69h]
  struct tagRECT v51; // [rsp+70h] [rbp-59h] BYREF
  struct CRenderDataInstruction *v52; // [rsp+80h] [rbp-49h] BYREF
  int v53; // [rsp+88h] [rbp-41h]
  struct tagRECT v54; // [rsp+90h] [rbp-39h]
  struct CWindowData *v55; // [rsp+A0h] [rbp-29h] BYREF
  int v56; // [rsp+A8h] [rbp-21h]
  _DWORD v57[2]; // [rsp+B0h] [rbp-19h] BYREF
  double v58; // [rsp+B8h] [rbp-11h]
  double v59; // [rsp+C0h] [rbp-9h]
  int v60; // [rsp+C8h] [rbp-1h] BYREF
  _QWORD v61[2]; // [rsp+CCh] [rbp+3h]
  int v62; // [rsp+DCh] [rbp+13h]

  v2 = *((_QWORD *)this + 4);
  v45 = 0LL;
  v52 = 0LL;
  v5 = a2;
  v49 = 0LL;
  *(_DWORD *)(v2 + 64) = 0;
  v6 = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 4) + 68LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 72LL) = 0;
  SyncedWindowData = CTopLevelWindow::Create(
                       *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                       &v45);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v44 = 190;
LABEL_81:
    v43 = SyncedWindowData;
    goto LABEL_82;
  }
  v9 = *((_QWORD *)v5 + 3);
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 80LL))(*((_QWORD *)v5 + 3)) )
    {
      v41 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 3) + 368LL))(*((_QWORD *)a2 + 3));
      if ( v41 )
      {
        v55 = 0LL;
        SyncedWindowData = CWindowList::GetSyncedWindowData(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                             v41,
                             0,
                             &v55);
        Brush = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          v44 = 198;
          goto LABEL_81;
        }
        v5 = v55;
      }
    }
  }
  *((_QWORD *)a2 + 48) = 0LL;
  v56 = 1543;
  v10 = CSecondaryWindowRepresentation::Create(1543LL, (char *)this + 16, v5, 0LL, 100, &v49);
  Brush = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xD5u);
    goto LABEL_39;
  }
  v6 = v49;
  SyncedWindowData = CSecondaryWindowRepresentation::Validate(v49);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v44 = 215;
    goto LABEL_81;
  }
  SyncedWindowData = CResource::Create(45LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v44 = 218;
    goto LABEL_81;
  }
  v60 = 32;
  v61[0] = 0LL;
  v11 = 0LL;
  v61[1] = 0LL;
  v62 = 0;
  v12 = *((_DWORD *)v6 + 18);
  v13 = (CWindowData *)*((_QWORD *)v6 + 8);
  v54.left = *((_DWORD *)v6 + 22);
  v54.top = *((_DWORD *)v6 + 24);
  v54.right = *((_DWORD *)v6 + 20) - *((_DWORD *)v6 + 23);
  v54.bottom = *((_DWORD *)v6 + 21) - *((_DWORD *)v6 + 25);
  v51 = v54;
  v14 = v12 - 1;
  if ( !v14 )
    goto LABEL_8;
  v40 = v14 - 1;
  if ( v40 )
  {
    if ( v40 == 1 )
    {
      if ( CWindowData::IsImmersiveWindow(v13) )
      {
LABEL_8:
        v11 = (__m128i *)v13;
        goto LABEL_9;
      }
      v11 = *(__m128i **)(*((_QWORD *)v13 + 49) + 80LL);
    }
  }
  else
  {
    v11 = *(__m128i **)(*((_QWORD *)v13 + 48) + 32LL);
  }
LABEL_9:
  v15 = v11[5];
  v16 = _mm_cvtsi128_si32(v15);
  v17 = _mm_srli_si128(v15, 8).m128i_u64[0];
  v51.right -= v16;
  v51.left += v16;
  v18 = v51.bottom - HIDWORD(v17);
  v51.top = v17 + v54.top;
  v51.bottom -= HIDWORD(v17);
  v19 = v51.right - v51.left;
  *(_QWORD *)v46 = 0LL;
  v20 = v51.right - v51.left;
  if ( v51.right - v51.left < 0 )
    v20 = 0;
  v21 = v18 - (v17 + v54.top);
  v53 = v20;
  v22 = v21;
  if ( v21 < 0 )
    v22 = 0;
  v50 = v22;
  for ( i = 0LL; i < 16; i += 4LL )
    *(float *)((char *)v61 + i + 4) = (float)*(int *)((char *)&v51.left + i);
  SyncedWindowData = CResource::Send(*((CResource **)this + 7), &v60, 0x18u);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v44 = 234;
    goto LABEL_81;
  }
  v24 = v53;
  SyncedWindowData = ResourceHelper::CreateRectangleGeometry(0, 0, v53, v50, (struct CResource **)this + 11);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v44 = 239;
    goto LABEL_81;
  }
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, &v51);
  v27 = *((_QWORD *)this + 6) == 0LL;
  v28 = (int)(float)((float)v50 * ScalingFactorForCVI);
  v47 = (int)(float)((float)v24 * ScalingFactorForCVI);
  *((float *)this + 18) = ScalingFactorForCVI;
  v48 = v28;
  if ( v27 )
    CDesktopManager::GetCVIFromCache((int)(float)((float)v24 * ScalingFactorForCVI), v28, (struct CResource **)this + 6);
  Brush = CSecondaryWindowRepresentation::GetBrush(v6, v25, (char *)this + 56, 0LL);
  if ( Brush < 0 )
  {
    v44 = 259;
  }
  else
  {
    if ( *((_BYTE *)v6 + 160) )
    {
      v42 = *((float *)v6 + 126);
      *((float *)this + 18) = v42;
      if ( v19 < 0 )
        v19 = 0;
      if ( v21 < 0 )
        v21 = 0;
      v31 = (int)(float)((float)v19 * v42);
      v47 = v31;
      v30 = (int)(float)((float)v21 * v42);
      v48 = v30;
    }
    else
    {
      v29 = (CResource *)*((_QWORD *)this + 8);
      v57[1] = 0;
      v57[0] = 33;
      v58 = (double)v47;
      v59 = (double)v48;
      SyncedWindowData = CResource::Send(v29, v57, 0x18u);
      Brush = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v44 = 266;
        goto LABEL_81;
      }
      CSecondaryWindowRepresentation::SnapshotIfStatic(
        v6,
        *((struct CResource **)this + 6),
        *((struct CResource **)this + 5),
        (const struct MilPointAndSizeL *)v46);
      v30 = v48;
      v31 = v47;
    }
    SyncedWindowData = ResourceHelper::CreateRectangleGeometry(v46[0], v46[1], v31, v30, (struct CResource **)this + 11);
    Brush = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v44 = 279;
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
                           &v52);
      Brush = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v44 = 286;
        goto LABEL_81;
      }
      v33 = (CVisual **)((char *)this + 80);
      SyncedWindowData = CVisual::Create(
                           *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                           (struct CVisual **)this + 10);
      Brush = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v44 = 288;
        goto LABEL_81;
      }
      CVisual::SetScale(*v33, (float)(1.0 / *((float *)this + 18)), (float)(1.0 / *((float *)this + 18)));
      CVisual::SetInterpolationMode(*v33, 1LL);
      SyncedWindowData = CVisual::AddInstruction(*v33, v52);
      Brush = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v44 = 292;
        goto LABEL_81;
      }
      SyncedWindowData = CVisual::RenderRecursive(*v33);
      Brush = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v44 = 293;
        goto LABEL_81;
      }
      v34 = *(_QWORD *)(*(_QWORD *)v32 + 16LL);
      if ( v34 )
        v35 = *(_DWORD *)(v34 + 24);
      else
        v35 = 0;
      v36 = v45;
      *(_DWORD *)(*((_QWORD *)this + 4) + 128LL) = v35;
      *(_QWORD *)(*((_QWORD *)this + 4) + 368LL) = v36;
      if ( v36 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v36 + 2);
        v6 = v49;
      }
      *((_QWORD *)v45 + 93) = *((_QWORD *)this + 4);
      SyncedWindowData = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v32 + 32LL), *v33, 0LL, 0, 1);
      Brush = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v44 = 299;
        goto LABEL_81;
      }
      CVisual::SetDirtyFlags(v45, 0x400000u);
      SyncedWindowData = CTopLevelWindow::ShowWindow(v45, 1);
      Brush = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v44 = 305;
        goto LABEL_81;
      }
      SyncedWindowData = CVisual::RenderRecursive(v45);
      Brush = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v44 = 306;
        goto LABEL_81;
      }
      v37 = (CBaseObject *)*((_QWORD *)this + 3);
      if ( v37 )
        CBaseObject::Release(v37);
      v38 = v45;
      *((_QWORD *)this + 3) = v45;
      _InterlockedIncrement((volatile signed __int32 *)v38 + 2);
      *((_QWORD *)a2 + 48) = this;
      *(_BYTE *)(*((_QWORD *)this + 4) + 556LL) &= ~0x20u;
LABEL_39:
      v6 = v49;
      goto LABEL_40;
    }
    v44 = 281;
  }
  v43 = Brush;
LABEL_82:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v43, v44);
LABEL_40:
  if ( v45 )
    CBaseObject::Release(v45);
  if ( v52 )
    CBaseObject::Release(v52);
  if ( v6 )
    CBaseObject::Release(v6);
  return (unsigned int)Brush;
}

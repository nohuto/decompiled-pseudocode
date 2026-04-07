/*
 * XREFs of ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800082F4
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x18001A854 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z @ 0x180009B98 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18000B468 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180015D54 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180017B68 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18001E170 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001F154 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x18001F19C (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027138 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x180033EB8 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x180034540 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180034740 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800357F4 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180037870 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800397DC (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowSnapshot::ProcessFreezeSnapshotAndRelease(CWindowSnapshot *this, struct CWindowData *a2)
{
  __int64 v2; // rax
  struct CWindowData *v5; // rdi
  __int64 v6; // rax
  CBaseObject *v7; // r14
  int SyncedWindowData; // eax
  int Brush; // ebx
  __int64 v10; // rcx
  int v11; // eax
  __m128i *v12; // rdx
  LONG v13; // r15d
  int v14; // ecx
  CWindowData *v15; // rbx
  int v16; // ecx
  __m128i v17; // xmm1
  int v18; // eax
  unsigned __int64 v19; // xmm0_8
  int v20; // r8d
  int v21; // r13d
  int v22; // r12d
  int v23; // r15d
  int v24; // r13d
  int v25; // eax
  __int64 i; // rax
  int v27; // edi
  __int64 v28; // rdx
  float ScalingFactorForCVI; // xmm0_4
  bool v30; // zf
  struct CResource **v31; // r15
  __int64 v32; // rax
  int v33; // r9d
  int v34; // r8d
  char *v35; // r12
  CVisual **v36; // r15
  __int64 v37; // rcx
  int v38; // ecx
  CVisual *v39; // rdi
  CVisual *v40; // rdi
  CBaseObject *v41; // rcx
  CVisual *v42; // rdi
  int v44; // ecx
  float v45; // xmm1_4
  int v46; // r9d
  struct IDwmWindow *v47; // rax
  unsigned int v48; // [rsp+20h] [rbp-99h]
  CVisual *v49; // [rsp+40h] [rbp-79h] BYREF
  int v50[2]; // [rsp+48h] [rbp-71h] BYREF
  int v51; // [rsp+50h] [rbp-69h]
  int v52; // [rsp+54h] [rbp-65h]
  CBaseObject *v53; // [rsp+58h] [rbp-61h] BYREF
  struct tagRECT v54; // [rsp+60h] [rbp-59h] BYREF
  int v55; // [rsp+70h] [rbp-49h]
  struct CRenderDataInstruction *v56; // [rsp+78h] [rbp-41h] BYREF
  struct CWindowData *v57; // [rsp+80h] [rbp-39h] BYREF
  struct tagRECT v58; // [rsp+90h] [rbp-29h]
  int v59; // [rsp+A0h] [rbp-19h]
  struct CWindowData *v60; // [rsp+A8h] [rbp-11h]
  double v61[2]; // [rsp+B0h] [rbp-9h] BYREF
  _DWORD v62[4]; // [rsp+C0h] [rbp+7h] BYREF

  v2 = *((_QWORD *)this + 4);
  v60 = a2;
  v49 = 0LL;
  v5 = a2;
  v56 = 0LL;
  *(_DWORD *)(v2 + 64) = 0;
  v6 = *((_QWORD *)this + 4);
  v7 = 0LL;
  v53 = 0LL;
  *(_DWORD *)(v6 + 68) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 4) + 72LL) = 0;
  SyncedWindowData = CTopLevelWindow::Create(
                       *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                       &v49);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v48 = 172;
    goto LABEL_58;
  }
  v10 = *((_QWORD *)v5 + 3);
  if ( v10 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10) )
    {
      v47 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 3) + 352LL))(*((_QWORD *)a2 + 3));
      if ( v47 )
      {
        v57 = 0LL;
        SyncedWindowData = CWindowList::GetSyncedWindowData(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                             v47,
                             0,
                             &v57);
        Brush = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          v48 = 180;
          goto LABEL_58;
        }
        v5 = v57;
      }
    }
  }
  *((_QWORD *)a2 + 51) = 0LL;
  v59 = 1543;
  v11 = CSecondaryWindowRepresentation::Create(1543LL, (char *)this + 16, v5, 0LL, 100, &v53);
  Brush = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC3u);
LABEL_39:
    v7 = v53;
    goto LABEL_40;
  }
  v7 = v53;
  SyncedWindowData = CSecondaryWindowRepresentation::Validate(v53);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v48 = 197;
    goto LABEL_58;
  }
  SyncedWindowData = CResource::Create(25LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v48 = 200;
    goto LABEL_58;
  }
  v12 = 0LL;
  v13 = *((_DWORD *)v7 + 24);
  v14 = *((_DWORD *)v7 + 18);
  v15 = (CWindowData *)*((_QWORD *)v7 + 8);
  v58.left = *((_DWORD *)v7 + 22);
  v58.right = *((_DWORD *)v7 + 20) - *((_DWORD *)v7 + 23);
  v58.bottom = *((_DWORD *)v7 + 21) - *((_DWORD *)v7 + 25);
  v58.top = v13;
  v54 = v58;
  v16 = v14 - 1;
  if ( v16 )
  {
    v44 = v16 - 1;
    if ( !v44 )
    {
      v12 = *(__m128i **)(*((_QWORD *)v15 + 51) + 32LL);
      goto LABEL_9;
    }
    if ( v44 != 1 )
      goto LABEL_9;
    if ( !CWindowData::IsImmersiveWindow(v15) )
    {
      v12 = *(__m128i **)(*((_QWORD *)v15 + 52) + 80LL);
      goto LABEL_9;
    }
  }
  v12 = (__m128i *)v15;
LABEL_9:
  v17 = v12[5];
  v18 = _mm_cvtsi128_si32(v17);
  v19 = _mm_srli_si128(v17, 8).m128i_u64[0];
  v54.right -= v18;
  v54.left += v18;
  v20 = v13 + v19;
  v21 = v54.bottom - HIDWORD(v19);
  v54.top = v13 + v19;
  v54.bottom -= HIDWORD(v19);
  v22 = v54.right - v54.left;
  *(_QWORD *)v50 = 0LL;
  v23 = v54.right - v54.left;
  if ( v54.right - v54.left < 0 )
    v23 = 0;
  v24 = v21 - v20;
  v25 = v24;
  if ( v24 < 0 )
    v25 = 0;
  v55 = v25;
  for ( i = 0LL; i < 4; ++i )
    *(float *)&v62[i] = (float)*(int *)((char *)&v54.left + i * 4);
  SyncedWindowData = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(*((_QWORD *)this + 7) + 16LL)
                                                                         + 288LL))(
                       *(_QWORD *)(*((_QWORD *)this + 7) + 16LL),
                       *(unsigned int *)(*((_QWORD *)this + 7) + 24LL),
                       v62);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v48 = 219;
    goto LABEL_58;
  }
  v27 = v55;
  SyncedWindowData = ResourceHelper::CreateRectangleGeometry(0, 0, v23, v55, (struct CResource **)this + 11);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v48 = 224;
    goto LABEL_58;
  }
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, &v54);
  v30 = *((_QWORD *)this + 6) == 0LL;
  v51 = (int)(float)((float)v23 * ScalingFactorForCVI);
  *((float *)this + 18) = ScalingFactorForCVI;
  v52 = (int)(float)((float)v27 * ScalingFactorForCVI);
  if ( v30 )
    CDesktopManager::GetCVIFromCache(
      (int)(float)((float)v23 * ScalingFactorForCVI),
      (int)(float)((float)v27 * ScalingFactorForCVI),
      (struct CResource **)this + 6);
  v31 = (struct CResource **)((char *)this + 40);
  Brush = CSecondaryWindowRepresentation::GetBrush(v7, v28, (char *)this + 56, 0LL);
  if ( Brush < 0 )
  {
    v48 = 244;
    v46 = Brush;
    goto LABEL_60;
  }
  if ( *((_BYTE *)v7 + 160) )
  {
    v45 = *((float *)v7 + 126);
    *((float *)this + 18) = v45;
    if ( v22 < 0 )
      v22 = 0;
    if ( v24 < 0 )
      v24 = 0;
    v34 = (int)(float)((float)v22 * v45);
    v51 = v34;
    v33 = (int)(float)((float)v24 * v45);
    v52 = v33;
  }
  else
  {
    v32 = *((_QWORD *)this + 8);
    v61[0] = (double)v51;
    v61[1] = (double)v52;
    SyncedWindowData = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(v32 + 16) + 296LL))(
                         *(_QWORD *)(v32 + 16),
                         *(unsigned int *)(v32 + 24),
                         v61);
    Brush = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v48 = 253;
      goto LABEL_58;
    }
    CSecondaryWindowRepresentation::SnapshotIfStatic(
      v7,
      *((struct CResource **)this + 6),
      *v31,
      (const struct MilPointAndSizeL *)v50);
    v33 = v52;
    v34 = v51;
  }
  SyncedWindowData = ResourceHelper::CreateRectangleGeometry(v50[0], v50[1], v34, v33, (struct CResource **)this + 11);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v48 = 267;
    goto LABEL_58;
  }
  v35 = (char *)this + 96;
  SyncedWindowData = CClientArea::Create(
                       *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                       0,
                       (struct CClientArea **)this + 12);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v48 = 269;
    goto LABEL_58;
  }
  SyncedWindowData = CDrawGeometryInstruction::Create(*v31, *((struct CResource **)this + 11), &v56);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v48 = 274;
    goto LABEL_58;
  }
  v36 = (CVisual **)((char *)this + 80);
  SyncedWindowData = CVisual::Create(
                       *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                       (struct CVisual **)this + 10);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v48 = 276;
    goto LABEL_58;
  }
  CVisual::SetScale(*v36, (float)(1.0 / *((float *)this + 18)), (float)(1.0 / *((float *)this + 18)));
  CVisual::SetInterpolationMode(*v36, 1LL);
  SyncedWindowData = CVisual::AddInstruction(*v36, v56);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v48 = 280;
    goto LABEL_58;
  }
  SyncedWindowData = CVisual::RenderRecursive(*v36);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v48 = 281;
    goto LABEL_58;
  }
  v37 = *(_QWORD *)(*(_QWORD *)v35 + 16LL);
  if ( v37 )
    v38 = *(_DWORD *)(v37 + 24);
  else
    v38 = 0;
  v39 = v49;
  *(_DWORD *)(*((_QWORD *)this + 4) + 128LL) = v38;
  *(_QWORD *)(*((_QWORD *)this + 4) + 384LL) = v39;
  if ( v39 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v39 + 2);
    v7 = v53;
  }
  *((_QWORD *)v49 + 93) = *((_QWORD *)this + 4);
  SyncedWindowData = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v35 + 32LL), *v36, 0LL, 0, 1);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v48 = 287;
    goto LABEL_58;
  }
  v40 = v49;
  CVisual::SetDirtyFlags(v49, 0x400000u);
  CVisual::SetDirtyFlags(v40, 0x2000u);
  SyncedWindowData = CTopLevelWindow::ShowWindow(v40, 1);
  Brush = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v48 = 292;
    goto LABEL_58;
  }
  SyncedWindowData = CVisual::RenderRecursive(v40);
  Brush = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    v41 = (CBaseObject *)*((_QWORD *)this + 3);
    if ( v41 )
      CBaseObject::Release(v41);
    v42 = v49;
    *((_QWORD *)this + 3) = v49;
    _InterlockedIncrement((volatile signed __int32 *)v42 + 2);
    *((_QWORD *)v60 + 51) = this;
    *(_BYTE *)(*((_QWORD *)this + 4) + 580LL) &= ~8u;
    goto LABEL_39;
  }
  v48 = 293;
LABEL_58:
  v46 = SyncedWindowData;
LABEL_60:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, v48);
LABEL_40:
  if ( v49 )
    CBaseObject::Release(v49);
  if ( v56 )
    CBaseObject::Release(v56);
  if ( v7 )
    CBaseObject::Release(v7);
  return (unsigned int)Brush;
}

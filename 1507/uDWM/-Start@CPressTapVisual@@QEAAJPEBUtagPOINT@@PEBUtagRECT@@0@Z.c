/*
 * XREFs of ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x180088764
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EDE8 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180012700 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800159C0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001C850 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18001C938 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18001C978 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001D130 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x1800476DC (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     sqrtf_0 @ 0x1800498DE (sqrtf_0.c)
 *     TemplateEventDescriptor @ 0x18006B828 (TemplateEventDescriptor.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x180088AD0 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180088E8C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPressTapVisual::Start(
        CPressTapVisual *this,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        const struct tagPOINT *a4)
{
  struct tagPOINT v8; // r8
  int v9; // edx
  int BoundedContactWidth; // eax
  struct tagPOINT v11; // r8
  int v12; // edx
  CContactManager *v13; // rcx
  int v14; // eax
  float v15; // xmm2_4
  struct tagSIZE *v16; // rcx
  float v17; // xmm0_4
  LONG v18; // edi
  LONG v19; // ebp
  float v20; // xmm2_4
  struct tagSIZE *v21; // rcx
  LONG v22; // ebx
  LONG v23; // esi
  int v24; // esi
  int v25; // ebx
  int v26; // ebp
  int v27; // edi
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  __int64 v31; // rcx
  char v32; // al
  __int64 v33; // rax
  _QWORD *v34; // rax
  int v35; // ebx
  int v36; // eax
  struct tagSIZE v38; // [rsp+50h] [rbp+8h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor((__int64)this, (__int64)&UdwmPressTapVisual_Start);
  v8 = *a2;
  *((struct tagPOINT *)this + 36) = *a2;
  *((struct tagPOINT *)this + 37) = *a4;
  v9 = a3->right - a3->left;
  *((_DWORD *)this + 78) = v9;
  *((_DWORD *)this + 79) = a3->bottom - a3->top;
  BoundedContactWidth = CContactManager::GetBoundedContactWidth(this, v9, v8);
  v11 = (struct tagPOINT)*((_QWORD *)this + 36);
  v12 = *((_DWORD *)this + 79);
  *((_DWORD *)this + 78) = BoundedContactWidth;
  v14 = CContactManager::GetBoundedContactWidth(v13, v12, v11);
  v15 = *((float *)this + 89);
  v16 = (struct tagSIZE *)*((_QWORD *)this + 41);
  v17 = (float)*((int *)this + 78);
  *((_DWORD *)this + 79) = v14;
  v18 = (int)(float)(v17 * v15);
  v19 = (int)(float)((float)v14 * v15);
  if ( v18 < 1 )
    v18 = 1;
  v38.cx = v18;
  if ( v19 < 1 )
    v19 = 1;
  v38.cy = v19;
  CVisual::SetSize(v16, &v38);
  v20 = *((float *)this + 91);
  v21 = (struct tagSIZE *)*((_QWORD *)this + 42);
  v22 = (int)(float)((float)*((int *)this + 80) * v20);
  v23 = (int)(float)((float)*((int *)this + 81) * v20);
  if ( v22 < 1 )
    v22 = 1;
  v38.cx = v22;
  if ( v23 < 1 )
    v23 = 1;
  v38.cy = v23;
  CVisual::SetSize(v21, &v38);
  CImage::SetBitmapSource(*((CImage **)this + 41), *((struct CBitmapSource **)this + 35));
  CImage::SetBitmapSource(*((CImage **)this + 42), *((struct CBitmapSource **)this + 35));
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 41), *((_DWORD *)this + 72) - v18 / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 41), *((_DWORD *)this + 73) - v19 / 2);
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 42), *((_DWORD *)this + 74) - v22 / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 42), *((_DWORD *)this + 75) - v23 / 2);
  v24 = *((_DWORD *)this + 74);
  v25 = *((_DWORD *)this + 72) - v24;
  v26 = *((_DWORD *)this + 75);
  v27 = *((_DWORD *)this + 73) - v26;
  v28 = sqrtf_0((float)(v25 * v25 + v27 * v27));
  *((_QWORD *)this + 38) = *((_QWORD *)this + 36);
  v29 = (float)*((int *)this + 95);
  if ( v28 > v29 )
  {
    v30 = v29 / v28;
    *((_DWORD *)this + 76) = v24 + (int)(float)((float)v25 * v30);
    *((_DWORD *)this + 77) = v26 + (int)(float)((float)v27 * v30);
  }
  v31 = *((_QWORD *)this + 48);
  if ( v31 )
  {
    --*(_DWORD *)(v31 + 8);
    v32 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v31 + 8) )
      v32 = 1;
    *((_QWORD *)this + 48) = 0LL;
    CDesktopManager::s_fTimelineDirty = v32;
  }
  v33 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          80LL);
  if ( v33 )
    v34 = CTimeline<float>::CTimeline<float>(v33, *((float *)this + 86), 0.0, 1.0, 0);
  else
    v34 = 0LL;
  *((_QWORD *)this + 48) = v34;
  if ( !v34 )
  {
    v35 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xC4u);
LABEL_26:
    CPressTapVisual::Stop(this);
    return (unsigned int)v35;
  }
  v36 = CTouchVisual::RegisterGlobalTimer(this);
  v35 = v36;
  if ( v36 >= 0 )
    CVisual::SetOpacity(this, 1.0);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v36, 0xC5u);
  if ( v35 < 0 )
    goto LABEL_26;
  return (unsigned int)v35;
}

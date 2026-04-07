/*
 * XREFs of ?Capture@CScreenRotation@@QEAAJXZ @ 0x18008DEC8
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x180078C10 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x1800798C8 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 * Callees:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000414C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001CA80 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001CB70 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001D0C8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180029864 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180029B3C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180038AF0 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180038BC4 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180038C34 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003B528 (-Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     TemplateEventDescriptor @ 0x18006B828 (TemplateEventDescriptor.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x180076B34 (-SetRotation@CVisual@@QEAAXN@Z.c)
 *     ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180089530 (-Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x18008EEC8 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x18008F1E4 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 */

__int64 __fastcall CScreenRotation::Capture(CScreenRotation *this)
{
  struct CVisual *v1; // r14
  unsigned int v3; // ebx
  void *v4; // rdx
  CWindowList *v5; // r13
  bool v6; // dl
  CAnimatedTransitionVisual **v7; // r12
  LONG v8; // edi
  LONG v9; // esi
  struct CVisual *RootVisualForDesktop; // rdi
  int inserted; // eax
  CAnimatedTransitionVisual *v12; // rcx
  CAnimatedTransitionVisual *v13; // rsi
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CAnimatedTransitionVisual *v15; // rcx
  CAnimatedTransitionVisual *v16; // rcx
  CAnimatedTransitionVisual *v17; // rcx
  unsigned int v19; // [rsp+28h] [rbp-39h]
  struct tagSIZE v20; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-21h] BYREF
  struct tagSIZE v22; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v23[20]; // [rsp+50h] [rbp-11h] BYREF
  int v24; // [rsp+64h] [rbp+3h]
  int v25; // [rsp+68h] [rbp+7h]
  int v26; // [rsp+74h] [rbp+13h]
  int v27; // [rsp+78h] [rbp+17h]
  struct tagRECT v28; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = 0LL;
  v3 = 0;
  if ( *((_BYTE *)this + 364) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v4 = &UdwmHardwareExpression_Capture_Info;
LABEL_6:
      TemplateEventDescriptor((__int64)this, (__int64)v4);
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v4 = &UdwmScreenRotation_Capture_Info;
    goto LABEL_6;
  }
  GetDesktopID(1LL, &v21);
  v28.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 322);
  v28.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 324) + v28.left;
  v28.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 323);
  v28.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 325) + v28.top;
  v5 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167);
  if ( !*((_BYTE *)this + 312) || (v6 = 1, *((_DWORD *)this + 86) != -1) )
    v6 = 0;
  CScreenRotation::Stop(this, v6);
  v7 = (CAnimatedTransitionVisual **)((char *)this + 296);
  v8 = v28.right - v28.left;
  if ( v28.right - v28.left < 0 )
    v8 = 0;
  v9 = v28.bottom - v28.top;
  v20.cx = v8;
  if ( v28.bottom - v28.top < 0 )
    v9 = 0;
  v20.cy = v9;
  if ( *v7 )
  {
    if ( *((_BYTE *)this + 315) )
    {
      CVisual::SetRotation(this, (double)*((int *)this + 80));
      CVisual::SetOffset((struct tagPOINT *)this, (const struct tagPOINT *)((char *)this + 332));
      v15 = *v7;
      v24 = 0;
      v25 = 0;
      CAnimatedTransitionVisual::Translate2D(v15, (const struct TA_TRANSFORM_2D *)v23);
      v16 = *v7;
      v24 = 1065353216;
      v25 = 1065353216;
      v26 = 1056964608;
      v27 = 1056964608;
      CAnimatedTransitionVisual::Scale2D(v16, (const struct TA_TRANSFORM_2D *)v23);
      CAnimatedTransitionVisual::SetBeginAlpha(*v7, 0.0);
      *((_DWORD *)*v7 + 231) = 0;
    }
    if ( abs32(*((_DWORD *)this + 79)) == 90 )
    {
      v20.cy = v8;
      v20.cx = v9;
    }
    else
    {
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v7, &v28);
      v17 = *v7;
      *(struct tagRECT *)((char *)v17 + 856) = v28;
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v17 + 8), 4096);
    }
  }
  else
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v5, v21);
    inserted = CAnimatedTransitionVisual::Create(
                 *(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL),
                 (CBaseObject ***)this + 37);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v19 = 146;
LABEL_25:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, v19);
      return v3;
    }
    if ( !*v7 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x93u);
      return v3;
    }
    inserted = CAnimatedTransitionVisual::SetVisual((struct CResource **)*v7, RootVisualForDesktop, 1, &v28);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v19 = 148;
      goto LABEL_25;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v7, &v28);
    v12 = *v7;
    *(struct tagRECT *)((char *)v12 + 856) = v28;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v12 + 8), 4096);
    v13 = *v7;
    v22 = v20;
    (*(void (__fastcall **)(__int64, struct tagSIZE *))(*((_QWORD *)v13 + 1) + 80LL))((__int64)v13 + 8, &v22);
    *((struct tagSIZE *)*v7 + 117) = v20;
    CVisual::SetInterpolationMode((CAnimatedTransitionVisual *)((char *)*v7 + 8), 1);
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v5, v21);
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                 this,
                 0LL,
                 0,
                 1);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v19 = 162;
      goto LABEL_25;
    }
    inserted = CVisual::MoveToFront(this, 1);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v19 = 163;
      goto LABEL_25;
    }
  }
  if ( *v7 )
    v1 = (CAnimatedTransitionVisual *)((char *)*v7 + 8);
  VisualCollection::InsertRelative((CScreenRotation *)((char *)this + 32), v1, 0LL, 0, 1);
  CScreenRotation::UpdateBackgroundInstructionsAndSize(this, &v20, 1);
  return v3;
}

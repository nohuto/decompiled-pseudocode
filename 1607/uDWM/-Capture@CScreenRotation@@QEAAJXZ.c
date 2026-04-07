/*
 * XREFs of ?Capture@CScreenRotation@@QEAAJXZ @ 0x18008FE28
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x1800811D8 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x180081CE8 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 * Callees:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800059BC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180005DB0 (-Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000B1C4 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180014980 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180014A64 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180014AD4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001F154 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001F250 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001F7A4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002BDD0 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180030424 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x18007F3FC (-SetRotation@CVisual@@QEAAXN@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180090DA4 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800910BC (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 */

__int64 __fastcall CScreenRotation::Capture(CScreenRotation *this)
{
  struct CVisual *v1; // rdi
  unsigned int v3; // ebx
  void *v4; // rdx
  CWindowList *v5; // r13
  bool v6; // dl
  CAnimatedTransitionVisual **v7; // r14
  LONG v8; // r15d
  LONG v9; // r12d
  struct CVisual *RootVisualForDesktop; // r15
  int inserted; // eax
  CAnimatedTransitionVisual *v12; // rcx
  __int64 v13; // rcx
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
  v28.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 318);
  v28.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 320) + v28.left;
  v28.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 319);
  v28.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 321) + v28.top;
  v5 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 165);
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
                 *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                 (struct CAnimatedTransitionVisual **)this + 37);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v19 = 146;
LABEL_17:
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
      goto LABEL_17;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v7, &v28);
    v12 = *v7;
    *(struct tagRECT *)((char *)v12 + 856) = v28;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v12 + 8), 4096);
    v13 = (__int64)*v7 + 8;
    v22 = v20;
    (*(void (__fastcall **)(__int64, struct tagSIZE *))(*(_QWORD *)v13 + 80LL))(v13, &v22);
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
      goto LABEL_17;
    }
    inserted = CVisual::MoveToFront(this, 1);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v19 = 163;
      goto LABEL_17;
    }
  }
  if ( *v7 )
    v1 = (CAnimatedTransitionVisual *)((char *)*v7 + 8);
  VisualCollection::InsertRelative((CScreenRotation *)((char *)this + 32), v1, 0LL, 0, 1);
  CScreenRotation::UpdateBackgroundInstructionsAndSize(this, &v20, 1);
  return v3;
}

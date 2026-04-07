/*
 * XREFs of ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800918CC
 * Callers:
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180091ABC (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18000C06C (-Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000D970 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000DCC0 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021ED8 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002CCCC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180092438 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CScreenRotation::CreateLiveDesktopVisual(CScreenRotation *this)
{
  struct CResource ***v2; // r15
  struct CVisual *RootVisualForDesktop; // rbx
  __int64 v4; // rax
  LONG v5; // r9d
  LONG v6; // edx
  int v7; // r10d
  struct MIL_CHANNEL__ *v8; // rcx
  int v9; // edx
  int v10; // eax
  int v11; // r14d
  __int64 v12; // rax
  struct CVisual *v13; // r8
  struct CVisual *v14; // rdx
  int v15; // eax
  struct CResource *v16; // rbx
  struct CResource **v17; // rcx
  struct CResource *v19; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v21; // [rsp+40h] [rbp-20h] BYREF

  GetDesktopID(1LL, &v20);
  v2 = (struct CResource ***)((char *)this + 304);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                           v20);
  v4 = *((_QWORD *)this + 2);
  v21.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 322);
  v21.right = v21.left + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 324);
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 323);
  v21.top = v5;
  v6 = v5 + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 325);
  v21.bottom = v6;
  v7 = v21.right - v21.left;
  v8 = *(struct MIL_CHANNEL__ **)(v4 + 16);
  if ( v21.right - v21.left < 0 )
    v7 = 0;
  v9 = v6 - v5;
  LODWORD(v19) = v7;
  if ( v9 < 0 )
    v9 = 0;
  HIDWORD(v19) = v9;
  v10 = CAnimatedTransitionVisual::Create(v8, (struct CAnimatedTransitionVisual **)this + 38);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = *((_QWORD *)this + 37);
    v13 = (struct CVisual *)(v12 + 8);
    if ( !v12 )
      v13 = 0LL;
    v14 = (struct CVisual *)(*v2 + 1);
    if ( !*v2 )
      v14 = 0LL;
    VisualCollection::InsertRelative((CScreenRotation *)((char *)this + 32), v14, v13, 1, 1);
    v15 = CAnimatedTransitionVisual::SetVisual(*v2, RootVisualForDesktop, 0, &v21);
    v11 = v15;
    if ( v15 >= 0 )
    {
      v16 = v19;
      (*((void (__fastcall **)(struct CResource **, struct CResource **))(*v2)[1] + 10))(*v2 + 1, &v19);
      (*v2)[117] = v16;
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v2, &v21);
      v17 = *v2;
      *(struct tagRECT *)(v17 + 107) = v21;
      CVisual::SetDirtyFlags((CVisual *)(v17 + 1), 4096);
      CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)*v2, 0.0);
      CVisual::SetInterpolationMode((CVisual *)(*v2 + 1), 1);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x2F2u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x2F0u);
  }
  if ( v11 < 0 )
    CScreenRotation::Stop(this, 0);
  return (unsigned int)v11;
}

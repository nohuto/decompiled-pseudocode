/*
 * XREFs of ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x180090278
 * Callers:
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x18009045C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800059BC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000B1C4 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180014A64 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180014AD4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001F154 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180030424 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180090DA4 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CScreenRotation::CreateLiveDesktopVisual(CScreenRotation *this)
{
  struct CResource ***v2; // rsi
  struct CVisual *RootVisualForDesktop; // rbx
  __int64 v4; // rax
  LONG v5; // r9d
  LONG v6; // edx
  int v7; // r10d
  struct IDwmChannel *v8; // rcx
  int v9; // edx
  int v10; // eax
  int v11; // edi
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
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                           v20);
  v4 = *((_QWORD *)this + 2);
  v21.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 318);
  v21.right = v21.left + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 320);
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 319);
  v21.top = v5;
  v6 = v5 + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 321);
  v21.bottom = v6;
  v7 = v21.right - v21.left;
  v8 = *(struct IDwmChannel **)(v4 + 16);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x2C7u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x2C5u);
  }
  if ( v11 < 0 )
    CScreenRotation::Stop(this, 0);
  return (unsigned int)v11;
}

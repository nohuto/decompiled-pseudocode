/*
 * XREFs of ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180045E84
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x180047864 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180019A98 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18001E778 (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002BD20 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002BDD0 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?SetRenderTargetForDesktops@CWindowList@@QEAAXPEAVCResource@@@Z @ 0x1800474E4 (-SetRenderTargetForDesktops@CWindowList@@QEAAXPEAVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::CreateDesktopRenderTarget(CDesktopManager *this)
{
  _QWORD *v2; // r14
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  struct CResource **v8; // rsi
  int v9; // eax
  CWindowList *v10; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  int RenderTargets; // eax
  CBaseObject *v17; // rcx
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF
  HANDLE hObject; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  hObject = 0LL;
  v18 = 0;
  v2 = (_QWORD *)((char *)this + 72);
  v3 = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 21)
                                                         + 216LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21),
         &GUID_6c4d5135_93f5_4576_adf1_5060105c55bd,
         (char *)this + 72);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x3FDu);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 32LL))(*v2, 66584LL);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x3FFu);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 21) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21));
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 21)
                                                               + 224LL))(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21),
             *v2,
             &hObject);
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x404u);
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64, unsigned int *))(**((_QWORD **)this + 4) + 112LL))(
               *((_QWORD *)this + 4),
               hObject,
               8LL,
               &v18);
        v4 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x408u);
        }
        else
        {
          v8 = (struct CResource **)((char *)this + 64);
          v9 = CResource::WrapExistingResource(*((struct IDwmChannel **)this + 4), v18, (struct CResource **)this + 8);
          v4 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x40Au);
          }
          else
          {
            GetDesktopID(1LL, &v20);
            v10 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 165);
            RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v10, v20);
            CWindowList::BringDesktopToFront(v10, RenderTargetRootVisualForDesktop);
            v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 165) + 80LL) + 16LL);
            if ( v12 )
              v13 = *(unsigned int *)(v12 + 24);
            else
              v13 = 0LL;
            v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)*v8 + 2) + 688LL))(
                    *((_QWORD *)*v8 + 2),
                    *((unsigned int *)*v8 + 6),
                    v13);
            v4 = v14;
            if ( v14 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x412u);
            }
            else
            {
              CWindowList::SetRenderTargetForDesktops(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                *v8);
              RenderTargets = CDesktopManager::CreateRenderTargets(this);
              v4 = RenderTargets;
              if ( RenderTargets < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargets, 0x416u);
            }
          }
        }
      }
    }
  }
  if ( hObject )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  if ( v18 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 120LL))(*((_QWORD *)this + 4));
  if ( v4 < 0 )
  {
    if ( *v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
    v17 = (CBaseObject *)*((_QWORD *)this + 8);
    if ( v17 )
      CBaseObject::Release(v17);
  }
  return (unsigned int)v4;
}

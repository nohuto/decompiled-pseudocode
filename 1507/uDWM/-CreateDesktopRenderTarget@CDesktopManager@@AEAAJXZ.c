/*
 * XREFs of ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18003FA30
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18004654C (-StartupEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DuplicateSharedResourceOnChannel@@YAJPEAUMIL_CHANNEL__@@W4MIL_RESOURCE_TYPE@@PEAXPEAI@Z @ 0x180009700 (-DuplicateSharedResourceOnChannel@@YAJPEAUMIL_CHANNEL__@@W4MIL_RESOURCE_TYPE@@PEAXPEAI@Z.c)
 *     ?WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x1800159F4 (-WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18001C3FC (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x1800297B4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180029864 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?SetRenderTargetForDesktops@CWindowList@@QEAAXPEAVCResource@@@Z @ 0x1800462D8 (-SetRenderTargetForDesktops@CWindowList@@QEAAXPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDesktopManager::CreateDesktopRenderTarget(struct MIL_CHANNEL__ **this)
{
  _QWORD *v1; // r15
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  CResource **v8; // r14
  int v9; // eax
  __int64 v10; // rax
  CWindowList *v11; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int v13; // eax
  int RenderTargets; // eax
  CBaseObject *v16; // rcx
  unsigned int v17; // [rsp+30h] [rbp-30h] BYREF
  HANDLE hObject; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  int v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+4Ch] [rbp-14h]

  hObject = 0LL;
  v1 = this + 9;
  v17 = 0;
  v21 = 0LL;
  v20 = 100;
  v3 = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 23)
                                                         + 216LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23),
         &GUID_128441f4_a1ea_4236_9ad2_001d6d3667ed,
         (char *)this + 72);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x36Cu);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v1 + 32LL))(*v1, 66584LL);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x36Eu);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 23) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23));
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 23)
                                                               + 224LL))(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23),
             *v1,
             &hObject);
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x373u);
      }
      else
      {
        v7 = DuplicateSharedResourceOnChannel(this[4], 0x25u, (__int64)hObject, &v17);
        v4 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x378u);
        }
        else
        {
          v8 = this + 8;
          v9 = CResource::WrapExistingResource(this[4], v17, this + 8);
          v4 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x37Au);
          }
          else
          {
            GetDesktopID(1LL, &v19);
            v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167) + 80LL) + 16LL);
            if ( v10 )
              LODWORD(v10) = *(_DWORD *)(v10 + 24);
            HIDWORD(v21) = v10;
            v11 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167);
            RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v11, v19);
            CWindowList::BringDesktopToFront(v11, RenderTargetRootVisualForDesktop);
            v13 = CResource::Send(*v8, &v20, 0xCu);
            v4 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x381u);
            }
            else
            {
              CWindowList::SetRenderTargetForDesktops(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                *v8);
              RenderTargets = CDesktopManager::CreateRenderTargets((CDesktopManager *)this);
              v4 = RenderTargets;
              if ( RenderTargets < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, RenderTargets, 0x385u);
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
  if ( v17 )
    MilResource_ReleaseOnChannel(this[4], v17, 0LL);
  if ( v4 < 0 )
  {
    if ( *v1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 16LL))(*v1);
    v16 = this[8];
    if ( v16 )
      CBaseObject::Release(v16);
  }
  return (unsigned int)v4;
}

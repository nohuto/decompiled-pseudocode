/*
 * XREFs of ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x180031AF8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002F3B0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x18001A6E0 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180038EAC (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x18007EF48 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 */

__int64 __fastcall CWindowList::TextChange(CWindowList *this, const struct MILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int v6; // edi
  struct CWindowData *v7; // rsi
  struct IDwmWindow *v8; // rax
  int SyncedWindowData; // eax
  int WindowText; // eax
  int v11; // eax
  CVisual *v12; // rcx
  CWindowIconic *v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v17; // r8
  unsigned int v18; // [rsp+20h] [rbp-248h]
  struct CWindowData *v19; // [rsp+30h] [rbp-238h] BYREF
  WCHAR pString[256]; // [rsp+40h] [rbp-228h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_QWORD *)((char *)a2 + 4);
  v5 = 0;
  v19 = 0LL;
  v6 = 0;
  v7 = 0LL;
  if ( v4 )
  {
    v8 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 6)
                                                                + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                        + 6));
    if ( v8 )
    {
      SyncedWindowData = CWindowList::GetSyncedWindowData(this, v8, 0, &v19);
      v6 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowData, 0x54Du);
      v7 = v19;
    }
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x8F9u);
  }
  else if ( v7 )
  {
    WindowText = InternalGetWindowText(*((HWND *)v7 + 5), pString, 256);
    v11 = CWindowData::SetTitle((CWindowData **)v7, (char *)pString, WindowText);
    v6 = v11;
    if ( v11 < 0 )
    {
      v18 = 2303;
LABEL_16:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v18);
      goto LABEL_13;
    }
    v12 = (CVisual *)*((_QWORD *)v7 + 48);
    if ( v12 )
      CVisual::SetDirtyFlags(v12, 0x10000);
    v13 = (CWindowIconic *)*((_QWORD *)v7 + 52);
    if ( v13 )
    {
      v11 = CWindowIconic::OnTitleUpdated(v13, 1);
      v6 = v11;
      if ( v11 < 0 )
      {
        v18 = 2312;
        goto LABEL_16;
      }
    }
    v14 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 168);
    v15 = *(_DWORD *)(v14 + 344);
    if ( v15 )
    {
      v17 = *(_QWORD *)(v14 + 320);
      while ( *(struct CWindowData **)(v17 + 48LL * v5 + 8) != v7 )
      {
        if ( ++v5 >= v15 )
          goto LABEL_13;
      }
      CTopLevelWindow::UpdateTitle(*(CTopLevelWindow **)(v17 + 48LL * v5), *((unsigned __int16 **)v7 + 2));
    }
  }
LABEL_13:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v6;
}

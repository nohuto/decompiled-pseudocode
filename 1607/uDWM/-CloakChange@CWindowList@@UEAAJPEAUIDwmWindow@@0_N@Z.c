/*
 * XREFs of ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18002F140
 * Callers:
 *     <none>
 * Callees:
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x180010C2C (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C38 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x1800336E4 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180033768 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CloakChange(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3, bool a4)
{
  int SyncedWindowData; // eax
  int v9; // edi
  struct CWindowData *v10; // rsi
  CAnimationScheduler *v11; // rbx
  unsigned __int8 v12; // al
  char v13; // al
  char v14; // al
  struct CWindowData *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // [rsp+20h] [rbp-48h]
  bool v26; // [rsp+40h] [rbp-28h] BYREF
  struct CWindowData *v27; // [rsp+48h] [rbp-20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v27 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v27);
  v9 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v25 = 4436;
    goto LABEL_18;
  }
  v10 = v27;
  if ( !v27 )
    goto LABEL_8;
  v26 = 0;
  v11 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 264LL))(a2);
  CAnimationScheduler::OnWindowCloakChange(v11, (CTopLevelWindow **)v10, v12, a4, &v26);
  if ( !v26 )
  {
    v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 264LL))(a2);
    *((_BYTE *)v10 + 580) &= ~1u;
    *((_BYTE *)v10 + 580) |= v13 & 1;
    if ( !a4 )
    {
      SyncedWindowData = CWindowList::ShowHide(this, v10, 1);
      v9 = SyncedWindowData;
      if ( SyncedWindowData >= 0 )
        goto LABEL_6;
      v25 = 4450;
      goto LABEL_18;
    }
    v27 = 0LL;
    SyncedWindowData = CWindowList::GetSyncedWindowData(this, a3, 1, &v27);
    v9 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v25 = 4457;
      goto LABEL_18;
    }
    v16 = v27;
    if ( v27 )
    {
      SyncedWindowData = CLivePreview::OnWindowShowHide(
                           *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 168),
                           v27,
                           0LL,
                           1);
      v9 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v25 = 4462;
        goto LABEL_18;
      }
      SyncedWindowData = CLivePreview::OnWindowShowHide(
                           *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 168),
                           v16,
                           0LL,
                           0);
      v9 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v25 = 4463;
        goto LABEL_18;
      }
      v9 = 0;
      v18 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 168);
      LOBYTE(v17) = *(_BYTE *)(v18 + 264);
      if ( (_BYTE)v17 )
      {
        v20 = *(_QWORD *)(v18 + 520);
        v21 = 0LL;
        v22 = 0LL;
        if ( v20 )
          v21 = *(_QWORD *)(v20 + 40);
        v23 = *(_QWORD *)(v18 + 528);
        if ( v23 )
          v22 = *(_QWORD *)(v23 + 40);
        v24 = CLivePreview::Activate(v18, v17, v21, v22, *(_DWORD *)(v18 + 544), *(_DWORD *)(v18 + 280), 0, 0LL);
        v9 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x3F6u);
      }
      if ( v9 < 0 )
      {
        v25 = 4464;
        v19 = v9;
        goto LABEL_20;
      }
      SyncedWindowData = CWindowList::ShowHide(this, v16, 1);
      v9 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v25 = 4465;
LABEL_18:
        v19 = SyncedWindowData;
LABEL_20:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, v25);
        goto LABEL_8;
      }
    }
  }
LABEL_6:
  v14 = *((_BYTE *)v10 + 580);
  if ( (v14 & 9) == 0 )
    *((_BYTE *)v10 + 580) = v14 & 0xEF;
LABEL_8:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v9;
}

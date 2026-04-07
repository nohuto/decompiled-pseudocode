/*
 * XREFs of ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002B220
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180025244 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180029520 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::AccentPolicyChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // esi
  struct CWindowData *v6; // rdi
  _DWORD *v7; // rax
  CTopLevelWindow *v8; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp-38h] BYREF
  struct CWindowData *v11[2]; // [rsp+38h] [rbp-30h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11[0] = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, v11);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x128Du);
  }
  else
  {
    v6 = v11[0];
    if ( v11[0] )
    {
      v7 = (_DWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, struct CWindowData **))(*(_QWORD *)a2 + 208LL))(
                       a2,
                       v11);
      if ( *((_DWORD *)v6 + 38) != *v7 || *((_DWORD *)v6 + 39) != v7[1] || *((_DWORD *)v6 + 40) != v7[2] )
      {
        *(_OWORD *)((char *)v6 + 152) = *(_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, struct CWindowData **))(*(_QWORD *)a2 + 208LL))(
                                                     a2,
                                                     v11);
        v8 = (CTopLevelWindow *)*((_QWORD *)v6 + 46);
        if ( v8 )
          CTopLevelWindow::OnAccentPolicyUpdated(v8);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v5;
}

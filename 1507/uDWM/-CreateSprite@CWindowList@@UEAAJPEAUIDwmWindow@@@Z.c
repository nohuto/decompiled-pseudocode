/*
 * XREFs of ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F410
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x180008598 (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x1800185F4 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180029520 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180029B8C (-GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002B790 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002EABC (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002EED0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::CreateSprite(CWindowList *this, struct IDwmWindow *a2)
{
  char v4; // r12
  int SyncedWindowData; // eax
  unsigned int v6; // ebx
  CWindowData *v7; // rsi
  CWindowData *v8; // rcx
  CWindowData **v9; // rax
  struct _LIST_ENTRY *WindowListForDesktopCanFail; // rax
  struct _LIST_ENTRY **p_Flink; // rcx
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-38h]
  CWindowData *v15; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+78h] [rbp+20h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15 = 0LL;
  v4 = 1;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v15);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 1394;
LABEL_19:
    v13 = SyncedWindowData;
LABEL_22:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, v14);
    goto LABEL_16;
  }
  v7 = v15;
  if ( !v15 )
  {
    if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
      goto LABEL_20;
    SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v15);
    v6 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v14 = 1398;
      goto LABEL_19;
    }
    v7 = v15;
    v4 = 0;
    if ( !v15 )
    {
LABEL_20:
      v6 = -2147024890;
      v14 = 1402;
LABEL_21:
      v13 = v6;
      goto LABEL_22;
    }
  }
  if ( (*((_BYTE *)v7 + 552) & 4) != 0 )
    CWindowList::ImmediateDestroySprite(this, v7);
  if ( !*((_DWORD *)v7 + 32) )
  {
    SyncedWindowData = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD, __int64))(*(_QWORD *)a2 + 288LL))(
                         a2,
                         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                         (__int64)v7 + 128);
    v6 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v14 = 1416;
      goto LABEL_19;
    }
  }
  SyncedWindowData = CWindowList::SyncWindowData(this, a2, v7);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 1420;
    goto LABEL_19;
  }
  v8 = *(CWindowData **)v7;
  v9 = (CWindowData **)*((_QWORD *)v7 + 1);
  if ( *(CWindowData **)(*(_QWORD *)v7 + 8LL) != v7 || *v9 != v7 )
    __fastfail(3u);
  *v9 = v8;
  *((_QWORD *)v8 + 1) = v9;
  WindowListForDesktopCanFail = CWindowList::GetWindowListForDesktopCanFail(this, *((_QWORD *)v7 + 15));
  if ( !WindowListForDesktopCanFail )
  {
    v6 = -2147024882;
    v14 = 1432;
    goto LABEL_21;
  }
  p_Flink = &WindowListForDesktopCanFail->Blink->Flink;
  *(_QWORD *)v7 = WindowListForDesktopCanFail;
  *((_QWORD *)v7 + 1) = p_Flink;
  if ( *p_Flink != WindowListForDesktopCanFail )
    __fastfail(3u);
  *p_Flink = (struct _LIST_ENTRY *)v7;
  WindowListForDesktopCanFail->Blink = (struct _LIST_ENTRY *)v7;
  CWindowData::ClearSnapshot(v7, 1, 0LL, 1);
  SyncedWindowData = CWindowList::ClipChange(this, a2);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 1441;
    goto LABEL_19;
  }
  if ( (*((_BYTE *)v7 + 552) & 1) != 0 )
  {
    SyncedWindowData = CWindowList::ShowHide(this, v7, 1);
    v6 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v14 = 1445;
      goto LABEL_19;
    }
  }
  if ( WinSqmIsOptedIn_CachedInDwm() && v4 )
    *((_BYTE *)v7 + 555) |= 2u;
LABEL_16:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v6;
}

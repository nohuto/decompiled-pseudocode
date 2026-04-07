/*
 * XREFs of ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A9F8 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E2B0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180030474 (-GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C38 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180032490 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032660 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x1800411C4 (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CreateSprite(CWindowList *this, struct IDwmWindow *a2)
{
  char v4; // bp
  int SyncedWindowData; // eax
  unsigned int v6; // ebx
  CWindowData *v7; // rdi
  CWindowData *v8; // rcx
  CWindowData **v9; // rax
  struct _LIST_ENTRY *WindowListForDesktopCanFail; // rax
  struct _LIST_ENTRY **p_Flink; // rcx
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-28h]
  CWindowData *v15; // [rsp+60h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15 = 0LL;
  v4 = 1;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v15);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 1253;
LABEL_19:
    v13 = SyncedWindowData;
LABEL_22:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v14);
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
      v14 = 1257;
      goto LABEL_19;
    }
    v7 = v15;
    v4 = 0;
    if ( !v15 )
    {
LABEL_20:
      v6 = -2147024890;
      v14 = 1261;
LABEL_21:
      v13 = v6;
      goto LABEL_22;
    }
  }
  if ( (*((_BYTE *)v7 + 576) & 4) != 0 )
    CWindowList::ImmediateDestroySprite(this, v7);
  if ( !*((_DWORD *)v7 + 32) )
  {
    SyncedWindowData = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD))(*(_QWORD *)a2 + 288LL))(
                         a2,
                         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
    v6 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v14 = 1273;
      goto LABEL_19;
    }
  }
  SyncedWindowData = CWindowList::SyncWindowData(this, a2, v7);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 1277;
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
    v14 = 1289;
    goto LABEL_21;
  }
  p_Flink = &WindowListForDesktopCanFail->Blink->Flink;
  if ( *p_Flink != WindowListForDesktopCanFail )
    __fastfail(3u);
  *((_QWORD *)v7 + 1) = p_Flink;
  *(_QWORD *)v7 = WindowListForDesktopCanFail;
  *p_Flink = (struct _LIST_ENTRY *)v7;
  WindowListForDesktopCanFail->Blink = (struct _LIST_ENTRY *)v7;
  CWindowData::ClearSnapshot(v7, 1, 0LL, 1);
  SyncedWindowData = CWindowList::ClipChange(this, a2);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 1298;
    goto LABEL_19;
  }
  if ( (*((_BYTE *)v7 + 576) & 1) != 0 )
  {
    SyncedWindowData = CWindowList::ShowHide(this, v7, 1);
    v6 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v14 = 1302;
      goto LABEL_19;
    }
  }
  if ( WinSqmIsOptedIn_CachedInDwm() && v4 )
    *((_BYTE *)v7 + 579) |= 2u;
LABEL_16:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}

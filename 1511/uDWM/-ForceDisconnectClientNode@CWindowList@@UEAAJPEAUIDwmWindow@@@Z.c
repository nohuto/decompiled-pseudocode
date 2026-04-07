/*
 * XREFs of ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x18001DF74 (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x1800218A0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002CCCC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800335A0 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     EtwppTemplate_ @ 0x180082118 (EtwppTemplate_.c)
 */

__int64 __fastcall CWindowList::ForceDisconnectClientNode(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rdi
  struct CVisual *RootVisualForDesktop; // rax
  CDesktopManager *v8; // rcx
  int updated; // eax
  __int64 v10; // rcx
  CWindowData *v12; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x1496u);
  }
  else
  {
    v6 = v12;
    if ( v12 )
    {
      CWindowData::ForceDisconnectClientNode(v12);
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)v6 + 15));
      updated = CDesktopManager::UpdateSceneImpl(v8, RootVisualForDesktop);
      v5 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x14A0u);
      }
      else
      {
        if ( dword_1800BB564
          && (unsigned __int8)(byte_1800BB568 - 1) > 2u
          && (qword_1800BB550 & 0x8000000000000001uLL) != 0
          && (qword_1800BB558 & 0x8000000000000001uLL) == qword_1800BB558 )
        {
          EtwppTemplate_(v10, &EtwTraceInfo_9008);
        }
        MilChannel_CommitChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v5;
}

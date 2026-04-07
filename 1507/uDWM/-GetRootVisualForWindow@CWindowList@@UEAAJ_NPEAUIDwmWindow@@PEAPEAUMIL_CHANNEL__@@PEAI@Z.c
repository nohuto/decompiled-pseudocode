/*
 * XREFs of ?GetRootVisualForWindow@CWindowList@@UEAAJ_NPEAUIDwmWindow@@PEAPEAUMIL_CHANNEL__@@PEAI@Z @ 0x1800787D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180029520 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::GetRootVisualForWindow(
        CWindowList *this,
        char a2,
        struct IDwmWindow *a3,
        struct MIL_CHANNEL__ **a4,
        unsigned int *a5)
{
  unsigned int *v9; // r14
  int SyncedWindowData; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+30h] [rbp-28h] BYREF
  struct CWindowData *v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = a5;
  v18 = 0LL;
  *a4 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
  *v9 = 0;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a3, 1, &v18);
  v11 = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    if ( !v18
      || (v12 = *((_QWORD *)v18 + 46)) == 0
      || (!a2 ? (v13 = *(_QWORD *)(v12 + 560)) : (v13 = *(_QWORD *)(v12 + 280)),
          !v13 || (v14 = *(_QWORD *)(v13 + 16)) == 0 ? (v15 = 0) : (v15 = *(_DWORD *)(v14 + 24)),
          (*v9 = v15) == 0) )
    {
      v11 = -2147024890;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x1387u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v11;
}

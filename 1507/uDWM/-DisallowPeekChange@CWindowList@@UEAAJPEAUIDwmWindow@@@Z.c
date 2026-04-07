/*
 * XREFs of ?DisallowPeekChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180078070
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180029520 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::DisallowPeekChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // esi
  struct CWindowData *v6; // rdi
  char v7; // al
  struct CWindowData *v9; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v9);
  v5 = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    v6 = v9;
    if ( v9 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 256LL))(a2);
      *((_BYTE *)v6 + 555) &= ~0x80u;
      *((_BYTE *)v6 + 555) |= v7 << 7;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x1326u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v5;
}

/*
 * XREFs of ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180018FCC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180029520 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x180099070 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::ChildContentChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  int SyncedWindowData; // eax
  unsigned int v6; // esi
  CWindowData *v7; // rbp
  char v8; // al
  CDesktopManager *v9; // rbx
  int v11; // eax
  CWindowData *v12; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x11EEu);
  }
  else
  {
    v7 = v12;
    if ( v12 )
    {
      v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 176LL))(a2);
      if ( ((*((_BYTE *)v7 + 553) & 0x10) != 0) == v8
        || (*((_BYTE *)v7 + 553) ^= (*((_BYTE *)v7 + 553) ^ (16 * v8)) & 0x10,
            v11 = CWindowData::NotifyRepresentationChanged(v7),
            v6 = v11,
            v11 >= 0) )
      {
        v9 = CDesktopManager::s_pDesktopManagerInstance;
        if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 408) )
        {
          do
            CDesktopThumbnailBase::RecloneWindow(*(CDesktopThumbnailBase **)(*((_QWORD *)v9 + 201) + 8LL * v4++), v7);
          while ( v4 < *((_DWORD *)v9 + 408) );
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x11F8u);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v6;
}

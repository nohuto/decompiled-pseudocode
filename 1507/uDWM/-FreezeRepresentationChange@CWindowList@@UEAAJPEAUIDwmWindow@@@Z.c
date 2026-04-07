/*
 * XREFs of ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002B050
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180008C20 (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180018458 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x1800185F4 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180018FCC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180029520 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002988C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800989E0 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 */

__int64 __fastcall CWindowList::FreezeRepresentationChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // esi
  CWindowData *v6; // rdi
  char v7; // bl
  char v8; // bl
  int v9; // eax
  CWindowData *v11; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v11);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x12C6u);
  }
  else
  {
    v6 = v11;
    if ( v11 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 216LL))(a2);
      if ( *((HWND *)v6 + 5) != CWindowList::GetShellWindowForDesktop(
                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                                  *((_QWORD *)v6 + 15))
        || CDesktopThumbnail::IsDesktopThumbnailInSnapshot() == v7 )
      {
        if ( ((*((_BYTE *)v6 + 556) & 0x20) != 0) != v7 )
        {
          v8 = *((_BYTE *)v6 + 556) ^ (*((_BYTE *)v6 + 556) ^ (32 * v7)) & 0x20;
          *((_BYTE *)v6 + 556) = v8;
          if ( (v8 & 0x20) != 0 )
            CWindowData::SnapshotWindow(v6);
          else
            CWindowData::ClearSnapshot(v6, 1, 0LL, 0);
          v9 = CWindowData::NotifyRepresentationChanged(v6);
          v5 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x12DEu);
        }
      }
      else
      {
        CDesktopThumbnail::FreezeDesktopThumbnail(v6, v7);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v5;
}

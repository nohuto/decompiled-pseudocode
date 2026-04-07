/*
 * XREFs of ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180080260
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001DE78 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001E880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800335A0 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::ForceIconicRepresentationChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // esi
  CWindowData *v6; // rdi
  char v7; // al
  CWindowData *v8; // rcx
  int v9; // eax
  CWindowData *v11; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v11);
  v5 = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    v6 = v11;
    if ( v11 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 200LL))(a2);
      if ( (*((_BYTE *)v6 + 569) & 1) != v7 )
      {
        *((_BYTE *)v6 + 569) ^= (v7 ^ *((_BYTE *)v6 + 569)) & 1;
        if ( v7 && CWindowData::IsImmersiveWindow(v6) )
          CWindowData::ClearSnapshot(v8, 0, 0LL, 1);
        v9 = CWindowData::NotifyRepresentationChanged(v6);
        v5 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x12B0u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x12A2u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v5;
}

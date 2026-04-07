/*
 * XREFs of ?ParametrizedRenderingChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180078FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180029520 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnParametrizedRenderingChange@CTopLevelWindow@@QEAAJ_N0N@Z @ 0x1800760DC (-OnParametrizedRenderingChange@CTopLevelWindow@@QEAAJ_N0N@Z.c)
 */

__int64 __fastcall CWindowList::ParametrizedRenderingChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  struct CWindowData *v6; // rsi
  char v7; // al
  char v8; // al
  double v9; // xmm0_8
  CTopLevelWindow *v10; // rcx
  int v11; // eax
  struct CWindowData *v13; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v13);
  v5 = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    v6 = v13;
    if ( v13 )
    {
      *((_BYTE *)v13 + 556) |= 2u;
      v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 344LL))(a2);
      *((_BYTE *)v6 + 556) &= ~4u;
      *((_BYTE *)v6 + 556) |= 4 * (v7 & 1);
      v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 352LL))(a2);
      *((_BYTE *)v6 + 556) &= ~8u;
      *((_BYTE *)v6 + 556) |= 8 * (v8 & 1);
      v9 = (*(double (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 360LL))(a2);
      *((double *)v6 + 70) = v9;
      v10 = (CTopLevelWindow *)*((_QWORD *)v6 + 46);
      if ( v10 )
      {
        v11 = CTopLevelWindow::OnParametrizedRenderingChange(
                v10,
                (*((_BYTE *)v6 + 556) & 4) != 0,
                (*((_BYTE *)v6 + 556) & 8) != 0,
                v9);
        v5 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x19CBu);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x19BEu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v5;
}

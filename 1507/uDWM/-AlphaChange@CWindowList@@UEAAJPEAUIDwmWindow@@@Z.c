/*
 * XREFs of ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002B930
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180018DAC (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001D130 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180029520 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z @ 0x180030A34 (-OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180033E98 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003AC30 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::AlphaChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // esi
  struct CWindowData *v6; // rdi
  CVisual *v7; // rcx
  CWindowIconic *v8; // rcx
  __int64 v9; // rbx
  char v10; // al
  int v12; // eax
  struct CWindowData *v13; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v13);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x1157u);
  }
  else
  {
    v6 = v13;
    if ( v13 )
    {
      *((_BYTE *)v6 + 316) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 144LL))(a2);
      v7 = (CVisual *)*((_QWORD *)v6 + 46);
      if ( v7 )
      {
        CVisual::SetOpacity(v7, (double)*(unsigned __int8 *)(*((_QWORD *)v7 + 93) + 316LL) / 255.0);
        CLivePreview::OnAlphaChange(
          *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 170),
          v6,
          *((_BYTE *)v6 + 316));
      }
      v8 = (CWindowIconic *)*((_QWORD *)v6 + 49);
      if ( v8 )
        CWindowIconic::OnAlphaUpdated(v8, 1);
      v9 = 0LL;
      if ( *((_DWORD *)v6 + 106) )
      {
        while ( 1 )
        {
          v12 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(*(CSecondaryWindowRepresentation **)(*((_QWORD *)v6 + 50) + 8 * v9));
          v5 = v12;
          if ( v12 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *((_DWORD *)v6 + 106) )
            goto LABEL_8;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x116Bu);
      }
      else
      {
LABEL_8:
        v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 192LL))(a2);
        if ( v10 != ((*((_BYTE *)v6 + 553) & 0x20) != 0) )
        {
          *((_BYTE *)v6 + 553) ^= (*((_BYTE *)v6 + 553) ^ (32 * v10)) & 0x20;
          CWindowData::OnColorizationUpdated(v6);
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v5;
}

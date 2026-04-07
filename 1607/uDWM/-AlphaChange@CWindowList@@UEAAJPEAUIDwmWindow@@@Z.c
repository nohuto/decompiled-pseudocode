/*
 * XREFs of ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18001B210 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z @ 0x180033680 (-OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180034684 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180038FA8 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::AlphaChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  struct CWindowData *v6; // rbx
  CVisual *v7; // rcx
  CWindowIconic *v8; // rcx
  __int64 v9; // rsi
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowData, 0xF26u);
  }
  else
  {
    v6 = v13;
    if ( v13 )
    {
      *((_BYTE *)v6 + 332) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 144LL))(a2);
      v7 = (CVisual *)*((_QWORD *)v6 + 48);
      if ( v7 )
      {
        CVisual::SetOpacity(v7, (double)*(unsigned __int8 *)(*((_QWORD *)v7 + 93) + 332LL) / 255.0);
        CLivePreview::OnAlphaChange(
          *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 168),
          v6,
          *((_BYTE *)v6 + 332));
      }
      v8 = (CWindowIconic *)*((_QWORD *)v6 + 52);
      if ( v8 )
        CWindowIconic::OnAlphaUpdated(v8, 1);
      v9 = 0LL;
      if ( *((_DWORD *)v6 + 112) )
      {
        while ( 1 )
        {
          v12 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(*(CSecondaryWindowRepresentation **)(*((_QWORD *)v6 + 53) + 8 * v9));
          v5 = v12;
          if ( v12 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *((_DWORD *)v6 + 112) )
            goto LABEL_8;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xF3Au);
      }
      else
      {
LABEL_8:
        v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 192LL))(a2);
        if ( v10 != ((*((_BYTE *)v6 + 577) & 0x20) != 0) )
        {
          *((_BYTE *)v6 + 577) ^= (*((_BYTE *)v6 + 577) ^ (32 * v10)) & 0x20;
          CWindowData::OnColorizationUpdated(v6);
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v5;
}

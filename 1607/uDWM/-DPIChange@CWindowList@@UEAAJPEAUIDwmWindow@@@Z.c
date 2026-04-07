/*
 * XREFs of ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateNonClientMetrics@CWindowData@@QEAAXXZ @ 0x18001A3A0 (-UpdateNonClientMetrics@CWindowData@@QEAAXXZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x180026F98 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180031890 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     Template_pddddd @ 0x180082A28 (Template_pddddd.c)
 */

__int64 __fastcall CWindowList::DPIChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  CWindowData *v6; // rbx
  _DWORD *v7; // rax
  _DWORD *v8; // rdx
  BOOL v9; // r9d
  BOOL v10; // r8d
  BOOL v11; // edi
  int v12; // eax
  int updated; // eax
  int v14; // edx
  int v15; // ecx
  float v17; // xmm2_4
  CTopLevelWindow *v18; // rcx
  CDesktopManager *v19; // rcx
  CWindowData *v20; // [rsp+60h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v20 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v20);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowData, 0x10B2u);
  }
  else
  {
    v6 = v20;
    if ( v20 )
    {
      v7 = (_DWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 128LL))(a2);
      v8 = v7;
      v9 = *((_DWORD *)v6 + 76) != *v7;
      v10 = *((_DWORD *)v6 + 77) != v7[1] || *((_DWORD *)v6 + 82) != v7[6];
      v11 = *((_DWORD *)v6 + 78) != v7[2]
         || *((_DWORD *)v6 + 79) != v7[3]
         || *((_DWORD *)v6 + 80) != v7[4]
         || *((_DWORD *)v6 + 81) != v7[5];
      *((_OWORD *)v6 + 19) = *(_OWORD *)v7;
      *((_QWORD *)v6 + 40) = *((_QWORD *)v7 + 2);
      *((_DWORD *)v6 + 82) = v7[6];
      v12 = *((_DWORD *)v6 + 76);
      if ( v12 == 1 )
      {
        v19 = CDesktopManager::s_pDesktopManagerInstance;
        *((double *)v6 + 36) = (double)(int)v8[1] / (double)*((int *)CDesktopManager::s_pDesktopManagerInstance + 360);
        *((double *)v6 + 37) = (double)(int)v8[1] / (double)*((int *)v19 + 361);
      }
      else if ( !v12 )
      {
        *((double *)v6 + 36) = (double)(int)v8[1] / 96.0;
        *((double *)v6 + 37) = (double)(int)v8[1] / 96.0;
      }
      if ( v9
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v6 + 36) - 1.0)) & _xmm) <= 0.0000011920929
        && (v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v6 + 37) - 1.0)) & _xmm),
            v17 <= 0.0000011920929)
        || v10 )
      {
        CWindowData::UpdateNonClientMetrics(v6);
        v18 = (CTopLevelWindow *)*((_QWORD *)v6 + 48);
        if ( v18 )
          CTopLevelWindow::OnSettingsUpdated(v18, 1);
      }
      updated = CWindowList::UpdateWindowScale(this, v6, v11);
      v5 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x10DEu);
      }
      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        Template_pddddd(
          v15,
          v14,
          *((_QWORD *)v6 + 5),
          *((_DWORD *)v6 + 77),
          *((_DWORD *)v6 + 78),
          *((_DWORD *)v6 + 79),
          *((_DWORD *)v6 + 80),
          *((_DWORD *)v6 + 81));
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}

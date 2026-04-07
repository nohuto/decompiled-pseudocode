/*
 * XREFs of ?SetSwapchainTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@_NPEAUIDwmChannel@@I@Z @ 0x180082140
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180019A98 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180033490 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?SetSwapchainTarget@CTopLevelWindow@@QEAAJI_NPEAVCResource@@@Z @ 0x18007ED44 (-SetSwapchainTarget@CTopLevelWindow@@QEAAJI_NPEAVCResource@@@Z.c)
 */

__int64 __fastcall CWindowList::SetSwapchainTargetForWindow(
        CWindowList *this,
        struct IDwmWindow *a2,
        char a3,
        struct IDwmChannel *a4,
        unsigned int a5)
{
  CBaseObject *v9; // rsi
  struct IDwmChannel *v10; // r14
  int SyncedWindowData; // eax
  unsigned int v12; // ebx
  int v13; // r9d
  struct CWindowData *v14; // rdi
  int v15; // eax
  unsigned int v17; // [rsp+20h] [rbp-30h]
  unsigned int v18; // [rsp+30h] [rbp-20h] BYREF
  struct CResource *v19; // [rsp+38h] [rbp-18h] BYREF
  struct CWindowData *v20; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+48h] [rbp-8h] BYREF

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v18 = 0;
  v9 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v10 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v20);
  v12 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v17 = 4388;
LABEL_3:
    v13 = SyncedWindowData;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, v17);
    goto LABEL_14;
  }
  v14 = v20;
  if ( !v20 || !*((_QWORD *)v20 + 48) )
  {
    v12 = -2147024890;
    v17 = 4391;
    v13 = -2147024890;
    goto LABEL_13;
  }
  SyncedWindowData = (*(__int64 (__fastcall **)(struct IDwmChannel *, _QWORD, struct IDwmChannel *, unsigned int *))(*(_QWORD *)a4 + 96LL))(
                       a4,
                       a5,
                       v10,
                       &v18);
  v12 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v17 = 4394;
    goto LABEL_3;
  }
  v15 = CResource::WrapExistingResource(v10, v18, &v19);
  v12 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x112Bu);
    v9 = v19;
    goto LABEL_14;
  }
  v9 = v19;
  SyncedWindowData = CTopLevelWindow::SetSwapchainTarget(*((CTopLevelWindow **)v14 + 48), a5, a3, v19);
  v12 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v17 = 4396;
    goto LABEL_3;
  }
LABEL_14:
  if ( v18 )
    (*(void (__fastcall **)(struct IDwmChannel *))(*(_QWORD *)v10 + 120LL))(v10);
  if ( v9 )
    CBaseObject::Release(v9);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return v12;
}

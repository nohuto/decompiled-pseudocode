/*
 * XREFs of ?SetSwapchainTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@_NPEAUMIL_CHANNEL__@@I@Z @ 0x180079E70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x1800159F4 (-WrapExistingResource@CResource@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180029520 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?SetSwapchainTarget@CTopLevelWindow@@QEAAJI_NPEAVCResource@@@Z @ 0x18007623C (-SetSwapchainTarget@CTopLevelWindow@@QEAAJI_NPEAVCResource@@@Z.c)
 */

__int64 __fastcall CWindowList::SetSwapchainTargetForWindow(
        CWindowList *this,
        struct IDwmWindow *a2,
        char a3,
        struct MIL_CHANNEL__ *a4,
        unsigned int a5)
{
  struct CResource *v9; // rsi
  struct MIL_CHANNEL__ *v10; // r14
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
  v10 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v20);
  v12 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v17 = 5038;
LABEL_3:
    v13 = SyncedWindowData;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, v17);
    goto LABEL_14;
  }
  v14 = v20;
  if ( !v20 || !*((_QWORD *)v20 + 46) )
  {
    v12 = -2147024890;
    v17 = 5041;
    v13 = -2147024890;
    goto LABEL_13;
  }
  SyncedWindowData = MilResource_DuplicateHandle(a4, a5, v10, &v18);
  v12 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v17 = 5044;
    goto LABEL_3;
  }
  v15 = CResource::WrapExistingResource(v10, v18, &v19);
  v12 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x13B5u);
    v9 = v19;
    goto LABEL_14;
  }
  v9 = v19;
  SyncedWindowData = CTopLevelWindow::SetSwapchainTarget(*((CTopLevelWindow **)v14 + 46), a5, a3, v19);
  v12 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v17 = 5046;
    goto LABEL_3;
  }
LABEL_14:
  if ( v18 )
    MilResource_ReleaseOnChannel(v10, v18, 0LL);
  if ( v9 )
    CBaseObject::Release(v9);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return v12;
}

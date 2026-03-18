/*
 * XREFs of ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0071020 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkDisplayOnOff @ 0x1C0071620 (DxgkDisplayOnOff.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0073DD0 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0078654 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C0079520 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C007A500 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0087994 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A2E8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C008C62C (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C008CFD0 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C00B8DD0 (-ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00B9818 (-CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00C1D80 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00C3DC0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00C4860 (DxgkUseAdapterViewInCurrentSession.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00C5F04 (DxgkRemoveSessionViewForCurrentSession.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00C617C (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00D34A0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00D88B0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00DAC6C (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?SaveHKCUPathInSessionData@@YAJXZ @ 0x1C00DB9F8 (-SaveHKCUPathInSessionData@@YAJXZ.c)
 *     DxgkDestroyCsrssProcess @ 0x1C00DBB18 (DxgkDestroyCsrssProcess.c)
 *     DxgkGetAdapter @ 0x1C00E2E20 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C00E2F40 (DxgkReleaseAdapter.c)
 *     DxgkGetUseHWGPUInRemoteSession @ 0x1C00E3050 (DxgkGetUseHWGPUInRemoteSession.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C00F78E4 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C017C000 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     DxgkCreateOutputDupl @ 0x1C017E790 (DxgkCreateOutputDupl.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0180738 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C0180970 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0181558 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?WriteDpiToRegistry@@YAJAEBU_LUID@@IK@Z @ 0x1C018D024 (-WriteDpiToRegistry@@YAJAEBU_LUID@@IK@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGGLOBAL::GetSessionData(DXGGLOBAL *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 CurrentProcessSessionId; // rsi
  __int64 v5; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  DXGFASTMUTEX *v12; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  v1 = *((_QWORD *)this + 69);
  v2 = 0LL;
  if ( v1 )
  {
    v13 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
    v12 = (DXGFASTMUTEX *)(v1 + 80);
    if ( v1 == -80 )
    {
      v9 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v9 + 24) = 428LL;
      WdLogEvent5_WdAssertion(v9);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v12 + 1) == CurrentThread )
    {
      v10 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v10 + 24) = 435LL;
      WdLogEvent5_WdAssertion(v10);
    }
    if ( v13 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v3, v5);
      v11[5] = &v12;
      v11[3] = 275LL;
      v11[4] = 4LL;
      v11[6] = 0LL;
      v11[7] = 0LL;
      WdLogEvent5_WdCriticalError(v11);
    }
    DXGFASTMUTEX::Acquire(v12);
    v13 = 1;
    if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v1 + 72) )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v12);
    }
    else
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v1 + 40) + 8 * CurrentProcessSessionId);
      v13 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v12);
      return (struct DXGSESSIONDATA *)v7;
    }
  }
  return (struct DXGSESSIONDATA *)v2;
}

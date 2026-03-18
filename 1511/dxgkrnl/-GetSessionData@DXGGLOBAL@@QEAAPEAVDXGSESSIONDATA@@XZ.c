/*
 * XREFs of ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258
 * Callers:
 *     ?SaveHKCUPathInSessionData@@YAJXZ @ 0x1C005CC58 (-SaveHKCUPathInSessionData@@YAJXZ.c)
 *     ?CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005CEA4 (-CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z @ 0x1C005DAA8 (-ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C009AF4C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C009D4F8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00A2688 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00A423C (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4E18 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00A9D40 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00AE440 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00AE93C (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00AEAF0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkDisplayOnOff @ 0x1C00AF0F0 (DxgkDisplayOnOff.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00B0870 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00B8F34 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     OutputDuplProcessTerminate @ 0x1C00BBBD0 (OutputDuplProcessTerminate.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00BBF70 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00BE950 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00C2AC0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00C5018 (DxgkUseAdapterViewInCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00C6094 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     DxgkDestroyCsrssProcess @ 0x1C00C6B88 (DxgkDestroyCsrssProcess.c)
 *     DxgkGetAdapter @ 0x1C00CCB40 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C00CCC50 (DxgkReleaseAdapter.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C00DBC44 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C015406C (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C0157450 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     DxgkCreateOutputDupl @ 0x1C0159800 (DxgkCreateOutputDupl.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C015AE3C (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C015B014 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C015BC30 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?WriteDpiToRegistry@@YAJAEAU_LUID@@IK@Z @ 0x1C0165198 (-WriteDpiToRegistry@@YAJAEAU_LUID@@IK@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGGLOBAL::GetSessionData(DXGGLOBAL *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 CurrentProcessSessionId; // rsi
  __int64 v5; // r8
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rbx
  DXGFASTMUTEX *v12; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  v1 = *((_QWORD *)this + 88);
  v2 = 0LL;
  if ( v1 )
  {
    v13 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
    v12 = (DXGFASTMUTEX *)(v1 + 104);
    if ( v1 == -104 )
    {
      v6 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v6 + 24) = 451LL;
      WdLogEvent5_WdAssertion(v6);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)v12 == CurrentThread )
    {
      v8 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v8 + 24) = 458LL;
      WdLogEvent5_WdAssertion(v8);
    }
    if ( v13 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v3, v5);
      v9[5] = &v12;
      v9[3] = 275LL;
      v9[4] = 4LL;
      v9[6] = 0LL;
      v9[7] = 0LL;
      WdLogEvent5_WdCriticalError(v9);
    }
    DXGFASTMUTEX::Acquire((union _LARGE_INTEGER *)v12);
    v13 = 1;
    if ( (unsigned int)CurrentProcessSessionId < *(_DWORD *)(v1 + 96) )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v1 + 64) + 8 * CurrentProcessSessionId);
      v13 = 0;
      DXGFASTMUTEX::Release(v12);
      return (struct DXGSESSIONDATA *)v10;
    }
    else
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v12);
    }
  }
  return (struct DXGSESSIONDATA *)v2;
}

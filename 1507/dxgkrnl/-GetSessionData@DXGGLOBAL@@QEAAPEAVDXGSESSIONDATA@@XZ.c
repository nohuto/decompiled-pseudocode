/*
 * XREFs of ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40
 * Callers:
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C005E564 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005F000 (-CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C005F3B0 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C005F540 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C0061BF0 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00640AC (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C0065A90 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0066644 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C008B8C0 (DxgkGetAdapterDeviceDesc.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C008D638 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C008EBC0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     OutputDuplProcessTerminate @ 0x1C008F6BC (OutputDuplProcessTerminate.c)
 *     ?ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z @ 0x1C009F5A8 (-ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z.c)
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00AC6F0 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00B100C (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C00B60B8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z.c)
 *     DxgkDisplayOnOff @ 0x1C00BA1C0 (DxgkDisplayOnOff.c)
 *     DxgkGetAdapter @ 0x1C00BDD00 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C00BDE10 (DxgkReleaseAdapter.c)
 *     DxgkRemoveAllAdapterFromCurrentSession @ 0x1C00BDE40 (DxgkRemoveAllAdapterFromCurrentSession.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00BDF98 (DxgkRemoveSessionViewForCurrentSession.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00BE408 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D0120 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C00D1D08 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?SaveHKCUPathInSessionData@@YAJXZ @ 0x1C00D80C8 (-SaveHKCUPathInSessionData@@YAJXZ.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01531E4 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     DxgkCreateOutputDupl @ 0x1C0155520 (DxgkCreateOutputDupl.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0156B24 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C0156CFC (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0157918 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?WriteDpiToRegistry@@YAJAEAU_LUID@@IK@Z @ 0x1C0160DB8 (-WriteDpiToRegistry@@YAJAEAU_LUID@@IK@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGGLOBAL::GetSessionData(DXGGLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 CurrentProcessSessionId; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  DXGFASTMUTEX *v16; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+28h] [rbp-10h]

  v4 = *((_QWORD *)this + 70);
  v5 = 0LL;
  if ( v4 )
  {
    v17 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this, a2, a3, a4);
    v16 = (DXGFASTMUTEX *)(v4 + 80);
    if ( v4 == -80 )
    {
      v13 = WdLogNewEntry5_WdAssertion(0LL, v6, v8, v9);
      *(_QWORD *)(v13 + 24) = 421LL;
      WdLogEvent5_WdAssertion(v13);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v16 + 1) == CurrentThread )
    {
      v14 = WdLogNewEntry5_WdAssertion(CurrentThread, v6, v8, v9);
      *(_QWORD *)(v14 + 24) = 428LL;
      WdLogEvent5_WdAssertion(v14);
    }
    if ( v17 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v6, v8);
      v15[5] = &v16;
      v15[3] = 275LL;
      v15[4] = 4LL;
      v15[6] = 0LL;
      v15[7] = 0LL;
      WdLogEvent5_WdCriticalError(v15);
    }
    DXGFASTMUTEX::Acquire(v16);
    v17 = 1;
    if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v4 + 72) )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v16);
    }
    else
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 8 * CurrentProcessSessionId);
      v17 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v16);
      return (struct DXGSESSIONDATA *)v11;
    }
  }
  return (struct DXGSESSIONDATA *)v5;
}

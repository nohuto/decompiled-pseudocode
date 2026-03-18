/*
 * XREFs of DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C005E564
 * Callers:
 *     ?DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C005BCA0 (-DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C005C690 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C005F540 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C0065374 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C0065524 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B47FC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkDisplayOnOff @ 0x1C00BA1C0 (DxgkDisplayOnOff.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D0120 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C0135970 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z @ 0x1C008F454 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00DA848 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkGetCddDeviceAndContextForCurrentSession(
        struct _LUID *a1,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3)
{
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v11; // rcx
  struct SESSION_ADAPTER *v12; // r11
  struct DXGDEVICE *v13; // rax
  volatile signed __int64 *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rbx

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v9 = 0;
  if ( !SessionData )
  {
    v18 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v18 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    v17 = (_QWORD *)v18;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    goto LABEL_13;
  }
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionData, a1);
  v12 = SessionAdapterFromLuid;
  if ( !SessionAdapterFromLuid )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v16[3] = a1->HighPart;
    v16[4] = a1->LowPart;
    v17 = v16;
    v16[5] = -1073741811LL;
LABEL_13:
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  v13 = (struct DXGDEVICE *)*((_QWORD *)SessionAdapterFromLuid + 7);
  if ( v13 )
  {
    if ( a2 )
    {
      *a2 = v13;
      _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v12 + 7) + 64LL));
    }
    if ( a3 )
    {
      v15 = (volatile signed __int64 *)*((_QWORD *)v12 + 8);
      if ( *((_DWORD *)v12 + 13) != 1 )
        v15 = (volatile signed __int64 *)*v15;
      *a3 = (struct DXGCONTEXT *)v15;
      _InterlockedIncrement64(v15 + 4);
    }
  }
  else
  {
    return (unsigned int)SESSION_ADAPTER::CreateCddDevice(v12, a2, a3);
  }
  return v9;
}

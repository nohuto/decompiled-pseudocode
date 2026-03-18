/*
 * XREFs of DmmIsTargetHMD @ 0x1C007B5F8
 * Callers:
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C0079520 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z @ 0x1C00D9624 (-DxgkIsTargetHMD@@YAEAEBU_LUID@@I@Z.c)
 *     ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01789D8 (-DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z.c)
 *     ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C0178BDC (-DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0001970 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

char __fastcall DmmIsTargetHMD(DXGADAPTER *a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  char v9; // di
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  if ( !*((_QWORD *)a1 + 266) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v11 + 24) = 18725LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v5 = *((_QWORD *)a1 + 266);
  v6 = *(_QWORD *)(v5 + 88);
  if ( v6 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v13, *(_QWORD *)(v5 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 96) + 72LL));
    v7 = *(_QWORD *)(v6 + 96);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v7, a2);
    if ( TargetById )
      v9 = *((_BYTE *)TargetById + 396);
    else
      v9 = 0;
    if ( v7 )
      ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 40));
    return v9;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 0;
  }
}

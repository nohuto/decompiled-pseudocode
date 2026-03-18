/*
 * XREFs of ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008E6C0
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C008E7E8 (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00C5508 (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CB234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 * Callees:
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000C54C (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C000C57C (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C008F680 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C009148C (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
        struct _KTHREAD ***this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a4)
{
  __int64 VidPnSourceId; // rbp
  __int64 VidPnTargetId; // r14
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  struct DMMVIDPNPRESENTPATH *v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  struct DMMVIDPNPRESENTPATH *v29; // [rsp+60h] [rbp+8h] BYREF
  struct DMMVIDPNPRESENTPATH *v30; // [rsp+68h] [rbp+10h] BYREF

  if ( *this[5] != KeGetCurrentThread() )
  {
    v21 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a2 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !a3 )
  {
    v23 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( (unsigned int)(a4 - 1) > 1 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v24);
  }
  VidPnSourceId = a3->VidPnSourceId;
  VidPnTargetId = a3->VidPnTargetId;
  v29 = 0LL;
  v30 = 0LL;
  v10 = DMMVIDPNTOPOLOGY::CreateNewPath(a2, a3, &v30);
  v15 = v10;
  if ( v10 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
    v25[3] = VidPnSourceId;
    v25[4] = VidPnTargetId;
    v25[5] = v15;
    goto LABEL_15;
  }
  v16 = v30;
  *((_WORD *)v30 + 54) = *(_WORD *)&a3[1].CopyProtection.OEMCopyProtection[36];
  auto_ptr<DMMVIDPNPRESENTPATH>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))&v29,
    (__int64 (__fastcall ***)(_QWORD, __int64))v16);
  v17 = VIDPN_MGR::_AddPathToVidPnTopology((VIDPN_MGR *)this, a2, v29, a4, 1u);
  v19 = v17;
  LODWORD(v15) = -1071774957;
  if ( v17 == -1071774957 )
    goto LABEL_19;
  LODWORD(v15) = -1071774920;
  if ( v17 == -1071774920 )
  {
    if ( a4 != D3DKMDT_MCC_ENFORCE )
    {
      v26 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v26);
    }
    goto LABEL_19;
  }
  LODWORD(v15) = -1071774975;
  if ( v17 == -1071774975 )
  {
LABEL_19:
    v27 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v27[3] = VidPnSourceId;
    v27[4] = VidPnTargetId;
    v27[5] = a2;
    WdLogEvent5_WdDmmEvent(v27);
    goto LABEL_15;
  }
  if ( v17 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v28[3] = VidPnSourceId;
    v28[4] = VidPnTargetId;
    v28[5] = a2;
    v28[6] = v19;
    WdLogEvent5_WdError(v28);
    LODWORD(v15) = v19;
  }
  else
  {
    v29 = 0LL;
    LODWORD(v15) = 0;
  }
LABEL_15:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v29);
  return (unsigned int)v15;
}

/*
 * XREFs of ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008376C
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008388C (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00D9D3C (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_D.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C000A6E8 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000A704 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0080894 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C0084728 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 */

__int64 __fastcall VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a4)
{
  __int64 v8; // rax
  __int64 VidPnSourceId; // rbp
  __int64 VidPnTargetId; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  struct DMMVIDPNPRESENTPATH *v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  struct DMMVIDPNPRESENTPATH *v29; // [rsp+60h] [rbp+8h] BYREF
  struct DMMVIDPNPRESENTPATH *v30; // [rsp+68h] [rbp+10h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
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
  v11 = DMMVIDPNTOPOLOGY::CreateNewPath(a2, a3, &v30);
  v16 = v11;
  if ( v11 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v25[3] = VidPnSourceId;
    v25[4] = VidPnTargetId;
    v25[5] = v16;
    goto LABEL_15;
  }
  v17 = v30;
  *((_WORD *)v30 + 54) = *(_WORD *)&a3[1].CopyProtection.OEMCopyProtection[36];
  auto_ptr<DMMVIDPNPRESENTPATH>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))&v29,
    (__int64 (__fastcall ***)(_QWORD, __int64))v17);
  v18 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v29, a4, 1u);
  v20 = v18;
  LODWORD(v16) = -1071774957;
  if ( v18 == -1071774957 )
    goto LABEL_19;
  LODWORD(v16) = -1071774920;
  if ( v18 == -1071774920 )
  {
    if ( a4 != D3DKMDT_MCC_ENFORCE )
    {
      v26 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v26);
    }
    goto LABEL_19;
  }
  LODWORD(v16) = -1071774975;
  if ( v18 == -1071774975 )
  {
LABEL_19:
    v27 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19);
    v27[3] = VidPnSourceId;
    v27[4] = VidPnTargetId;
    v27[5] = a2;
    WdLogEvent5_WdDmmEvent(v27);
    goto LABEL_15;
  }
  if ( v18 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v28[3] = VidPnSourceId;
    v28[4] = VidPnTargetId;
    v28[5] = a2;
    v28[6] = v20;
    WdLogEvent5_WdError(v28);
    LODWORD(v16) = v20;
  }
  else
  {
    v29 = 0LL;
    LODWORD(v16) = 0;
  }
LABEL_15:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v29);
  return (unsigned int)v16;
}

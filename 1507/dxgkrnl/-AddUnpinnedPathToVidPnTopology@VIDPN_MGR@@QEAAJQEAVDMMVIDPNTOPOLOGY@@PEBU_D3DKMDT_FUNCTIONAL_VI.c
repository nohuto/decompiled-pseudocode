/*
 * XREFs of ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CD0FC
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00B89C4 (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8CFC (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BCBD4 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 * Callees:
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0008180 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00081B0 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C0096A54 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00CC54C (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3,
        __int64 a4)
{
  unsigned int v4; // r15d
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  struct DMMVIDPNPRESENTPATH *v32; // [rsp+60h] [rbp+8h] BYREF
  struct DMMVIDPNPRESENTPATH *v33; // [rsp+68h] [rbp+10h] BYREF

  v4 = a4;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != KeGetCurrentThread() )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !a2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !a3 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( v4 - 1 > 1 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v27);
  }
  VidPnSourceId = a3->VidPnSourceId;
  VidPnTargetId = a3->VidPnTargetId;
  v32 = 0LL;
  v33 = 0LL;
  v10 = DMMVIDPNTOPOLOGY::CreateNewPath(a2, a3, &v33, a4);
  v15 = v10;
  if ( v10 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
    v28[3] = VidPnSourceId;
    v28[4] = VidPnTargetId;
    v28[5] = v15;
    goto LABEL_15;
  }
  v16 = v33;
  *((_WORD *)v33 + 54) = *(_WORD *)&a3[1].CopyProtection.OEMCopyProtection[36];
  auto_ptr<DMMVIDPNPRESENTPATH>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))&v32,
    (__int64 (__fastcall ***)(_QWORD, __int64))v16);
  v17 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v32, v4, 1u);
  v22 = v17;
  LODWORD(v15) = -1071774957;
  if ( v17 == -1071774957 )
    goto LABEL_19;
  LODWORD(v15) = -1071774920;
  if ( v17 == -1071774920 )
  {
    if ( v4 != 2 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
      WdLogEvent5_WdAssertion(v29);
    }
    goto LABEL_19;
  }
  LODWORD(v15) = -1071774975;
  if ( v17 == -1071774975 )
  {
LABEL_19:
    v30 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19);
    v30[3] = VidPnSourceId;
    v30[4] = VidPnTargetId;
    v30[5] = a2;
    WdLogEvent5_WdDmmEvent(v30);
    goto LABEL_15;
  }
  if ( v17 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v31[3] = VidPnSourceId;
    v31[4] = VidPnTargetId;
    v31[5] = a2;
    v31[6] = v22;
    WdLogEvent5_WdError(v31);
    LODWORD(v15) = v22;
  }
  else
  {
    v32 = 0LL;
    LODWORD(v15) = 0;
  }
LABEL_15:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v32);
  return (unsigned int)v15;
}

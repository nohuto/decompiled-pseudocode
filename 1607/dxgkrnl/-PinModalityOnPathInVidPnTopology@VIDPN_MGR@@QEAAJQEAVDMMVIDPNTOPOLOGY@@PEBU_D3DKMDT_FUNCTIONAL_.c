/*
 * XREFs of ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0083584
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008388C (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00D9D3C (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_D.c)
 * Callees:
 *     ?FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0003428 (-FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0004248 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0005ACC (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000AC70 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C000ACAC (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ??8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z @ 0x1C000B620 (--8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0080A8C (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00843E4 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00844C8 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinModalityOnPathInVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *a3)
{
  __int64 v6; // rax
  __int64 Container; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  int v10; // edx
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rcx
  DMMVIDPNSOURCEMODE **v14; // rbp
  int *v15; // rdi
  int NumPathsFromSource; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  DMMVIDPNSOURCEMODE *v19; // rsi
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v21; // rcx
  const struct DMMVIDPNSOURCEMODE *v22; // rsi
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  DMMVIDPNTARGETMODESET *v27; // rdi
  const struct DMMVIDPNTARGETMODE *v28; // rax
  __int64 v29; // rcx
  const struct DMMVIDPNTARGETMODE *v30; // rsi
  int v31; // eax
  __int64 v32; // rcx
  struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  unsigned __int64 v43; // [rsp+80h] [rbp+8h] BYREF
  DMMVIDPNSOURCEMODE **v44; // [rsp+88h] [rbp+10h] BYREF
  __int64 v45; // [rsp+90h] [rbp+18h]
  DMMVIDPNTARGETMODESET *v46; // [rsp+98h] [rbp+20h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a2 )
  {
    v36 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v36);
  }
  if ( !a3 )
  {
    v37 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v37);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v8 = *(unsigned int *)a3;
  v9 = *((unsigned int *)a3 + 1);
  v10 = *(_DWORD *)a3;
  v45 = Container;
  v11 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v10);
  v13 = *(_QWORD *)(v11 + 104);
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 96));
    v14 = *(DMMVIDPNSOURCEMODE ***)(v11 + 104);
  }
  else
  {
    v14 = 0LL;
  }
  v43 = 0LL;
  v44 = v14;
  v15 = (int *)((char *)a3 + 368);
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v12, &v43);
  v18 = NumPathsFromSource;
  if ( NumPathsFromSource < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v38[3] = v8;
    v38[4] = a2;
LABEL_28:
    v38[5] = v18;
    WdLogEvent5_WdError(v38);
    goto LABEL_29;
  }
  if ( !v43 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v39);
  }
  v19 = v14[18];
  if ( v19 )
  {
    GraphicsInfo = (struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)DMMVIDPNSOURCEMODE::GetGraphicsInfo(v14[18]);
    if ( operator==(GraphicsInfo, (_DWORD *)a3 + 92) )
      goto LABEL_15;
    v18 = WdLogNewEntry5_WdError(v35);
    *(_QWORD *)(v18 + 24) = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v19);
    *(_QWORD *)(v18 + 32) = v15;
    *(_QWORD *)(v18 + 40) = v8;
    WdLogEvent5_WdError(v18);
    LODWORD(v18) = -1071774960;
LABEL_29:
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v44, 0LL);
    return (unsigned int)v18;
  }
  BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                (DMMVIDPNSOURCEMODESET *)v14,
                *v15,
                *((_DWORD *)a3 + 93),
                (enum _D3DDDIFORMAT)*((_DWORD *)a3 + 97),
                (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*((_DWORD *)a3 + 91));
  v22 = BestMatch;
  if ( !BestMatch )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v40[3] = (unsigned int)*v15;
    v40[4] = *((unsigned int *)a3 + 93);
    v40[5] = *((int *)a3 + 97);
    WdLogEvent5_WdError(v40);
    LODWORD(v18) = -1071774970;
    goto LABEL_29;
  }
  v23 = VIDPN_MGR::PinVidPnSourceMode(this, (struct DMMVIDPNSOURCEMODESET *const)v14, *((_DWORD *)BestMatch + 6), 1);
  v18 = v23;
  if ( v23 < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v38[3] = v22;
    v38[4] = v8;
    goto LABEL_28;
  }
LABEL_15:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v44, 0LL);
  v25 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v45 + 312), v9);
  v26 = *(_QWORD *)(v25 + 104);
  if ( v26 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v26 + 96));
    v27 = *(DMMVIDPNTARGETMODESET **)(v25 + 104);
  }
  else
  {
    v27 = 0LL;
  }
  v46 = v27;
  v28 = DMMVIDPNTARGETMODESET::FindBestMatch(v27, (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)a3 + 408));
  v30 = v28;
  if ( v28 )
  {
    v31 = VIDPN_MGR::PinVidPnTargetMode(this, v27, *((_DWORD *)v28 + 6), 1);
    v18 = v31;
    if ( v31 < 0 )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v32);
      v42[3] = v30;
      v42[4] = v9;
      v42[5] = v18;
      WdLogEvent5_WdError(v42);
    }
    else
    {
      LODWORD(v18) = 0;
    }
  }
  else
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v29);
    v41[3] = *((unsigned int *)a3 + 105);
    v41[4] = *((unsigned int *)a3 + 106);
    v41[5] = *((unsigned int *)a3 + 107);
    v41[6] = *((unsigned int *)a3 + 108);
    WdLogEvent5_WdError(v41);
    LODWORD(v18) = -1071774970;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v46, 0LL);
  return (unsigned int)v18;
}

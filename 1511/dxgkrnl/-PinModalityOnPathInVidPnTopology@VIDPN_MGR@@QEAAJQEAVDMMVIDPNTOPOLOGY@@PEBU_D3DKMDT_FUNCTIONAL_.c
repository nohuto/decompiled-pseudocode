/*
 * XREFs of ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C008E4D0
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C008E7E8 (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00C5508 (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CB234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0004C24 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C00055B0 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0005AC4 (-FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0006778 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0008324 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z @ 0x1C000CE10 (--8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C008F33C (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C008F420 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0091398 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinModalityOnPathInVidPnTopology(
        struct _KTHREAD ***this,
        struct DMMVIDPNTOPOLOGY *const a2,
        const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *a3)
{
  __int64 Container; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  int v9; // edx
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rcx
  DMMVIDPNSOURCEMODE **v13; // rbp
  int *v14; // rdi
  int NumPathsFromSource; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  DMMVIDPNSOURCEMODE *v18; // rsi
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v20; // rcx
  const struct DMMVIDPNSOURCEMODE *v21; // rsi
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  DMMVIDPNTARGETMODESET *v26; // rdi
  const struct DMMVIDPNTARGETMODE *v27; // rax
  __int64 v28; // rcx
  const struct DMMVIDPNTARGETMODE *v29; // rsi
  int v30; // eax
  __int64 v31; // rcx
  __int64 v33; // rax
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

  if ( *this[5] != KeGetCurrentThread() )
  {
    v33 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v33);
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
  v7 = *(unsigned int *)a3;
  v8 = *((unsigned int *)a3 + 1);
  v9 = *(_DWORD *)a3;
  v45 = Container;
  v10 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v9);
  v12 = *(_QWORD *)(v10 + 104);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
    v13 = *(DMMVIDPNSOURCEMODE ***)(v10 + 104);
  }
  else
  {
    v13 = 0LL;
  }
  v43 = 0LL;
  v44 = v13;
  v14 = (int *)((char *)a3 + 368);
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v11, &v43);
  v17 = NumPathsFromSource;
  if ( NumPathsFromSource < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v38[3] = v7;
    v38[4] = a2;
LABEL_28:
    v38[5] = v17;
    WdLogEvent5_WdError(v38);
    goto LABEL_29;
  }
  if ( !v43 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v39);
  }
  v18 = v13[18];
  if ( v18 )
  {
    GraphicsInfo = (struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)DMMVIDPNSOURCEMODE::GetGraphicsInfo(v13[18]);
    if ( operator==(GraphicsInfo, (_DWORD *)a3 + 92) )
      goto LABEL_15;
    v17 = WdLogNewEntry5_WdError(v35);
    *(_QWORD *)(v17 + 24) = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v18);
    *(_QWORD *)(v17 + 32) = v14;
    *(_QWORD *)(v17 + 40) = v7;
    WdLogEvent5_WdError(v17);
    LODWORD(v17) = -1071774960;
LABEL_29:
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v44, 0LL);
    return (unsigned int)v17;
  }
  BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                (DMMVIDPNSOURCEMODESET *)v13,
                *v14,
                *((_DWORD *)a3 + 93),
                (enum _D3DDDIFORMAT)*((_DWORD *)a3 + 97),
                (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*((_DWORD *)a3 + 91));
  v21 = BestMatch;
  if ( !BestMatch )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v40[3] = (unsigned int)*v14;
    v40[4] = *((unsigned int *)a3 + 93);
    v40[5] = *((int *)a3 + 97);
    WdLogEvent5_WdError(v40);
    LODWORD(v17) = -1071774970;
    goto LABEL_29;
  }
  v22 = VIDPN_MGR::PinVidPnSourceMode(
          (VIDPN_MGR *)this,
          (struct DMMVIDPNSOURCEMODESET *const)v13,
          *((_DWORD *)BestMatch + 6),
          1);
  v17 = v22;
  if ( v22 < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v38[3] = v21;
    v38[4] = v7;
    goto LABEL_28;
  }
LABEL_15:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v44, 0LL);
  v24 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v45 + 312), v8);
  v25 = *(_QWORD *)(v24 + 104);
  if ( v25 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 96));
    v26 = *(DMMVIDPNTARGETMODESET **)(v24 + 104);
  }
  else
  {
    v26 = 0LL;
  }
  v46 = v26;
  v27 = DMMVIDPNTARGETMODESET::FindBestMatch(v26, (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)a3 + 408));
  v29 = v27;
  if ( v27 )
  {
    v30 = VIDPN_MGR::PinVidPnTargetMode((VIDPN_MGR *)this, v26, *((_DWORD *)v27 + 6), 1);
    v17 = v30;
    if ( v30 < 0 )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v31);
      v42[3] = v29;
      v42[4] = v8;
      v42[5] = v17;
      WdLogEvent5_WdError(v42);
    }
    else
    {
      LODWORD(v17) = 0;
    }
  }
  else
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v28);
    v41[3] = *((unsigned int *)a3 + 105);
    v41[4] = *((unsigned int *)a3 + 106);
    v41[5] = *((unsigned int *)a3 + 107);
    v41[6] = *((unsigned int *)a3 + 108);
    WdLogEvent5_WdError(v41);
    LODWORD(v17) = -1071774970;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v46, 0LL);
  return (unsigned int)v17;
}

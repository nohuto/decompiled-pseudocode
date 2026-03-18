/*
 * XREFs of ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CCF0C
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary @ 0x1C00B89C4 (DmmRestoreActiveVidPnFromClientVidPnOnSourceIfNecessary.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8CFC (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BCBD4 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0002F84 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0004CDC (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000741C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009774 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z @ 0x1C000A228 (--8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C000D778 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000E400 (-FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C008A260 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C0096710 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00967F4 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinModalityOnPathInVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *a3)
{
  struct _KTHREAD *CurrentThread; // r9
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  DMMVIDPNSOURCEMODE *v22; // rsi
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v24; // rcx
  __int64 v25; // r9
  const struct DMMVIDPNSOURCEMODE *v26; // rsi
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  DMMVIDPNTARGETMODESET *v31; // rdi
  const struct DMMVIDPNTARGETMODE *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r9
  const struct DMMVIDPNTARGETMODE *v35; // rsi
  int v36; // eax
  __int64 v37; // rcx
  __int64 v39; // rax
  struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  unsigned __int64 v49; // [rsp+80h] [rbp+8h] BYREF
  DMMVIDPNSOURCEMODE **v50; // [rsp+88h] [rbp+10h] BYREF
  __int64 v51; // [rsp+90h] [rbp+18h]
  DMMVIDPNTARGETMODESET *v52; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != CurrentThread )
  {
    v39 = WdLogNewEntry5_WdAssertion(this, a2, a3, CurrentThread);
    WdLogEvent5_WdAssertion(v39);
  }
  if ( !a2 )
  {
    v42 = WdLogNewEntry5_WdAssertion(this, a2, a3, CurrentThread);
    WdLogEvent5_WdAssertion(v42);
  }
  if ( !a3 )
  {
    v43 = WdLogNewEntry5_WdAssertion(this, a2, a3, CurrentThread);
    WdLogEvent5_WdAssertion(v43);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v8 = *(unsigned int *)a3;
  v9 = *((unsigned int *)a3 + 1);
  v10 = *(_DWORD *)a3;
  v51 = Container;
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
  v49 = 0LL;
  v50 = v14;
  v15 = (int *)((char *)a3 + 368);
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v12, &v49);
  v21 = NumPathsFromSource;
  if ( NumPathsFromSource < 0 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v44[3] = v8;
    v44[4] = a2;
LABEL_28:
    v44[5] = v21;
    WdLogEvent5_WdError(v44);
    goto LABEL_29;
  }
  if ( !v49 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    WdLogEvent5_WdAssertion(v45);
  }
  v22 = v14[18];
  if ( v22 )
  {
    GraphicsInfo = (struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)DMMVIDPNSOURCEMODE::GetGraphicsInfo(v14[18]);
    if ( operator==(GraphicsInfo, (_DWORD *)a3 + 92) )
      goto LABEL_15;
    v21 = WdLogNewEntry5_WdError(v41);
    *(_QWORD *)(v21 + 24) = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v22);
    *(_QWORD *)(v21 + 32) = v15;
    *(_QWORD *)(v21 + 40) = v8;
    WdLogEvent5_WdError(v21);
    LODWORD(v21) = -1071774960;
LABEL_29:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v50, 0LL);
    return (unsigned int)v21;
  }
  BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                (DMMVIDPNSOURCEMODESET *)v14,
                *v15,
                *((_DWORD *)a3 + 93),
                (enum _D3DDDIFORMAT)*((_DWORD *)a3 + 97),
                (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*((_DWORD *)a3 + 91));
  v26 = BestMatch;
  if ( !BestMatch )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v46[3] = (unsigned int)*v15;
    v46[4] = *((unsigned int *)a3 + 93);
    v46[5] = *((int *)a3 + 97);
    WdLogEvent5_WdError(v46);
    LODWORD(v21) = -1071774970;
    goto LABEL_29;
  }
  LOBYTE(v25) = 1;
  v27 = VIDPN_MGR::PinVidPnSourceMode(
          this,
          (struct DMMVIDPNSOURCEMODESET *const)v14,
          *((unsigned int *)BestMatch + 6),
          v25);
  v21 = v27;
  if ( v27 < 0 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v28);
    v44[3] = v26;
    v44[4] = v8;
    goto LABEL_28;
  }
LABEL_15:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v50, 0LL);
  v29 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v51 + 312), v9);
  v30 = *(_QWORD *)(v29 + 104);
  if ( v30 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v30 + 96));
    v31 = *(DMMVIDPNTARGETMODESET **)(v29 + 104);
  }
  else
  {
    v31 = 0LL;
  }
  v52 = v31;
  v32 = DMMVIDPNTARGETMODESET::FindBestMatch(v31, (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)a3 + 408));
  v35 = v32;
  if ( v32 )
  {
    LOBYTE(v34) = 1;
    v36 = VIDPN_MGR::PinVidPnTargetMode(this, v31, *((unsigned int *)v32 + 6), v34);
    v21 = v36;
    if ( v36 < 0 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v37);
      v48[3] = v35;
      v48[4] = v9;
      v48[5] = v21;
      WdLogEvent5_WdError(v48);
    }
    else
    {
      LODWORD(v21) = 0;
    }
  }
  else
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v33);
    v47[3] = *((unsigned int *)a3 + 105);
    v47[4] = *((unsigned int *)a3 + 106);
    v47[5] = *((unsigned int *)a3 + 107);
    v47[6] = *((unsigned int *)a3 + 108);
    WdLogEvent5_WdError(v47);
    LODWORD(v21) = -1071774970;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v52, 0LL);
  return (unsigned int)v21;
}

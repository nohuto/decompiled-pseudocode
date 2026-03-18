/*
 * XREFs of DmmGetClientVidPnTargetModeInfo @ 0x1C0175B74
 * Callers:
 *     DxgkOpmGetRedirectionInfo @ 0x1C012ABD8 (DxgkOpmGetRedirectionInfo.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C014FBFC (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043F8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0004CDC (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009774 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C009A7B4 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C009C3A8 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 */

__int64 __fastcall DmmGetClientVidPnTargetModeInfo(
        DXGADAPTER *a1,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        int *a6,
        _QWORD *a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  __int64 v9; // r12
  bool *v11; // r13
  int *v12; // r15
  _QWORD *v13; // rsi
  _QWORD *v14; // r14
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rdi
  __int64 v41; // rax
  const struct _D3DKMDT_VIDEO_SIGNAL_INFO *v42; // rcx
  _DWORD *v43; // rcx
  __int64 v44; // r9

  v8 = 0;
  v9 = a2;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  v11 = (bool *)a5;
  if ( a5 )
    *(_BYTE *)a5 = 0;
  v12 = a6;
  if ( a6 )
    *a6 = 0;
  v13 = a7;
  if ( a7 )
    *a7 = 0LL;
  v14 = (_QWORD *)a8;
  if ( a8 )
    *(_QWORD *)a8 = 0LL;
  if ( !a1 )
  {
    v15 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v15 + 24) = 0LL;
LABEL_15:
    WdLogEvent5_WdError(v15);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = *((_QWORD *)a1 + 247);
  if ( !v22 )
  {
    v15 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v15 + 24) = a1;
    goto LABEL_15;
  }
  v23 = *(_QWORD *)(v22 + 88);
  if ( v23 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&a8, v23);
    v25 = *(_QWORD *)(v23 + 80);
    a5 = 0LL;
    if ( v25 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 32));
      v26 = *(_QWORD *)(v23 + 80);
    }
    else
    {
      v26 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&a5, v26);
    if ( a5 )
    {
      v31 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(a5 + 312), v9);
      if ( v31 )
      {
        if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v32 + 96), v29) )
        {
          v39 = *(_QWORD *)(v31 + 104);
          if ( v39 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v39 + 96));
            v40 = *(_QWORD **)(v31 + 104);
          }
          else
          {
            v40 = 0LL;
          }
          a7 = v40;
          if ( !v40[18] )
          {
            v41 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
            WdLogEvent5_WdAssertion(v41);
          }
          v42 = (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v40[18] + 72LL);
          a6 = *(int **)(v40[18] + 92LL);
          DmmCalculatePresentationVSync(v42, (struct _D3DDDI_RATIONAL *)&a6);
          if ( a3 )
            *a3 = *v43;
          if ( a4 )
            *a4 = DmmMapVSyncFromRationalToInteger(
                    (const struct _D3DDDI_RATIONAL *)&a6,
                    (unsigned int)((int)(*(_DWORD *)(v40[18] + 120LL) << 29) >> 29),
                    0LL,
                    v44);
          if ( v11 )
            *v11 = (unsigned int)(((int)(*(_DWORD *)(v40[18] + 120LL) << 29) >> 29) - 2) <= 1;
          if ( v12 )
            *v12 = (int)(*(_DWORD *)(v40[18] + 120LL) << 29) >> 29;
          if ( v13 )
            *v13 = *(_QWORD *)(v40[18] + 84LL);
          if ( v14 )
            *v14 = *(_QWORD *)(v40[18] + 92LL);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&a7, 0LL);
        }
        else
        {
          v38 = WdLogNewEntry5_WdError(v35);
          *(_QWORD *)(v38 + 24) = v9;
          WdLogEvent5_WdError(v38);
          v8 = -1071774912;
        }
      }
      else
      {
        v33 = WdLogNewEntry5_WdError(v30);
        *(_QWORD *)(v33 + 24) = v9;
        WdLogEvent5_WdError(v33);
        v8 = -1071774971;
      }
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v28 + 24) = a1;
      WdLogEvent5_WdError(v28);
      v8 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&a5, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a8 + 40));
    return v8;
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v24 + 24) = a1;
    WdLogEvent5_WdError(v24);
    return 3223192373LL;
  }
}

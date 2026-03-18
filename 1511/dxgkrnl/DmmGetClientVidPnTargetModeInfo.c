/*
 * XREFs of DmmGetClientVidPnTargetModeInfo @ 0x1C017A10C
 * Callers:
 *     DxgkOpmGetRedirectionInfo @ 0x1C0131178 (DxgkOpmGetRedirectionInfo.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C0152F08 (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0004C24 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EF8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00A6F40 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00A6FD8 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
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
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rdi
  __int64 v35; // rax
  const struct _D3DKMDT_VIDEO_SIGNAL_INFO *v36; // rcx
  _DWORD *v37; // rcx

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
    v18 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = *((_QWORD *)a1 + 248);
  if ( !v19 )
  {
    v15 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v15 + 24) = a1;
    goto LABEL_15;
  }
  v20 = *(_QWORD *)(v19 + 112);
  if ( v20 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&a8, v20);
    v22 = *(_QWORD *)(v20 + 80);
    a5 = 0LL;
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 32));
      v23 = *(_QWORD *)(v20 + 80);
    }
    else
    {
      v23 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&a5, v23);
    if ( a5 )
    {
      v28 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(a5 + 312), v9);
      if ( v28 )
      {
        if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v29 + 96), v26) )
        {
          v33 = *(_QWORD *)(v28 + 104);
          if ( v33 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v33 + 96));
            v34 = *(_QWORD **)(v28 + 104);
          }
          else
          {
            v34 = 0LL;
          }
          a7 = v34;
          if ( !v34[18] )
          {
            v35 = WdLogNewEntry5_WdAssertion(v31);
            WdLogEvent5_WdAssertion(v35);
          }
          v36 = (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v34[18] + 72LL);
          a6 = *(int **)(v34[18] + 92LL);
          DmmCalculatePresentationVSync(v36, (struct _D3DDDI_RATIONAL *)&a6);
          if ( a3 )
            *a3 = *v37;
          if ( a4 )
            *a4 = DmmMapVSyncFromRationalToInteger(
                    (const struct _D3DDDI_RATIONAL *)&a6,
                    (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(v34[18] + 120LL) << 29) >> 29),
                    0LL);
          if ( v11 )
            *v11 = (unsigned int)(((int)(*(_DWORD *)(v34[18] + 120LL) << 29) >> 29) - 2) <= 1;
          if ( v12 )
            *v12 = (int)(*(_DWORD *)(v34[18] + 120LL) << 29) >> 29;
          if ( v13 )
            *v13 = *(_QWORD *)(v34[18] + 84LL);
          if ( v14 )
            *v14 = *(_QWORD *)(v34[18] + 92LL);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&a7, 0LL);
        }
        else
        {
          v32 = WdLogNewEntry5_WdError(v31);
          *(_QWORD *)(v32 + 24) = v9;
          WdLogEvent5_WdError(v32);
          v8 = -1071774912;
        }
      }
      else
      {
        v30 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v30 + 24) = v9;
        WdLogEvent5_WdError(v30);
        v8 = -1071774971;
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v25 + 24) = a1;
      WdLogEvent5_WdError(v25);
      v8 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&a5, 0LL);
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(a8 + 40));
    return v8;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdError(v21);
    return 3223192373LL;
  }
}

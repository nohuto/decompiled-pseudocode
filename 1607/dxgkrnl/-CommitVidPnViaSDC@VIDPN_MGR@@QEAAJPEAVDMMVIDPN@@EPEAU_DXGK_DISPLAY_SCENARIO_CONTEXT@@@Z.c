/*
 * XREFs of ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A00B0
 * Callers:
 *     DmmInvalidateActiveVidPn @ 0x1C01A46EC (DmmInvalidateActiveVidPn.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C0002078 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C007E4E4 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C017862C (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     DpiGdiAsyncDisplaySwitchCallout @ 0x1C0192E0C (DpiGdiAsyncDisplaySwitchCallout.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnViaSDC(
        VIDPN_MGR *this,
        struct DMMVIDPN *a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // rcx
  struct _DXGK_WIN32K_PARAM_DATA *PoolWithTag; // rax
  __int64 v14; // rcx
  struct _DXGK_WIN32K_PARAM_DATA *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbp
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rax
  _QWORD *v29; // rcx
  PVOID ModesArray; // rcx

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !Set<DMMVIDPN>::FindByValue((__int64)this + 104, (__int64)a2) )
  {
    v10 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v10 + 32) = this;
LABEL_5:
    *(_QWORD *)(v10 + 24) = a2;
    WdLogEvent5_WdError(v10);
    return 3223192323LL;
  }
  if ( !DMMVIDPN::IsFunctional(a2, -3) )
  {
    v10 = WdLogNewEntry5_WdError(v12);
    goto LABEL_5;
  }
  PoolWithTag = (struct _DXGK_WIN32K_PARAM_DATA *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x4E506456u);
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(struct _DXGK_WIN32K_PARAM_DATA));
    if ( !*((_QWORD *)this + 1) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = DispConfigConvertFromVidPn(v15, *(struct DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), a2, a3);
    v23 = v21;
    if ( v21 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v29[3] = a2;
      v29[4] = v15;
      v29[5] = v23;
    }
    else
    {
      v24 = DpiGdiAsyncDisplaySwitchCallout((__int64)v15, a4);
      v23 = v24;
      if ( v24 >= 0 )
        return (unsigned int)v23;
      v27 = WdLogNewEntry5_WdError(v25);
      if ( !*((_QWORD *)this + 1) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v26);
        WdLogEvent5_WdAssertion(v28);
      }
      v29 = (_QWORD *)v27;
      *(_QWORD *)(v27 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      *(_QWORD *)(v27 + 32) = v23;
    }
    WdLogEvent5_WdError(v29);
    ModesArray = v15->ModesArray;
    if ( ModesArray )
    {
      ExFreePoolWithTag(ModesArray, 0);
      v15->ModesArray = 0LL;
    }
    if ( v15->PathsArray )
    {
      ExFreePoolWithTag(v15->PathsArray, 0);
      v15->PathsArray = 0LL;
    }
    ExFreePoolWithTag(v15, 0);
    return (unsigned int)v23;
  }
  v17 = WdLogNewEntry5_WdLowResource(v14);
  if ( !*((_QWORD *)this + 1) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v18);
  }
  *(_QWORD *)(v17 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *(_QWORD *)(v17 + 32) = 32LL;
  WdLogEvent5_WdLowResource(v17);
  return 3221225495LL;
}

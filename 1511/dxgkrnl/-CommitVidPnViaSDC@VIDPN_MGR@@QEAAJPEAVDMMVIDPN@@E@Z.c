/*
 * XREFs of ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@E@Z @ 0x1C01767FC
 * Callers:
 *     DmmInvalidateActiveVidPn @ 0x1C017B064 (DmmInvalidateActiveVidPn.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000BC8C (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C0092248 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C01535AC (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     DpiGdiAsyncDisplaySwitchCallout @ 0x1C016B120 (DpiGdiAsyncDisplaySwitchCallout.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnViaSDC(struct _KTHREAD ***this, struct DMMVIDPN *a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rcx
  struct _DXGK_WIN32K_PARAM_DATA *PoolWithTag; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _DXGK_WIN32K_PARAM_DATA *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rbp
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  _QWORD *v30; // rcx
  PVOID ModesArray; // rcx

  if ( *this[5] != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !Set<DMMVIDPN>::FindByValue((__int64)(this + 13), (__int64)a2) )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 32) = this;
LABEL_5:
    *(_QWORD *)(v8 + 24) = a2;
    WdLogEvent5_WdError(v8);
    return 3223192323LL;
  }
  if ( !DMMVIDPN::IsFunctional(a2, -3) )
  {
    v8 = WdLogNewEntry5_WdError(v10);
    goto LABEL_5;
  }
  PoolWithTag = (struct _DXGK_WIN32K_PARAM_DATA *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x4E506456u);
  v16 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(struct _DXGK_WIN32K_PARAM_DATA));
    if ( !this[1] )
    {
      v21 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v21);
    }
    v22 = DispConfigConvertFromVidPn(v16, this[1][2], a2, a3);
    v24 = v22;
    if ( v22 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v30[3] = a2;
      v30[4] = v16;
      v30[5] = v24;
    }
    else
    {
      v25 = DpiGdiAsyncDisplaySwitchCallout(v16);
      v24 = v25;
      if ( v25 >= 0 )
        return (unsigned int)v24;
      v28 = WdLogNewEntry5_WdError(v26);
      if ( !this[1] )
      {
        v29 = WdLogNewEntry5_WdAssertion(v27);
        WdLogEvent5_WdAssertion(v29);
      }
      v30 = (_QWORD *)v28;
      *(_QWORD *)(v28 + 24) = this[1][2];
      *(_QWORD *)(v28 + 32) = v24;
    }
    WdLogEvent5_WdError(v30);
    ModesArray = v16->ModesArray;
    if ( ModesArray )
    {
      ExFreePoolWithTag(ModesArray, 0);
      v16->ModesArray = 0LL;
    }
    if ( v16->PathsArray )
    {
      ExFreePoolWithTag(v16->PathsArray, 0);
      v16->PathsArray = 0LL;
    }
    ExFreePoolWithTag(v16, 0);
    return (unsigned int)v24;
  }
  v18 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
  if ( !this[1] )
  {
    v19 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v19);
  }
  *(_QWORD *)(v18 + 24) = this[1][2];
  *(_QWORD *)(v18 + 32) = 32LL;
  WdLogEvent5_WdLowResource(v18);
  return 3221225495LL;
}

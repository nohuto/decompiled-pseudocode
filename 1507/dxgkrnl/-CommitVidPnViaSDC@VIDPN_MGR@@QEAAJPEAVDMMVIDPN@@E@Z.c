/*
 * XREFs of ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@E@Z @ 0x1C0171F7C
 * Callers:
 *     DmmInvalidateActiveVidPn @ 0x1C0176ACC (DmmInvalidateActiveVidPn.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000957C (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C0088C20 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C0150298 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     DpiGdiAsyncDisplaySwitchCallout @ 0x1C0166B80 (DpiGdiAsyncDisplaySwitchCallout.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnViaSDC(VIDPN_MGR *this, struct DMMVIDPN *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r9
  char v4; // bp
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rcx
  struct _DXGK_WIN32K_PARAM_DATA *PoolWithTag; // rax
  __int64 v13; // rcx
  struct _DXGK_WIN32K_PARAM_DATA *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbp
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  _QWORD *v37; // rcx
  PVOID ModesArray; // rcx

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != CurrentThread )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, CurrentThread);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !Set<DMMVIDPN>::FindByValue((__int64)this + 104, (__int64)a2) )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v9 + 32) = this;
LABEL_5:
    *(_QWORD *)(v9 + 24) = a2;
    WdLogEvent5_WdError(v9);
    return 3223192323LL;
  }
  if ( !DMMVIDPN::IsFunctional(a2, -3) )
  {
    v9 = WdLogNewEntry5_WdError(v11);
    goto LABEL_5;
  }
  PoolWithTag = (struct _DXGK_WIN32K_PARAM_DATA *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x4E506456u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, sizeof(struct _DXGK_WIN32K_PARAM_DATA));
    if ( !*((_QWORD *)this + 1) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
      WdLogEvent5_WdAssertion(v25);
    }
    LOBYTE(v24) = v4;
    v26 = DispConfigConvertFromVidPn(v14, *(struct DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), a2, v24);
    v28 = v26;
    if ( v26 < 0 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v37[3] = a2;
      v37[4] = v14;
      v37[5] = v28;
    }
    else
    {
      v29 = DpiGdiAsyncDisplaySwitchCallout(v14);
      v28 = v29;
      if ( v29 >= 0 )
        return (unsigned int)v28;
      v33 = WdLogNewEntry5_WdError(v30);
      if ( !*((_QWORD *)this + 1) )
      {
        v36 = WdLogNewEntry5_WdAssertion(v32, v31, v34, v35);
        WdLogEvent5_WdAssertion(v36);
      }
      v37 = (_QWORD *)v33;
      *(_QWORD *)(v33 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      *(_QWORD *)(v33 + 32) = v28;
    }
    WdLogEvent5_WdError(v37);
    ModesArray = v14->ModesArray;
    if ( ModesArray )
    {
      ExFreePoolWithTag(ModesArray, 0);
      v14->ModesArray = 0LL;
    }
    if ( v14->PathsArray )
    {
      ExFreePoolWithTag(v14->PathsArray, 0);
      v14->PathsArray = 0LL;
    }
    ExFreePoolWithTag(v14, 0);
    return (unsigned int)v28;
  }
  v17 = WdLogNewEntry5_WdLowResource(v13);
  if ( !*((_QWORD *)this + 1) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v16, v15, v18, v19);
    WdLogEvent5_WdAssertion(v20);
  }
  *(_QWORD *)(v17 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *(_QWORD *)(v17 + 32) = 32LL;
  WdLogEvent5_WdLowResource(v17);
  return 3221225495LL;
}

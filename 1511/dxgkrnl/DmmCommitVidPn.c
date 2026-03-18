/*
 * XREFs of DmmCommitVidPn @ 0x1C0179B84
 * Callers:
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C0125730 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0004F44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 */

__int64 __fastcall DmmCommitVidPn(
        PERESOURCE *this,
        __int64 a2,
        void *a3,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a4,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a5,
        struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a6)
{
  __int64 v10; // rax
  __int64 v11; // rax
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v12; // ebp
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v13; // r14
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  PERESOURCE v19; // rax
  __int64 Blink; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  struct DMMVIDPN *v23; // rbx
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF

  if ( !this )
  {
    v10 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = a5;
  v13 = a6;
  if ( a5 == D3DKMDT_MCC_ENFORCE && ((((int)(*(_DWORD *)a6 << 28) >> 28) - 1) & 0xFFFFFFFD) == 0 )
  {
    v14 = WdLogNewEntry5_WdError(this);
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  if ( !this )
  {
    v16 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v16 + 24) = 0LL;
LABEL_10:
    WdLogEvent5_WdError(v16);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = this[248];
  if ( !v19 )
  {
    v16 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v16 + 24) = this;
    goto LABEL_10;
  }
  Blink = (__int64)v19[1].SystemResourcesList.Blink;
  if ( Blink )
  {
    v23 = (struct DMMVIDPN *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
    if ( v23 )
    {
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v26, Blink);
      v25 = VIDPN_MGR::CommitVidPn(Blink, v23, a3, a4, v12, v13, 0LL, 0LL);
      DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v26 + 40));
      return v25;
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v24 + 24) = a2;
      WdLogEvent5_WdError(v24);
      return 3223192323LL;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdError(v21);
    return 3223192373LL;
  }
}

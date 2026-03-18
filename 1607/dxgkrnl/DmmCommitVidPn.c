/*
 * XREFs of DmmCommitVidPn @ 0x1C00E1FF0
 * Callers:
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1B9C (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000ADA0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 */

__int64 __fastcall DmmCommitVidPn(
        PERESOURCE *this,
        __int64 a2,
        void *a3,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a4,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a5,
        struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a6)
{
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v10; // ebp
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v11; // r14
  __int64 v12; // rcx
  PERESOURCE v13; // rax
  __int64 Address; // rsi
  __int64 v15; // rcx
  struct DMMVIDPN *v16; // rbx
  unsigned int v17; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF

  if ( !this )
  {
    v20 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a2 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v21);
  }
  v10 = a5;
  v11 = a6;
  if ( a5 == D3DKMDT_MCC_ENFORCE && ((((int)(*(_DWORD *)a6 << 28) >> 28) - 1) & 0xFFFFFFFD) == 0 )
  {
    v22 = WdLogNewEntry5_WdError(this);
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  if ( !this )
  {
    v19 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v19 + 24) = 0LL;
    goto LABEL_15;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v23);
  }
  v13 = this[266];
  if ( !v13 )
  {
    v19 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v19 + 24) = this;
LABEL_15:
    WdLogEvent5_WdError(v19);
    return 3223191554LL;
  }
  Address = (__int64)v13->Address;
  if ( Address )
  {
    v16 = (struct DMMVIDPN *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
    if ( v16 )
    {
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v26, Address);
      v17 = VIDPN_MGR::CommitVidPn(Address, v16, a3, a4, v10, v11, 0LL, 0LL);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26 + 40));
      return v17;
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v25 + 24) = a2;
      WdLogEvent5_WdError(v25);
      return 3223192323LL;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v24 + 24) = this;
    WdLogEvent5_WdError(v24);
    return 3223192373LL;
  }
}

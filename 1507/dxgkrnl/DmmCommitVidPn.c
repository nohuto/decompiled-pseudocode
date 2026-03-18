/*
 * XREFs of DmmCommitVidPn @ 0x1C01755EC
 * Callers:
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C011FC00 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007520 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 */

__int64 __fastcall DmmCommitVidPn(
        PERESOURCE *this,
        __int64 a2,
        void *a3,
        __int64 a4,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a5,
        struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a6)
{
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v6; // r15d
  __int64 v10; // rax
  __int64 v11; // rax
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v12; // ebp
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v13; // r14
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  PERESOURCE v22; // rax
  __int64 Address; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  struct DMMVIDPN *v26; // rbx
  __int64 v27; // rax
  unsigned int v28; // ebx
  __int64 v29; // [rsp+70h] [rbp+8h] BYREF

  v6 = a4;
  if ( !this )
  {
    v10 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
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
    v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = this[247];
  if ( !v22 )
  {
    v16 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v16 + 24) = this;
    goto LABEL_10;
  }
  Address = (__int64)v22->Address;
  if ( Address )
  {
    v26 = (struct DMMVIDPN *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
    if ( v26 )
    {
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v29, Address);
      v28 = VIDPN_MGR::CommitVidPn(Address, v26, a3, v6, v12, v13, 0LL, 0LL);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29 + 40));
      return v28;
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v27 + 24) = a2;
      WdLogEvent5_WdError(v27);
      return 3223192323LL;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v24 + 24) = this;
    WdLogEvent5_WdError(v24);
    return 3223192373LL;
  }
}

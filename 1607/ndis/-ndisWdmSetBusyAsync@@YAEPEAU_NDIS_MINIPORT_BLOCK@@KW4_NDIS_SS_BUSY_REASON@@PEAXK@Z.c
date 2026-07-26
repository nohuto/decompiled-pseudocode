/*
 * XREFs of ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006ADF0
 * Callers:
 *     ndisReturnNblWithPowerQueue @ 0x1C0001000 (ndisReturnNblWithPowerQueue.c)
 *     ndisQueuedCheckForHang @ 0x1C000F020 (ndisQueuedCheckForHang.c)
 *     ndisSetBusyAsync @ 0x1C0010E00 (ndisSetBusyAsync.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0044EF8 (ndisDoCancelDirectOidRequest.c)
 *     ndisMCancelSendNetBufferListsOnMiniport @ 0x1C0053E20 (ndisMCancelSendNetBufferListsOnMiniport.c)
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C0019FE8 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     Template_qq @ 0x1C004E748 (Template_qq.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0055B4C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C006A6B4 (-ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@.c)
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C006A7D0 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C006B3EC (ndisCancelDequeuedDirectOidRequests.c)
 */

char __fastcall ndisWdmSetBusyAsync(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        __int32 a3,
        void *a4,
        unsigned int a5)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  struct _NET_BUFFER_LIST *v7; // rdi
  char v8; // r15
  enum _NDIS_SS_BUSY_REASON v10; // r12d
  KIRQL v11; // r13
  unsigned int Value; // eax
  char v13; // al
  __int64 v14; // rcx
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST **v17; // [rsp+20h] [rbp-40h]
  char v18; // [rsp+40h] [rbp-20h]
  char v19; // [rsp+41h] [rbp-1Fh]
  struct _NET_BUFFER_LIST *v20; // [rsp+48h] [rbp-18h] BYREF
  struct _LIST_ENTRY v21; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 v22; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v23; // [rsp+A8h] [rbp+48h]
  void *v24; // [rsp+B8h] [rbp+58h]

  v24 = a4;
  v23 = a2;
  SelectiveSuspend = a1->SelectiveSuspend;
  v21.Blink = &v21;
  v7 = 0LL;
  v8 = 1;
  v21.Flink = &v21;
  v19 = 1;
  v20 = 0LL;
  v10 = 0;
  v22 = 0;
  v11 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  Value = SelectiveSuspend->Flags.Value;
  if ( (Value & 0x14) == 0 || (Value & 0x200) != 0 )
  {
    v18 = 1;
    v13 = ndisIncrementAsyncIdleCountersLocked(SelectiveSuspend, v23, (enum _NDIS_SS_BUSY_REASON)a3);
    SelectiveSuspend->LastBusyContext = 0;
    v19 = v13;
    SelectiveSuspend->LastBusyEvent.Value = a3;
  }
  else
  {
    v18 = 0;
    ndisPendWorkOnSetBusyAsyncLocked(
      SelectiveSuspend,
      (enum _NDIS_SS_BUSY_REASON)a3,
      (unsigned int *)v24,
      a5,
      &v20,
      &v21,
      &v22);
    if ( v22 && (SelectiveSuspend->Flags.Value & 0xC0) == 0 )
    {
      SelectiveSuspend->LastResumeReason.Value = a3;
      v10 = a3;
      if ( (unsigned __int8)byte_1C00895D6 >= 4u )
        WPP_SF_qD(0x25u, &WPP_fb3ee79da3763fe19127143656620238_Traceguids, (__int64)a1, a3);
      SelectiveSuspend->Flags.Value |= 0x40u;
      ndisScheduleWorkItemInternal((__int64)&SelectiveSuspend->IdleCancelWorkItem);
    }
    v7 = v20;
  }
  if ( (SelectiveSuspend->Flags.Value & 0x200) != 0 )
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v11);
  }
  else
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v11);
    if ( v7 )
    {
      Alignment = v7;
      do
      {
        Alignment->Status = -1071448052;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      ndisMSendNetBufferListsCompleteInternal((__int64)a1, v7, 0, 0);
    }
    if ( v21.Flink != &v21 )
      ndisCancelDequeuedDirectOidRequests(a1, &v21);
    if ( v10 && (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    {
      LODWORD(v17) = v10;
      Template_qq(v14, &SSResumeRequested, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, (__int64)v17);
    }
    if ( !v18 || !v19 )
      return 0;
  }
  return v8;
}

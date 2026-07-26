/*
 * XREFs of ndisSubmitIdleRequest @ 0x1C006CB8C
 * Callers:
 *     ndisSSIdleTimerWorkItem @ 0x1C006C010 (ndisSSIdleTimerWorkItem.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006E444 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x1C004263C (Template_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 *     Template_qq @ 0x1C004E748 (Template_qq.c)
 *     ?NdisTraceLoggingIdleNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@JE@Z @ 0x1C0072978 (-NdisTraceLoggingIdleNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@JE@Z.c)
 */

__int64 __fastcall ndisSubmitIdleRequest(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  char v5; // r15
  KIRQL v6; // bp
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 v9; // rcx
  KIRQL v10; // al
  KIRQL v11; // bl
  unsigned int Value; // r8d
  __int64 v14; // rcx
  KIRQL v15; // bl
  __int64 v16; // [rsp+20h] [rbp-38h]

  SelectiveSuspend = a1->SelectiveSuspend;
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  if ( (SelectiveSuspend->Flags.Value & 4) != 0 || !ndisReferenceMiniport((__int64)a1, 0x15u) )
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v6);
    NdisTraceLoggingIdleNotification(a1, -1073676271, a2);
    return 3221291025LL;
  }
  else
  {
    SelectiveSuspend->Flags.Value = SelectiveSuspend->Flags.Value ^ (SelectiveSuspend->Flags.Value ^ (a2 << 8)) & 0x100 | 4;
    KeClearEvent(&SelectiveSuspend->IdleNotificationCompleteEvent);
    KeClearEvent(&SelectiveSuspend->IdleNotificationDoneEvent);
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v6);
    LOBYTE(v7) = a2;
    v8 = a1->DriverHandle->IdleNotificationHandler(a1->MiniportAdapterContext, v7);
    KeSetEvent(&SelectiveSuspend->IdleNotificationDoneEvent, 0, 0);
    if ( v8 == 259 )
    {
      if ( (unsigned __int8)byte_1C00895D6 >= 4u )
        WPP_SF_qD(0xEu, &WPP_fb3ee79da3763fe19127143656620238_Traceguids, (__int64)a1, a2);
      NdisTraceLoggingIdleNotification(a1, 259, a2);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_q(v14, &SSIdleDetected, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF);
      v15 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
      if ( (SelectiveSuspend->Flags.Value & 4) != 0 )
      {
        KeCancelTimer(&SelectiveSuspend->IdleTimer.Timer);
        SelectiveSuspend->Flags.Value &= ~1u;
      }
      KeReleaseSpinLock(&SelectiveSuspend->Lock, v15);
      return 259LL;
    }
    else
    {
      NdisTraceLoggingIdleNotification(a1, v8, a2);
      if ( (unsigned __int8)byte_1C00895D6 >= 2u )
        WPP_SF_dq(0xDu, &WPP_fb3ee79da3763fe19127143656620238_Traceguids, v8, a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      {
        LODWORD(v16) = v8;
        Template_qq(v9, &SSIdleDeclined, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, v16);
      }
      v10 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
      SelectiveSuspend->Flags.Value &= ~0x100u;
      v11 = v10;
      Value = SelectiveSuspend->Flags.Value;
      if ( (Value & 4) != 0 )
      {
        SelectiveSuspend->Flags.Value = Value & 0xFFFFFFFB;
        KeSetEvent(&SelectiveSuspend->IdleNotificationCompleteEvent, 0, 0);
        v5 = 1;
      }
      KeReleaseSpinLock(&SelectiveSuspend->Lock, v11);
      if ( v5 )
        ndisDereferenceMiniport((__int64)a1);
      return v8;
    }
  }
}

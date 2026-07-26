/*
 * XREFs of ndisBindUnbindPeriodicReceives @ 0x1C004EF18
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A8C44 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00EC4E4 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C0004CA0 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C000DF90 (NdisReleaseRWLock.c)
 *     ndisReceiveQueueingOff @ 0x1C004F6A0 (ndisReceiveQueueingOff.c)
 *     ndisReceiveQueueingOn @ 0x1C004F708 (ndisReceiveQueueingOn.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C0065ED4 (ndisEmptyPeriodicReceivesQueue.c)
 */

void __fastcall ndisBindUnbindPeriodicReceives(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  unsigned __int64 *p_SpinLock; // rdi
  struct _KTHREAD *CurrentThread; // rax
  bool v6; // zf
  unsigned __int64 Lock; // rcx
  struct _NDIS_MINIPORT_BLOCK *v8; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  if ( LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
  {
    NdisAcquireRWLockWrite((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
    if ( a2 >= 0 )
    {
      if ( a2 <= 2 )
      {
        p_SpinLock = &a1->PeriodicReceiveQueue.SpinLock;
        KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
        a1->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
        a1->PeriodicReceiveQueue.LockDbg = 72982;
        ++a1->PeriodicReceiveQueue.BoundToIP;
        if ( a1->MediaType == NdisMedium802_3
          && HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) == 1
          && *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) != -1
          && a1->PeriodicReceiveQueue.State == PeriodicReceivesOff )
        {
          ndisReceiveQueueingOn(a1);
        }
LABEL_20:
        a1->PeriodicReceiveQueue.LockThread = 0LL;
        a1->PeriodicReceiveQueue.LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(p_SpinLock);
        goto LABEL_21;
      }
      if ( a2 <= 5 )
      {
        p_SpinLock = &a1->PeriodicReceiveQueue.SpinLock;
        KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
        CurrentThread = KeGetCurrentThread();
        v6 = a1->PeriodicReceiveQueue.BoundToIP-- == 1;
        a1->PeriodicReceiveQueue.LockThread = CurrentThread;
        a1->PeriodicReceiveQueue.LockDbg = 73003;
        if ( v6 && a1->PeriodicReceiveQueue.State )
        {
          ndisReceiveQueueingOff(a1);
          ndisEmptyPeriodicReceivesQueue(a1);
          Lock = WPP_MAIN_CB.DeviceQueue.Lock;
          if ( (struct _NDIS_MINIPORT_BLOCK *)WPP_MAIN_CB.DeviceQueue.Lock == a1 )
          {
            WPP_MAIN_CB.DeviceQueue.Lock = *(_QWORD *)(WPP_MAIN_CB.DeviceQueue.Lock + 3200);
          }
          else if ( WPP_MAIN_CB.DeviceQueue.Lock )
          {
            while ( 1 )
            {
              v8 = *(struct _NDIS_MINIPORT_BLOCK **)(Lock + 3200);
              if ( v8 == a1 )
                break;
              Lock = *(_QWORD *)(Lock + 3200);
              if ( !v8 )
                goto LABEL_14;
            }
            *(_QWORD *)(Lock + 3200) = v8->PeriodicReceiveQueue.NextMiniportBlock;
          }
LABEL_14:
          a1->PeriodicReceiveQueue.NextMiniportBlock = 0LL;
        }
        goto LABEL_20;
      }
    }
LABEL_21:
    NdisReleaseRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState);
  }
}

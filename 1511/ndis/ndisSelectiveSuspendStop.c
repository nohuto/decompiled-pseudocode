/*
 * XREFs of ndisSelectiveSuspendStop @ 0x1C0067AB8
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0069940 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisPowerSaveStop @ 0x1C0099100 (ndisPowerSaveStop.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00A2B8C (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ndisCancelWaitWake @ 0x1C0024E7C (ndisCancelWaitWake.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisCancelIdleRequestSync @ 0x1C006654C (ndisCancelIdleRequestSync.c)
 */

void __fastcall ndisSelectiveSuspendStop(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  char v4; // r14
  KIRQL v6; // bp
  unsigned int Value; // eax
  KIRQL v8; // dl
  KSPIN_LOCK *p_Lock; // rcx
  KIRQL v10; // al

  SelectiveSuspend = a1->SelectiveSuspend;
  v4 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  if ( (unsigned __int8)byte_1C0083716 >= 4u )
    WPP_SF_qD(0x20u, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, (__int64)a1, a2);
  switch ( a2 )
  {
    case 1:
      SelectiveSuspend->StopFlags.Value |= 1u;
      break;
    case 2:
      SelectiveSuspend->StopFlags.Value |= 2u;
      break;
    case 3:
      SelectiveSuspend->StopFlags.Value |= 4u;
      SelectiveSuspend->Flags.Value |= 0x400u;
      break;
    case 4:
      SelectiveSuspend->StopFlags.Value |= 8u;
      break;
    case 5:
      SelectiveSuspend->StopFlags.Value |= 0x10u;
      break;
    case 6:
      SelectiveSuspend->StopFlags.Value |= 0x20u;
      break;
    case 7:
      SelectiveSuspend->StopFlags.Value |= 0x40u;
      break;
    case 8:
      ++SelectiveSuspend->PendingPnPOpCount;
      SelectiveSuspend->StopFlags.Value |= 0x80u;
      break;
    case 12:
      SelectiveSuspend->StopFlags.Value |= 0x400u;
      break;
  }
  SelectiveSuspend->LastBusyContext = 0;
  Value = SelectiveSuspend->Flags.Value;
  SelectiveSuspend->LastBusyEvent.Value = a2;
  if ( (Value & 1) != 0 )
  {
    KeCancelTimer(&SelectiveSuspend->IdleTimer.Timer);
    SelectiveSuspend->Flags.Value &= ~1u;
    v4 = 1;
  }
  v8 = v6;
  p_Lock = &SelectiveSuspend->Lock;
  if ( (SelectiveSuspend->Flags.Value & 0x200) == 0 )
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v6);
    ndisCancelWaitWake((__int64)a1);
    if ( v4 )
    {
      KeFlushQueuedDpcs();
      KeWaitForSingleObject(&SelectiveSuspend->IdleWorkItemCompleteEvent, Executive, 0, 0, 0LL);
    }
    ndisCancelIdleRequestSync(a1, a2, 0, 1);
    v10 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
    SelectiveSuspend->Flags.Value |= 0x200u;
    p_Lock = &SelectiveSuspend->Lock;
    v8 = v10;
  }
  KeReleaseSpinLock(p_Lock, v8);
}

/*
 * XREFs of ndisIdleWaitWakeCallback @ 0x1C0066760
 * Callers:
 *     <none>
 * Callees:
 *     ndisCompleteWaitWake @ 0x1C001316C (ndisCompleteWaitWake.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001FFD8 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_dq @ 0x1C0047594 (WPP_SF_dq.c)
 *     WPP_SF_qZ @ 0x1C004B56C (WPP_SF_qZ.c)
 *     Template_jqx @ 0x1C005EDD8 (Template_jqx.c)
 *     NdisUnexpectedSsError @ 0x1C00663C0 (NdisUnexpectedSsError.c)
 */

void __fastcall ndisIdleWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rdi
  KIRQL v7; // al
  unsigned int v8; // edx
  __int64 v9; // rcx
  KIRQL v10; // si

  v6 = *((_QWORD *)Context + 564);
  if ( IoStatus->Status < 0 )
  {
    if ( IoStatus->Status != -1073741536 )
    {
      NdisUnexpectedSsError((struct _NDIS_MINIPORT_BLOCK *)Context, 0x439u);
      if ( (unsigned __int8)byte_1C0083716 >= 2u )
        WPP_SF_dq(0x19u, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, IoStatus->Status, Context);
    }
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(*((PKSPIN_LOCK *)Context + 564));
    v8 = *(_DWORD *)(v6 + 480);
    v9 = v8;
    v10 = v7;
    if ( (v8 & 0xC4) == 4 )
    {
      *(_DWORD *)(v6 + 608) = 0;
      *(_DWORD *)(v6 + 480) = v8 | 0x40;
      *(_DWORD *)(v6 + 604) = 65;
      if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      {
        LOBYTE(v9) = v8 & 0xC4;
        Template_jqx(
          v9,
          &DeviceWaitWakeComplete,
          (const GUID *)Context + 254,
          (unsigned __int64)Context + 4064,
          *((_DWORD *)Context + 1028),
          *((_QWORD *)Context + 510));
      }
      if ( (unsigned __int8)byte_1C0083710 >= 4u )
        WPP_SF_qZ(
          0x18u,
          &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids,
          (__int64)Context,
          *((__int64 **)Context + 489));
      ndisScheduleWorkItemInternal(v6 + 352);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v6, v10);
  }
  ndisCompleteWaitWake((__int64)Context);
}

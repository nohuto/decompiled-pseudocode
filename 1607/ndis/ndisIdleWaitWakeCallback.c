/*
 * XREFs of ndisIdleWaitWakeCallback @ 0x1C006B7E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C0019FE8 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 *     Template_jqx @ 0x1C0062DC8 (Template_jqx.c)
 *     ndisCompleteWaitWake @ 0x1C0063200 (ndisCompleteWaitWake.c)
 *     NdisUnexpectedSsError @ 0x1C006B3B0 (NdisUnexpectedSsError.c)
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
      NdisUnexpectedSsError((struct _NDIS_MINIPORT_BLOCK *)Context, 0x452u);
      if ( (unsigned __int8)byte_1C00895D6 >= 2u )
        WPP_SF_dq(0x19u, &WPP_fb3ee79da3763fe19127143656620238_Traceguids, IoStatus->Status, Context);
    }
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(*((PKSPIN_LOCK *)Context + 564));
    v8 = *(_DWORD *)(v6 + 504);
    v9 = v8;
    v10 = v7;
    if ( (v8 & 0xC4) == 4 )
    {
      *(_DWORD *)(v6 + 632) = 0;
      *(_DWORD *)(v6 + 504) = v8 | 0x40;
      *(_DWORD *)(v6 + 628) = 65;
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
      if ( (unsigned __int8)byte_1C00895D0 >= 4u )
        WPP_SF_qZ(
          0x18u,
          &WPP_fb3ee79da3763fe19127143656620238_Traceguids,
          (__int64)Context,
          *((unsigned __int16 **)Context + 489));
      ndisScheduleWorkItemInternal(v6 + 376);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v6, v10);
  }
  ndisCompleteWaitWake((__int64)Context);
}

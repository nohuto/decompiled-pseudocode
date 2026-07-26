/*
 * XREFs of ndisPowerSuspendRequestComplete @ 0x1C006B9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0011648 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisLogMiniportEvent @ 0x1C001A108 (ndisLogMiniportEvent.c)
 *     Template_jqxqq @ 0x1C003EE50 (Template_jqxqq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 *     NdisUnexpectedSsError @ 0x1C006B3B0 (NdisUnexpectedSsError.c)
 */

void __fastcall ndisPowerSuspendRequestComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v5; // rsi
  KIRQL v7; // bl
  __int64 v8; // rcx
  KIRQL v9; // al
  KIRQL v10; // bl

  v5 = *((_QWORD *)Context + 564);
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_qD(0x15u, &WPP_fb3ee79da3763fe19127143656620238_Traceguids, (__int64)Context, IoStatus->Status);
  ndisLogMiniportEvent((__int64)Context, 0xFu);
  if ( IoStatus->Status < 0 )
  {
    NdisUnexpectedSsError((struct _NDIS_MINIPORT_BLOCK *)Context, 0x3FBu);
    if ( (unsigned __int8)byte_1C00895D6 >= 2u )
      WPP_SF_dq(0x17u, &WPP_fb3ee79da3763fe19127143656620238_Traceguids, IoStatus->Status, Context);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
    *(_DWORD *)(v5 + 504) &= ~8u;
    v10 = v9;
    KeSetEvent((PRKEVENT)(v5 + 176), 0, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)v5, v10);
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
    *(_DWORD *)(v5 + 504) = *(_DWORD *)(v5 + 504) & 0xFFFFFFE7 | 0x10;
    KeClearEvent((PRKEVENT)(v5 + 248));
    KeSetEvent((PRKEVENT)(v5 + 176), 0, 0);
    ++*(_DWORD *)(v5 + 644);
    *(_QWORD *)(v5 + 648) = MEMORY[0xFFFFF78000000014];
    KeReleaseSpinLock((PKSPIN_LOCK)v5, v7);
    NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)Context, *(_DWORD *)(v5 + 696));
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxqq(
        v8,
        &DevicePowerStateChange,
        (const GUID *)Context + 254,
        (unsigned __int64)Context + 4064,
        *((_DWORD *)Context + 1028),
        *((_QWORD *)Context + 510),
        1,
        *(_DWORD *)(v5 + 696));
    if ( (unsigned __int8)byte_1C00895D0 >= 4u )
      WPP_SF_qZ(
        0x16u,
        &WPP_fb3ee79da3763fe19127143656620238_Traceguids,
        (__int64)Context,
        *((unsigned __int16 **)Context + 489));
  }
}

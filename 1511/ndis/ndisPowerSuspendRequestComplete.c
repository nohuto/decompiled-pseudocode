/*
 * XREFs of ndisPowerSuspendRequestComplete @ 0x1C00668B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001273C (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisLogMiniportEvent @ 0x1C00194EC (ndisLogMiniportEvent.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_jqxqq @ 0x1C003AED0 (Template_jqxqq.c)
 *     WPP_SF_dq @ 0x1C0047594 (WPP_SF_dq.c)
 *     WPP_SF_qZ @ 0x1C004B56C (WPP_SF_qZ.c)
 *     NdisUnexpectedSsError @ 0x1C00663C0 (NdisUnexpectedSsError.c)
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
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_qD(0x15u, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, (__int64)Context, IoStatus->Status);
  ndisLogMiniportEvent((__int64)Context, 0xFu);
  if ( IoStatus->Status < 0 )
  {
    NdisUnexpectedSsError((struct _NDIS_MINIPORT_BLOCK *)Context, 0x3E2u);
    if ( (unsigned __int8)byte_1C0083716 >= 2u )
      WPP_SF_dq(0x17u, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, IoStatus->Status, Context);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
    *(_DWORD *)(v5 + 480) &= ~8u;
    v10 = v9;
    KeSetEvent((PRKEVENT)(v5 + 176), 0, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)v5, v10);
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
    *(_DWORD *)(v5 + 480) = *(_DWORD *)(v5 + 480) & 0xFFFFFFE7 | 0x10;
    KeClearEvent((PRKEVENT)(v5 + 248));
    KeSetEvent((PRKEVENT)(v5 + 176), 0, 0);
    ++*(_DWORD *)(v5 + 620);
    *(_QWORD *)(v5 + 624) = MEMORY[0xFFFFF78000000014];
    KeReleaseSpinLock((PKSPIN_LOCK)v5, v7);
    NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)Context, *(_DWORD *)(v5 + 672));
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxqq(
        v8,
        &DevicePowerStateChange,
        (const GUID *)Context + 254,
        (unsigned __int64)Context + 4064,
        *((_DWORD *)Context + 1028),
        *((_QWORD *)Context + 510),
        1,
        *(_DWORD *)(v5 + 672));
    if ( (unsigned __int8)byte_1C0083710 >= 4u )
      WPP_SF_qZ(0x16u, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, (__int64)Context, *((__int64 **)Context + 489));
  }
}

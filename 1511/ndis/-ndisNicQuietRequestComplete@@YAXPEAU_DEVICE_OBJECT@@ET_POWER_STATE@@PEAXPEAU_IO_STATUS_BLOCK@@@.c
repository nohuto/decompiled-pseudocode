/*
 * XREFs of ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0069AE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_dq @ 0x1C0047594 (WPP_SF_dq.c)
 *     WPP_SF_qZ @ 0x1C004B56C (WPP_SF_qZ.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C00683E8 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x1C0068F6C (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 */

void __fastcall ndisNicQuietRequestComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v5; // rbx
  KIRQL v7; // al
  int v8; // ecx
  KIRQL v9; // bp
  __int64 v10; // rax

  v5 = *((_QWORD *)Context + 565);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5);
  v8 = 4;
  v9 = v7;
  if ( IoStatus->Status >= 0 )
    v8 = 2;
  *(_DWORD *)(v5 + 368) = v8;
  KeSetEvent((PRKEVENT)(v5 + 384), 0, 0);
  if ( ndisCsResiliency )
  {
    v10 = *(_QWORD *)(v5 + 784);
    if ( v10 )
      *(_QWORD *)(v5 + 776) = *(_QWORD *)(v5 + 776) - v10 + MEMORY[0xFFFFF78000000008];
  }
  ndisCloseTimeInterval((unsigned __int64 *)(v5 + 784), (unsigned __int64 *)(v5 + 768));
  KeReleaseSpinLock((PKSPIN_LOCK)v5, v9);
  if ( IoStatus->Status >= 0 )
  {
    if ( (unsigned __int8)byte_1C0083710 >= 4u )
      WPP_SF_qZ(0x1Fu, &WPP_8e7c3e95f556d2aee27bc2d35efa6f2a_Traceguids, (__int64)Context, *((__int64 **)Context + 489));
  }
  else
  {
    NdisUnexpectedAoAcError((struct _NDIS_MINIPORT_BLOCK *)Context, 0x6B3u);
    if ( (unsigned __int8)byte_1C0083715 >= 2u )
      WPP_SF_dq(0x1Eu, &WPP_8e7c3e95f556d2aee27bc2d35efa6f2a_Traceguids, IoStatus->Status, Context);
  }
}

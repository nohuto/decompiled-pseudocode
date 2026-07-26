/*
 * XREFs of ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C006E5E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C006CE04 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x1C006D9CC (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 */

void __fastcall ndisNicQuietRequestComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _NDIS_MINIPORT_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v7; // al
  int v8; // ecx
  KIRQL v9; // bp
  unsigned __int64 CurrentActiveStartTime; // rax

  AoAc = Context->AoAc;
  v7 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  v8 = 4;
  v9 = v7;
  if ( IoStatus->Status >= 0 )
    v8 = 2;
  AoAc->ActiveState = v8;
  KeSetEvent(&AoAc->PowerSuspendCompleteEvent, 0, 0);
  if ( ndisCsResiliency )
  {
    CurrentActiveStartTime = AoAc->CurrentActiveStartTime;
    if ( CurrentActiveStartTime )
      AoAc->TotalCsResiliencyTime = AoAc->TotalCsResiliencyTime - CurrentActiveStartTime + MEMORY[0xFFFFF78000000008];
  }
  ndisCloseTimeInterval(&AoAc->CurrentActiveStartTime, &AoAc->TotalCsActiveTime);
  KeReleaseSpinLock(&AoAc->Lock, v9);
  if ( IoStatus->Status >= 0 )
  {
    if ( (unsigned __int8)byte_1C00895D0 >= 4u )
      WPP_SF_qZ(
        0x1Fu,
        &WPP_1f3fc036deb630b8c59945bf71e899eb_Traceguids,
        (__int64)Context,
        &Context->pAdapterInstanceName->Length);
  }
  else
  {
    NdisUnexpectedAoAcError(Context, 0x6B2u);
    if ( (unsigned __int8)byte_1C00895D5 >= 2u )
      WPP_SF_dq(0x1Eu, &WPP_1f3fc036deb630b8c59945bf71e899eb_Traceguids, IoStatus->Status, Context);
  }
}

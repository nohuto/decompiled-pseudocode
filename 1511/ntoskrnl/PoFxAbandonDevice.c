/*
 * XREFs of PoFxAbandonDevice @ 0x1404A1158
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x1401F4D74 (PopFxAcpiUnregisterDevice.c)
 *     IopRemoveDevice @ 0x1404A0FEC (IopRemoveDevice.c)
 *     PnpDriverLoadingFailed @ 0x140549F80 (PnpDriverLoadingFailed.c)
 * Callees:
 *     PopFxReleaseAcpiRefDevice @ 0x1401EAEA4 (PopFxReleaseAcpiRefDevice.c)
 *     PopPluginAbandonDevice @ 0x1401EBB6C (PopPluginAbandonDevice.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopDiagTraceFxDevicePreparation @ 0x1404A1208 (PopDiagTraceFxDevicePreparation.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1404A1280 (PopFxUnregisterDeviceOrWait.c)
 */

void __fastcall PoFxAbandonDevice(__int64 a1)
{
  __int64 v2; // rdi
  ULONG_PTR v3; // rcx
  int v4; // eax
  void *v5; // rcx

  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 296) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 80);
    PopFxUnregisterDeviceOrWait();
    v3 = *(_QWORD *)(a1 + 128);
    if ( v3 )
      PopPluginAbandonDevice(v3, a1 + 280);
    PopDiagTraceFxDevicePreparation(a1, *(_QWORD *)(a1 + 128), a1 + 280, 0LL);
    *(_DWORD *)(a1 + 296) &= ~1u;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  v4 = *(_DWORD *)(a1 + 296);
  if ( (v4 & 2) != 0 )
  {
    v5 = *(void **)(a1 + 288);
    if ( *(void **)(a1 + 48) != v5 && v5 && (v4 & 0x2000) == 0 )
      ExFreePoolWithTag(v5, 0x4D584650u);
    *(_DWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 288) = 0LL;
    *(_DWORD *)(a1 + 296) &= ~2u;
  }
  if ( (*(_DWORD *)(a1 + 296) & 0x4000) != 0 )
  {
    PopFxReleaseAcpiRefDevice(v2, (void *)0x70466F50);
    *(_DWORD *)(a1 + 296) &= ~0x4000u;
  }
}

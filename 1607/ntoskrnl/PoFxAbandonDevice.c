/*
 * XREFs of PoFxAbandonDevice @ 0x1404C61AC
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x14020E838 (PopFxAcpiUnregisterDevice.c)
 *     IopRemoveDevice @ 0x1404C6038 (IopRemoveDevice.c)
 *     PnpDriverLoadingFailed @ 0x14057F858 (PnpDriverLoadingFailed.c)
 * Callees:
 *     PopFxReleaseAcpiRefDevice @ 0x140203878 (PopFxReleaseAcpiRefDevice.c)
 *     PopPluginAbandonDevice @ 0x140204530 (PopPluginAbandonDevice.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PopDiagTraceFxDevicePreparation @ 0x1404C7B14 (PopDiagTraceFxDevicePreparation.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1404C7B8C (PopFxUnregisterDeviceOrWait.c)
 */

void __fastcall PoFxAbandonDevice(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax
  ULONG_PTR v4; // rcx
  void *v5; // rcx

  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 296) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 80);
    PopFxUnregisterDeviceOrWait();
    v4 = *(_QWORD *)(a1 + 128);
    if ( v4 )
      PopPluginAbandonDevice(v4, a1 + 280);
    PopDiagTraceFxDevicePreparation(a1, *(_QWORD *)(a1 + 128), a1 + 280, 0LL);
    *(_DWORD *)(a1 + 296) &= ~1u;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  v3 = *(_DWORD *)(a1 + 296);
  if ( (v3 & 2) != 0 )
  {
    v5 = *(void **)(a1 + 288);
    if ( *(void **)(a1 + 48) != v5 && v5 && (v3 & 0x2000) == 0 )
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

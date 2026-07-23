/*
 * XREFs of PoFxAbandonDevice @ 0x1404849B4
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x14020E664 (PopFxAcpiUnregisterDevice.c)
 *     IopRemoveDevice @ 0x140484840 (IopRemoveDevice.c)
 *     PnpDriverLoadingFailed @ 0x14057FD04 (PnpDriverLoadingFailed.c)
 * Callees:
 *     PopFxReleaseAcpiRefDevice @ 0x1402036A4 (PopFxReleaseAcpiRefDevice.c)
 *     PopPluginAbandonDevice @ 0x14020435C (PopPluginAbandonDevice.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140483F08 (PopFxUnregisterDeviceOrWait.c)
 *     PopDiagTraceFxDevicePreparation @ 0x140483F5C (PopDiagTraceFxDevicePreparation.c)
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
    PopFxUnregisterDeviceOrWait((struct _KEVENT *)a1);
    v4 = *(_QWORD *)(a1 + 128);
    if ( v4 )
      PopPluginAbandonDevice(v4, a1 + 280);
    PopDiagTraceFxDevicePreparation(a1, *(_QWORD *)(a1 + 128), (unsigned __int16 *)(a1 + 280), 0);
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

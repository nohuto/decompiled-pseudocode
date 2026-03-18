/*
 * XREFs of PnpiCleanupForceActiveBothInterrupts @ 0x1C0055F54
 * Callers:
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F634 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C004FB94 (ACPIInitResetDeviceExtension.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C009FA38 (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

void __fastcall PnpiCleanupForceActiveBothInterrupts(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 648);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x44706341u);
    *(_QWORD *)(a1 + 648) = 0LL;
  }
  *(_DWORD *)(a1 + 656) = -1;
}

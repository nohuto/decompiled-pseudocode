/*
 * XREFs of PnpiCleanupForceActiveBothInterrupts @ 0x1C0040220
 * Callers:
 *     ACPIInitDeleteDeviceExtension @ 0x1C003C46C (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C003C93C (ACPIInitResetDeviceExtension.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C007E1C8 (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

void __fastcall PnpiCleanupForceActiveBothInterrupts(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 640);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x44706341u);
    *(_QWORD *)(a1 + 640) = 0LL;
  }
  *(_DWORD *)(a1 + 648) = -1;
}

/*
 * XREFs of RaidAdapterDevicePowerUpSrbComplete @ 0x1C0005C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterDevicePowerUpSrbComplete(__int64 a1)
{
  __int64 v1; // rdx
  IRP *v2; // rcx

  v1 = *(_QWORD *)(a1 + 208);
  v2 = *(IRP **)(a1 + 152);
  *(_BYTE *)(v1 + 4640) = 0;
  return RaidAdapterPowerUpDeviceCompletionLastStep(v2);
}

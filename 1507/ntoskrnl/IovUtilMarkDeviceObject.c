/*
 * XREFs of IovUtilMarkDeviceObject @ 0x14025B0A8
 * Callers:
 *     VfIoDeleteDevice @ 0x140742FD4 (VfIoDeleteDevice.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14074D3D8 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     IovpUtilMarkDeviceObject @ 0x140743B74 (IovpUtilMarkDeviceObject.c)
 */

__int64 __fastcall IovUtilMarkDeviceObject(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return IovpUtilMarkDeviceObject(a1, a2);
  return result;
}

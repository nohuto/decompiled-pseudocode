/*
 * XREFs of VerifierIoVolumeDeviceToDosName @ 0x140742E14
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

NTSTATUS __fastcall VerifierIoVolumeDeviceToDosName(PVOID VolumeDeviceObject, PUNICODE_STRING DosName)
{
  unsigned __int8 CurrentIrql; // al

  if ( (MmVerifierData & 0x10) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
      VerifierBugCheckIfAppropriate(0xC4u, 0xE5uLL, CurrentIrql, 0LL, 0LL);
  }
  return pXdvIoVolumeDeviceToDosName(VolumeDeviceObject, DosName);
}

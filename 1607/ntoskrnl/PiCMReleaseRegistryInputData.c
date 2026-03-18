/*
 * XREFs of PiCMReleaseRegistryInputData @ 0x1404F9E0C
 * Callers:
 *     PiCMOpenDeviceKey @ 0x1404D6418 (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x1404E6B44 (PiCMOpenClassKey.c)
 *     PiCMOpenObjectKey @ 0x1404F9B40 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140647E10 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C38B0 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseRegistryInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}

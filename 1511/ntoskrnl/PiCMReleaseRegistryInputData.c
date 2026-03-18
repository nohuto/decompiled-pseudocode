/*
 * XREFs of PiCMReleaseRegistryInputData @ 0x140442DCC
 * Callers:
 *     PiCMOpenObjectKey @ 0x140442BB8 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceKey @ 0x1404B28C0 (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x1404BE4F4 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14051A4C4 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMReleaseRegistryInputData(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag(v1, 0);
  return 0LL;
}

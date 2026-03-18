/*
 * XREFs of PiCMReleaseRegistryPropertyInputData @ 0x140443BAC
 * Callers:
 *     PiCMGetRegistryProperty @ 0x140443A00 (PiCMGetRegistryProperty.c)
 *     PiCMSetRegistryProperty @ 0x1406140E8 (PiCMSetRegistryProperty.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMReleaseRegistryPropertyInputData(__int64 a1)
{
  void *v2; // rcx
  char PreviousMode; // bl
  void *v4; // rcx

  v2 = *(void **)(a1 + 16);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( v2 && PreviousMode )
    ExFreePoolWithTag(v2, 0);
  v4 = *(void **)(a1 + 40);
  if ( v4 && PreviousMode )
    ExFreePoolWithTag(v4, 0);
  return 0LL;
}

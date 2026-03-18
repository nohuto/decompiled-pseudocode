/*
 * XREFs of PiCMReleaseRegistryPropertyInputData @ 0x140440A1C
 * Callers:
 *     PiCMGetRegistryProperty @ 0x140440870 (PiCMGetRegistryProperty.c)
 *     PiCMSetRegistryProperty @ 0x14058C0C0 (PiCMSetRegistryProperty.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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

/*
 * XREFs of PiCMReleasePropertyInputData @ 0x1404410D0
 * Callers:
 *     PiCMGetObjectProperty @ 0x140440E88 (PiCMGetObjectProperty.c)
 *     PiCMSetObjectProperty @ 0x1404DA470 (PiCMSetObjectProperty.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMReleasePropertyInputData(__int64 a1)
{
  void *v2; // rcx
  char PreviousMode; // bl
  void *v4; // rcx

  v2 = *(void **)(a1 + 16);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( v2 && PreviousMode )
    ExFreePoolWithTag(v2, 0);
  v4 = *(void **)(a1 + 56);
  if ( v4 && PreviousMode )
    ExFreePoolWithTag(v4, 0);
  return 0LL;
}

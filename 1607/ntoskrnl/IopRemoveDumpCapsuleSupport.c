/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x140143020
 * Callers:
 *     IoConfigureCrashDump @ 0x140142EA0 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14056916C (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 IopRemoveDumpCapsuleSupport()
{
  if ( CapsuleTriageDumpBlockInitialized == 1 )
  {
    if ( CapsuleTriageDumpBlock )
    {
      ExFreePoolWithTag(CapsuleTriageDumpBlock, 0);
      CapsuleTriageDumpBlock = 0LL;
    }
    CapsuleTriageDumpBlockInitialized = 0;
  }
  return 0LL;
}

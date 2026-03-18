/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x14013A67C
 * Callers:
 *     IoConfigureCrashDump @ 0x14013A5A8 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1405388F4 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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

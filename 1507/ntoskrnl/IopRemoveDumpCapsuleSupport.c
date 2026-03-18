/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x14016C07C
 * Callers:
 *     IoConfigureCrashDump @ 0x14016BF80 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1405B51F4 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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

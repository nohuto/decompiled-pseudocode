/*
 * XREFs of IopInitDumpCapsuleSupport @ 0x140141FF0
 * Callers:
 *     IoConfigureCrashDump @ 0x14013A5A8 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1405388F4 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopIsBitlockerOn @ 0x14014204C (IopIsBitlockerOn.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 IopInitDumpCapsuleSupport()
{
  PVOID PoolWithTag; // rax

  if ( CapsuleTriageDumpBlockInitialized || (unsigned __int8)IopIsBitlockerOn() )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x41800uLL, 0x706D4443u);
  CapsuleTriageDumpBlock = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x41800uLL);
    CapsuleTriageDumpBlockInitialized = 1;
    return 0LL;
  }
  return 3221225626LL;
}

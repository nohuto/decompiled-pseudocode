/*
 * XREFs of IopInitDumpCapsuleSupport @ 0x14014B880
 * Callers:
 *     IoConfigureCrashDump @ 0x140142EA0 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14056916C (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopIsBitlockerOn @ 0x14014B8DC (IopIsBitlockerOn.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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

/*
 * XREFs of IovCancelIrp @ 0x1406B4EFC
 * Callers:
 *     IoCancelIrp @ 0x1400C97FC (IoCancelIrp.c)
 * Callees:
 *     IovpLogStackTrace @ 0x1406B585C (IovpLogStackTrace.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1406C806C (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1406C81E4 (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdBeforeCancelIrp @ 0x1406C8540 (ViWdBeforeCancelIrp.c)
 */

__int64 __fastcall IovCancelIrp(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

  IovpLogStackTrace(a1);
  result = VfIrpDatabaseEntryFindAndLock(a1);
  v3 = result;
  if ( result )
  {
    if ( *(_QWORD *)(result + 248) )
      ViWdBeforeCancelIrp();
    return VfIrpDatabaseEntryReleaseLock(v3);
  }
  return result;
}

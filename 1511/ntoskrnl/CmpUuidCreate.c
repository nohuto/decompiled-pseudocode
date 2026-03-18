/*
 * XREFs of CmpUuidCreate @ 0x14048548C
 * Callers:
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     CmpStartRMLogs @ 0x140484E88 (CmpStartRMLogs.c)
 *     CmSaveKey @ 0x1405E9ED0 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1405EA0F8 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x1405EA5F4 (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x140487608 (ExUuidCreate.c)
 */

NTSTATUS __fastcall CmpUuidCreate(UUID *Uuid)
{
  NTSTATUS result; // eax
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    result = ExUuidCreate(Uuid);
    if ( result != -1073741267 )
      break;
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}

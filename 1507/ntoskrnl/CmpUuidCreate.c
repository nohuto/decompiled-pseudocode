/*
 * XREFs of CmpUuidCreate @ 0x1404EB848
 * Callers:
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     CmpStartRMLogs @ 0x1404F2804 (CmpStartRMLogs.c)
 *     CmSaveKey @ 0x140661710 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140661980 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140661E7C (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x1404EBB90 (ExUuidCreate.c)
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

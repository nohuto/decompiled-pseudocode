/*
 * XREFs of CmpUuidCreate @ 0x14049F598
 * Callers:
 *     CmpInitCmRM @ 0x14049EB58 (CmpInitCmRM.c)
 *     CmpStartRMLogs @ 0x1404DA6EC (CmpStartRMLogs.c)
 *     CmSaveKey @ 0x14060CC1C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14060CE74 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14060D2DC (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x1404A2404 (ExUuidCreate.c)
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

/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x1404C8260
 * Callers:
 *     NtAllocateUuids @ 0x1404C80B0 (NtAllocateUuids.c)
 *     ExUuidCreate @ 0x14051A810 (ExUuidCreate.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x140580C28 (ExpUuidSaveSequenceNumber.c)
 */

__int64 ExpUuidSaveSequenceNumberIf()
{
  __int64 result; // rax

  result = 0LL;
  if ( ExpUuidSequenceNumberNotSaved == 1 )
  {
    result = ExpUuidSaveSequenceNumber();
    if ( (int)result >= 0 )
      ExpUuidSequenceNumberNotSaved = 0;
  }
  return result;
}

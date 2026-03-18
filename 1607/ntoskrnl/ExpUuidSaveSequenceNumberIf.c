/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x1404E5644
 * Callers:
 *     ExUuidCreate @ 0x1404A2404 (ExUuidCreate.c)
 *     NtAllocateUuids @ 0x1404E5494 (NtAllocateUuids.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x14058077C (ExpUuidSaveSequenceNumber.c)
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

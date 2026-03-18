/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x14055593C
 * Callers:
 *     ExUuidCreate @ 0x1404EBB90 (ExUuidCreate.c)
 *     NtAllocateUuids @ 0x140555758 (NtAllocateUuids.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x1405C20C4 (ExpUuidSaveSequenceNumber.c)
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

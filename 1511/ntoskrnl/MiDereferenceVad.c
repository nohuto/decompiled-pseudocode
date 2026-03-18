/*
 * XREFs of MiDereferenceVad @ 0x1401E1DB4
 * Callers:
 *     NtAreMappedFilesTheSame @ 0x1403E8334 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 */

_BOOL8 __fastcall MiDereferenceVad(__int64 a1)
{
  _BOOL8 result; // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFFF) != 1 )
    return 0LL;
  result = MiVadDeleted(a1);
  if ( !result )
    return 0LL;
  return result;
}

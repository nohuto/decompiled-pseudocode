/*
 * XREFs of MiDereferenceVad @ 0x14022F078
 * Callers:
 *     NtAreMappedFilesTheSame @ 0x140551204 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDereferenceVad(__int64 a1)
{
  return _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFFF) == 1 && *(int *)(a1 + 48) < 0;
}

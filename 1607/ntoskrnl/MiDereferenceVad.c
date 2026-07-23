/*
 * XREFs of MiDereferenceVad @ 0x1401F7528
 * Callers:
 *     NtAreMappedFilesTheSame @ 0x1405298F4 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDereferenceVad(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFFF);
  if ( (_DWORD)result != 1 || (*(_DWORD *)(a1 + 48) & 0x80000) == 0 )
    return 0LL;
  return result;
}

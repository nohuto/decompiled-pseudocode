/*
 * XREFs of RtlDeleteBarrier @ 0x1800D3B40
 * Callers:
 *     <none>
 * Callees:
 *     NtClose @ 0x1800939F0 (NtClose.c)
 */

NTSTATUS __cdecl RtlDeleteBarrier(PRTL_BARRIER Barrier)
{
  NTSTATUS result; // eax
  ULONG_PTR *Reserved3; // rbx
  __int64 v3; // rdi

  while ( 1 )
  {
    result = Barrier->Reserved1 & 0x7FFFFFFF;
    if ( Barrier->Reserved2 == result )
      break;
    _mm_pause();
  }
  Reserved3 = Barrier->Reserved3;
  v3 = 2LL;
  do
  {
    if ( (*Reserved3 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      result = NtClose((HANDLE)(*Reserved3 & 0xFFFFFFFFFFFFFFFEuLL));
    ++Reserved3;
    --v3;
  }
  while ( v3 );
  return result;
}

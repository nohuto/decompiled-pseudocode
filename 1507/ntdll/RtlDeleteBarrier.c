/*
 * XREFs of RtlDeleteBarrier @ 0x1800D3B40
 * Callers:
 *     <none>
 * Callees:
 *     NtClose @ 0x1800939F0 (NtClose.c)
 */

int __fastcall RtlDeleteBarrier(_DWORD *a1)
{
  int result; // eax
  _QWORD *v2; // rbx
  __int64 v3; // rdi

  while ( 1 )
  {
    result = *a1 & 0x7FFFFFFF;
    if ( a1[1] == result )
      break;
    _mm_pause();
  }
  v2 = a1 + 2;
  v3 = 2LL;
  do
  {
    if ( (*v2 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      result = NtClose((HANDLE)(*v2 & 0xFFFFFFFFFFFFFFFEuLL));
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}

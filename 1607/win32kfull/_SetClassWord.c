/*
 * XREFs of _SetClassWord @ 0x1C01DF080
 * Callers:
 *     NtUserSetClassWord @ 0x1C0219650 (NtUserSetClassWord.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall SetClassWord(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 result; // rax
  _QWORD *i; // rcx

  v4 = (int)a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) != PsGetCurrentProcessWin32Process(a1, a2) )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 64LL);
  if ( (int)v4 < 0 || (int)v4 + 2 < (unsigned int)v4 || (unsigned int)(v4 + 2) > *(_DWORD *)(v6 + 96) )
  {
    UserSetLastError(1413LL);
    return 0LL;
  }
  result = *(unsigned __int16 *)(v4 + v6 + 160);
  *(_WORD *)(v4 + v6 + 160) = a3;
  for ( i = *(_QWORD **)(v6 + 72); i; i = (_QWORD *)*i )
    *(_WORD *)((char *)i + v4 + 160) = a3;
  return result;
}

/*
 * XREFs of xxxSetClassLongPtr @ 0x1C01255F0
 * Callers:
 *     NtUserSetClassLongPtr @ 0x1C0125400 (NtUserSetClassLongPtr.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxSetClassData @ 0x1C0125654 (xxxSetClassData.c)
 */

__int64 __fastcall xxxSetClassLongPtr(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *i; // rcx

  v5 = (int)a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) != PsGetCurrentProcessWin32Process(a1, a2) )
  {
    v9 = 5LL;
LABEL_12:
    UserSetLastError(v9);
    return 0LL;
  }
  if ( (int)v5 < 0 )
    return xxxSetClassData(a1, (unsigned int)v5, a3, a4);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 64LL);
  if ( (int)v5 + 8 < (unsigned int)v5 || (unsigned int)(v5 + 8) > *(_DWORD *)(v10 + 96) )
  {
    v9 = 1413LL;
    goto LABEL_12;
  }
  result = *(_QWORD *)(v5 + v10 + 160);
  *(_QWORD *)(v5 + v10 + 160) = a3;
  for ( i = *(_QWORD **)(v10 + 72); i; i = (_QWORD *)*i )
    *(_QWORD *)((char *)i + v5 + 160) = a3;
  return result;
}

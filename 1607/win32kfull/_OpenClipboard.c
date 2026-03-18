/*
 * XREFs of _OpenClipboard @ 0x1C00F8FE4
 * Callers:
 *     NtUserOpenClipboard @ 0x1C00F8EE0 (NtUserOpenClipboard.c)
 *     xxxSnapWindow @ 0x1C014F320 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00F9194 (CheckClipboardAccess.c)
 */

__int64 __fastcall OpenClipboard(__int64 a1, int *a2)
{
  int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rcx

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a1 && *(char *)(a1 + 43) < 0 )
  {
    v11 = 87LL;
LABEL_16:
    UserSetLastError(v11);
    return 0LL;
  }
  v5 = CheckClipboardAccess();
  v6 = v5;
  if ( v5 )
  {
    v7 = v5 + 64;
    v8 = *(_QWORD *)(v5 + 64);
    if ( a1 == v8 )
    {
      if ( gptiCurrent == *(_QWORD *)(v6 + 48) )
        return 1LL;
      if ( a1 == v8 )
        goto LABEL_8;
    }
    if ( !*(_QWORD *)(v6 + 48) )
    {
LABEL_8:
      HMAssignmentLock(v7, a1);
      *(_QWORD *)(v6 + 48) = gptiCurrent;
      if ( a2 )
      {
        v9 = *(_QWORD *)(v6 + 80);
        if ( !v9 || *(_QWORD *)(gptiCurrent + 376LL) != *(_QWORD *)(*(_QWORD *)(v9 + 16) + 376LL) )
          v2 = 1;
        *a2 = v2;
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 672LL) = *(_DWORD *)(v6 + 108);
      }
      return 1LL;
    }
    v11 = 5LL;
    goto LABEL_16;
  }
  return 0LL;
}

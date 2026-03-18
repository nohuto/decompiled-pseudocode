/*
 * XREFs of ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0061E90
 * Callers:
 *     NtUserHideCaret @ 0x1C0061DD0 (NtUserHideCaret.c)
 *     NtUserShowCaret @ 0x1C0061E30 (NtUserShowCaret.c)
 *     zzzDestroyCaret @ 0x1C0077EF0 (zzzDestroyCaret.c)
 *     zzzSetCaretPos @ 0x1C0078090 (zzzSetCaretPos.c)
 *     zzzHideCaret @ 0x1C0226510 (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C0226530 (zzzShowCaret.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C00911E4 (PtiFromThreadId.c)
 */

__int64 __fastcall UT_CaretSet(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  unsigned int ThreadId; // eax
  __int64 v6; // rcx
  __int64 v7; // rax

  v1 = 0;
  v3 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( *(_QWORD *)(v3 + 248)
    && ((ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
         v6 = *(unsigned int *)(v3 + 296),
         (_DWORD)v6 == ThreadId)
     || (v7 = PtiFromThreadId(v6)) != 0 && *(_QWORD *)(gptiCurrent + 384LL) == *(_QWORD *)(v7 + 384)) )
  {
    if ( a1 )
    {
      LOBYTE(v1) = a1 == *(struct tagWND **)(v3 + 248);
      return v1;
    }
    else
    {
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(5LL);
    return 0LL;
  }
}

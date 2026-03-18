/*
 * XREFs of ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0050310
 * Callers:
 *     NtUserHideCaret @ 0x1C0050250 (NtUserHideCaret.c)
 *     NtUserShowCaret @ 0x1C00502B0 (NtUserShowCaret.c)
 *     zzzDestroyCaret @ 0x1C00CA0D0 (zzzDestroyCaret.c)
 *     zzzSetCaretPos @ 0x1C00CDD00 (zzzSetCaretPos.c)
 *     zzzHideCaret @ 0x1C02268A8 (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C02268C8 (zzzShowCaret.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C0065AC8 (PtiFromThreadId.c)
 */

__int64 __fastcall UT_CaretSet(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  __int64 v5; // rax

  v1 = 0;
  v3 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(v3 + 248)
    && (*(_DWORD *)(v3 + 296) == (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent)
     || (v5 = PtiFromThreadId()) != 0 && *(_QWORD *)(gptiCurrent + 376LL) == *(_QWORD *)(v5 + 376)) )
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

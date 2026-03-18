/*
 * XREFs of ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00AB9C4
 * Callers:
 *     zzzSetCaretPos @ 0x1C00AB760 (zzzSetCaretPos.c)
 *     zzzHideCaret @ 0x1C00AB924 (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C00AB9A4 (zzzShowCaret.c)
 *     zzzDestroyCaret @ 0x1C0123130 (zzzDestroyCaret.c)
 * Callees:
 *     PtiFromThreadId @ 0x1C0057448 (PtiFromThreadId.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall UT_CaretSet(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  unsigned int ThreadId; // eax
  int v5; // ecx
  __int64 v7; // rax

  v1 = 0;
  v3 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(v3 + 256)
    && ((ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent), v5 = *(_DWORD *)(v3 + 304), v5 == ThreadId)
     || (v7 = PtiFromThreadId(v5)) != 0 && *(_QWORD *)(gptiCurrent + 376LL) == *(_QWORD *)(v7 + 376)) )
  {
    if ( a1 )
    {
      LOBYTE(v1) = a1 == *(struct tagWND **)(v3 + 256);
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

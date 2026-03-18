/*
 * XREFs of ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E6CB4
 * Callers:
 *     zzzUnhookWindowsHookEx @ 0x1C0049B20 (zzzUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C0049CE8 (zzzSetWindowsHookEx.c)
 *     zzzRegisterSystemThread @ 0x1C01247A0 (zzzRegisterSystemThread.c)
 * Callees:
 *     zzzReattachThreads @ 0x1C004392C (zzzReattachThreads.c)
 */

__int64 __fastcall zzzJournalAttach(struct tagTHREADINFO *a1, int a2)
{
  char v2; // bl
  __int64 result; // rax
  _QWORD **v5; // rdx
  _QWORD *i; // rcx

  v2 = 0;
  if ( a2 )
  {
    result = AllocQueue(a1);
    if ( !result )
      return result;
    v5 = (_QWORD **)(*((_QWORD *)a1 + 52) + 160LL);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
    {
      if ( (*(_DWORD *)(i - 27) & 0x81) == 0 )
      {
        *(i - 10) = result;
        ++*(_DWORD *)(result + 336);
      }
    }
    v2 = 1;
  }
  zzzReattachThreads(v2, 0LL, 0LL);
  return 1LL;
}

/*
 * XREFs of ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01DD8E4
 * Callers:
 *     zzzUnhookWindowsHookEx @ 0x1C00A4690 (zzzUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C00A4854 (zzzSetWindowsHookEx.c)
 *     zzzRegisterSystemThread @ 0x1C0152EA0 (zzzRegisterSystemThread.c)
 * Callees:
 *     zzzReattachThreads @ 0x1C00DB9C8 (zzzReattachThreads.c)
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
    v5 = (_QWORD **)(*((_QWORD *)a1 + 51) + 160LL);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
    {
      if ( (*(_DWORD *)(i - 27) & 0x81) == 0 )
      {
        *(i - 10) = result;
        ++*(_DWORD *)(result + 344);
      }
    }
    v2 = 1;
  }
  zzzReattachThreads(v2, 0LL, 0LL);
  return 1LL;
}

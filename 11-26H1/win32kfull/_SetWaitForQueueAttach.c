/*
 * XREFs of _SetWaitForQueueAttach @ 0x140258310
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1400226D0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     NtUserSetWaitForQueueAttach @ 0x1402BE390 (NtUserSetWaitForQueueAttach.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall SetWaitForQueueAttach(__int64 a1)
{
  __int64 v1; // rbx
  struct tagTHREADINFO *v2; // rax

  v1 = (int)a1;
  if ( ((_DWORD)a1 != 0) != (_DWORD)a1 )
    return 0LL;
  v2 = PtiCurrent(a1);
  *((_QWORD *)v2 + 170) = (v1 << 10) ^ (*((_QWORD *)v2 + 170) ^ (v1 << 10)) & 0xFFFFFFFFFFFFFBFFuLL;
  return 1LL;
}

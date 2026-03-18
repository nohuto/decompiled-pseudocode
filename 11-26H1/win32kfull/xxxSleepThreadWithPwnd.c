/*
 * XREFs of xxxSleepThreadWithPwnd @ 0x1401B9E80
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140023380 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1400237A0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall xxxSleepThreadWithPwnd(__int64 a1, unsigned int a2)
{
  int v2; // esi
  struct tagTHREADINFO **v4; // rbx
  unsigned int v5; // edi

  v2 = 0;
  v4 = (struct tagTHREADINFO **)a1;
  if ( (a2 & 7) == 7 || (a2 & 6) != 0 && (a1 = *((_QWORD *)PtiCurrent(a1) + 58), *(_QWORD *)(a1 + 112)) )
  {
    if ( v4[2] == PtiCurrent(a1) )
    {
      v2 = 1;
      xxxUpdateInputHangInfo((struct tagWND *)v4, 0);
    }
  }
  v5 = xxxRealSleepThread(a2, 0, 1, 0, 0LL);
  if ( v2 )
    xxxUpdateInputHangInfo((struct tagWND *)v4, 1);
  return v5;
}

/*
 * XREFs of ?xxxMKMouseMove@@YAHG@Z @ 0x1C01EEA10
 * Callers:
 *     <none>
 * Callees:
 *     QueueMouseEvent @ 0x1C0084FBC (QueueMouseEvent.c)
 *     xxxMoveEvent @ 0x1C0088630 (xxxMoveEvent.c)
 *     SetRITTimer @ 0x1C00F4780 (SetRITTimer.c)
 */

__int64 __fastcall xxxMKMouseMove(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  LARGE_INTEGER PerformanceCounter; // rax
  void (__fastcall *v6)(struct tagWND *, unsigned int, unsigned __int64, __int64); // r8
  struct tagPOINT v8; // [rsp+20h] [rbp-78h]
  __int64 v9; // [rsp+50h] [rbp-48h]

  if ( (gdwPUDFlags & 0x2000) == 0 || !gtmridMKMoveCursor )
  {
    v2 = (char)a1;
    LOWORD(a1) = BYTE1(a1);
    gMKDeltaX = v2;
    gMKDeltaY = (char)a1;
    UserSessionSwitchLeaveCrit(a1, a2);
    if ( (xmmword_1C032229C & 0x40) != 0
      && (((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) & 0xC) != 0 )
    {
      v3 = 4 * gMKDeltaY * (unsigned __int8)byte_1C0321E52;
      v4 = 4 * gMKDeltaX * (unsigned __int8)byte_1C0321E52;
    }
    else
    {
      v3 = gMKDeltaY;
      v4 = gMKDeltaX;
    }
    xxxMoveEvent(v4, v3, 0, 0LL, v8, 0LL, 0LL, 0, 0LL, 0, v9, 1);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    QueueMouseEvent(
      0,
      0,
      0LL,
      *(_QWORD *)&gptCursorAsync,
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
      PerformanceCounter.QuadPart,
      0LL,
      0LL,
      0LL,
      0,
      1,
      0,
      0,
      0,
      0,
      0,
      0LL,
      0LL);
    EnterCrit(0LL, 1LL);
    if ( !HIDWORD(xmmword_1C03222CC) || (gdwPUDFlags & 0x2000) != 0 )
    {
      v6 = xxxMKMoveConstCursorTimer;
      if ( gMouseCursor[0] )
        v6 = xxxMKMoveAccelCursorTimer;
      giMouseMoveTable = 0;
      gtmridMKMoveCursor = SetRITTimer(gtmridMKMoveCursor, 0x32u, (__int64)v6, 0);
    }
  }
  return 0LL;
}

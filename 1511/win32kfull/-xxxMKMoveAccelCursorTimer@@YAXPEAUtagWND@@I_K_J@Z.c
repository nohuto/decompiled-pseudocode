/*
 * XREFs of ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EEBC0
 * Callers:
 *     <none>
 * Callees:
 *     QueueMouseEvent @ 0x1C0084FBC (QueueMouseEvent.c)
 *     xxxMoveEvent @ 0x1C0088630 (xxxMoveEvent.c)
 *     SetRITTimer @ 0x1C00F4780 (SetRITTimer.c)
 */

void __fastcall xxxMKMoveAccelCursorTimer(unsigned __int64 a1, unsigned __int8 *a2)
{
  char v2; // al
  int v3; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  struct tagPOINT v5; // [rsp+20h] [rbp-78h]
  __int64 v6; // [rsp+50h] [rbp-48h]

  if ( (xmmword_1C032229C & 0x40) != 0 )
  {
    v2 = gLockBits | gLatchBits | gPhysModifierState;
    if ( (v2 & 3) != 0 )
    {
      v3 = 1;
LABEL_10:
      UserSessionSwitchLeaveCrit(a1, a2);
      xxxMoveEvent(v3 * gMKDeltaX, v3 * gMKDeltaY, 0, 0LL, v5, 0LL, 0LL, 0, 0LL, 0, v6, 1);
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
      return;
    }
    if ( (v2 & 0xC) != 0 )
    {
      v3 = 4 * (unsigned __int8)byte_1C0321E52;
      goto LABEL_10;
    }
  }
  if ( giMouseMoveTable >= (unsigned int)(unsigned __int8)gMouseCursor[0] )
  {
    v3 = (unsigned __int8)byte_1C0321E52;
    giMouseMoveTable = 1;
    gtmridMKMoveCursor = SetRITTimer(gtmridMKMoveCursor, 0x32u, (__int64)xxxMKMoveConstCursorTimer, 0);
  }
  else
  {
    a2 = byte_1C0321DD1;
    v3 = byte_1C0321DD1[giMouseMoveTable];
    a1 = (unsigned int)++giMouseMoveTable;
  }
  if ( v3 )
    goto LABEL_10;
}

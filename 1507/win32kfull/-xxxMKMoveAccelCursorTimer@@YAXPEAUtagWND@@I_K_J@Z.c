/*
 * XREFs of ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE6A0
 * Callers:
 *     <none>
 * Callees:
 *     QueueMouseEvent @ 0x1C004AE08 (QueueMouseEvent.c)
 *     SetRITTimer @ 0x1C0079F80 (SetRITTimer.c)
 *     xxxMoveEvent @ 0x1C00F6C78 (xxxMoveEvent.c)
 */

void __fastcall xxxMKMoveAccelCursorTimer(unsigned __int64 a1, unsigned __int8 *a2)
{
  char v2; // al
  int v3; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  struct tagPOINT v5; // [rsp+20h] [rbp-78h]
  __int64 v6; // [rsp+50h] [rbp-48h]

  if ( (xmmword_1C0323904 & 0x40) != 0 )
  {
    v2 = gLockBits | gLatchBits | gPhysModifierState;
    if ( (v2 & 3) != 0 )
    {
      v3 = 1;
LABEL_10:
      UserSessionSwitchLeaveCrit(a1, a2);
      xxxMoveEvent(v3 * gMKDeltaX, v3 * gMKDeltaY, 0, 0LL, v5, 0LL, 0LL, 0LL, 0LL, 0, v6, 1);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      QueueMouseEvent(
        0,
        0,
        0LL,
        *(_QWORD *)&gptCursorAsync,
        (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24),
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
      EnterCrit(1LL);
      return;
    }
    if ( (v2 & 0xC) != 0 )
    {
      v3 = 4 * (unsigned __int8)byte_1C03235F2;
      goto LABEL_10;
    }
  }
  if ( giMouseMoveTable >= (unsigned int)(unsigned __int8)gMouseCursor[0] )
  {
    v3 = (unsigned __int8)byte_1C03235F2;
    giMouseMoveTable = 1;
    gtmridMKMoveCursor = SetRITTimer(gtmridMKMoveCursor, 50, (int)xxxMKMoveConstCursorTimer, 0);
  }
  else
  {
    a2 = byte_1C0323571;
    v3 = byte_1C0323571[giMouseMoveTable];
    a1 = (unsigned int)++giMouseMoveTable;
  }
  if ( v3 )
    goto LABEL_10;
}

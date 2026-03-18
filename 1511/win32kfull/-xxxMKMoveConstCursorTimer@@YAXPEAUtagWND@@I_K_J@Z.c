/*
 * XREFs of ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EED50
 * Callers:
 *     <none>
 * Callees:
 *     QueueMouseEvent @ 0x1C0084FBC (QueueMouseEvent.c)
 *     xxxMoveEvent @ 0x1C0088630 (xxxMoveEvent.c)
 */

void __fastcall xxxMKMoveConstCursorTimer(struct tagWND *a1, __int64 a2)
{
  char v2; // al
  int v3; // ebx
  unsigned int v4; // edx
  LARGE_INTEGER PerformanceCounter; // rax
  struct tagPOINT v6; // [rsp+20h] [rbp-78h]
  __int64 v7; // [rsp+50h] [rbp-48h]

  if ( (xmmword_1C032229C & 0x40) == 0 )
    goto LABEL_6;
  v2 = gLockBits | gLatchBits | gPhysModifierState;
  if ( (v2 & 3) == 0 )
  {
    if ( (v2 & 0xC) != 0 )
    {
      v3 = 4 * (unsigned __int8)byte_1C0321E52[0];
      goto LABEL_7;
    }
LABEL_6:
    v4 = giMouseMoveTable % (unsigned int)(unsigned __int8)byte_1C0321E51;
    a1 = (struct tagWND *)byte_1C0321E52;
    v3 = (unsigned __int8)byte_1C0321E52[v4];
    a2 = v4 + 1;
    giMouseMoveTable = a2;
    if ( !v3 )
      return;
    goto LABEL_7;
  }
  v3 = 1;
LABEL_7:
  UserSessionSwitchLeaveCrit(a1, a2);
  xxxMoveEvent(v3 * gMKDeltaX, v3 * gMKDeltaY, 0, 0LL, v6, 0LL, 0LL, 0, 0LL, 0, v7, 1);
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
}

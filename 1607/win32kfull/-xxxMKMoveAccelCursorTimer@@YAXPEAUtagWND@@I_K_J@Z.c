/*
 * XREFs of ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4DF0
 * Callers:
 *     <none>
 * Callees:
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 *     QueueMouseEvent @ 0x1C00E0E7C (QueueMouseEvent.c)
 *     xxxMoveEvent @ 0x1C011E61C (xxxMoveEvent.c)
 */

void __fastcall xxxMKMoveAccelCursorTimer(unsigned __int64 a1)
{
  char v1; // al
  int v2; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-78h]
  __int64 v5; // [rsp+50h] [rbp-48h]

  if ( (xmmword_1C0326F04 & 0x40) == 0 )
    goto LABEL_6;
  v1 = gLockBits | gLatchBits | gPhysModifierState;
  if ( (v1 & 3) == 0 )
  {
    if ( (v1 & 0xC) != 0 )
    {
      v2 = 4 * (unsigned __int8)byte_1C03279E2;
      goto LABEL_10;
    }
LABEL_6:
    if ( giMouseMoveTable >= (unsigned int)(unsigned __int8)gMouseCursor[0] )
    {
      v2 = (unsigned __int8)byte_1C03279E2;
      giMouseMoveTable = 1;
      gtmridMKMoveCursor = SetRITTimer(gtmridMKMoveCursor, 0x32u, (__int64)xxxMKMoveConstCursorTimer, 0);
    }
    else
    {
      v2 = byte_1C0327961[giMouseMoveTable];
      a1 = (unsigned int)++giMouseMoveTable;
    }
    if ( !v2 )
      return;
    goto LABEL_10;
  }
  v2 = 1;
LABEL_10:
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
  xxxMoveEvent(
    v2 * gMKDeltaX,
    v2 * gMKDeltaY,
    0,
    0LL,
    (struct tagPOINT)BugCheckParameter4,
    0LL,
    0LL,
    0LL,
    0LL,
    0,
    v5,
    1);
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
  EnterCrit(0LL, 1LL);
}

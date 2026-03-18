/*
 * XREFs of ?xxxMKMouseMove@@YAHG@Z @ 0x1C01E4C10
 * Callers:
 *     <none>
 * Callees:
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 *     QueueMouseEvent @ 0x1C00E0E7C (QueueMouseEvent.c)
 *     xxxMoveEvent @ 0x1C011E61C (xxxMoveEvent.c)
 */

__int64 __fastcall xxxMKMouseMove(__int64 a1)
{
  int v1; // eax
  int v2; // edx
  int v3; // ecx
  LARGE_INTEGER PerformanceCounter; // rax
  void (__fastcall *v5)(struct tagWND *, unsigned int, unsigned __int64, __int64); // r8
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-78h]
  __int64 v8; // [rsp+50h] [rbp-48h]

  if ( (gdwPUDFlags & 0x2000) == 0 || !gtmridMKMoveCursor )
  {
    v1 = (char)a1;
    LOWORD(a1) = BYTE1(a1);
    gMKDeltaX = v1;
    gMKDeltaY = (char)a1;
    if ( gdwInAtomicOperation )
    {
      a1 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
    if ( (xmmword_1C0326F04 & 0x40) != 0
      && (((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) & 0xC) != 0 )
    {
      v2 = 4 * gMKDeltaY * (unsigned __int8)byte_1C03279E2;
      v3 = 4 * gMKDeltaX * (unsigned __int8)byte_1C03279E2;
    }
    else
    {
      v2 = gMKDeltaY;
      v3 = gMKDeltaX;
    }
    xxxMoveEvent(v3, v2, 0, 0LL, (struct tagPOINT)BugCheckParameter4, 0LL, 0LL, 0LL, 0LL, 0, v8, 1);
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
    if ( !HIDWORD(xmmword_1C0326F34) || (gdwPUDFlags & 0x2000) != 0 )
    {
      v5 = xxxMKMoveConstCursorTimer;
      if ( gMouseCursor[0] )
        v5 = xxxMKMoveAccelCursorTimer;
      giMouseMoveTable = 0;
      gtmridMKMoveCursor = SetRITTimer(gtmridMKMoveCursor, 0x32u, (__int64)v5, 0);
    }
  }
  return 0LL;
}

/*
 * XREFs of KiSetPriorityFloor @ 0x14006C074
 * Callers:
 *     KiAbApplyWakeupBoost @ 0x14000C360 (KiAbApplyWakeupBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x14006BC64 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1400D0A40 (KiSetPriorityThread.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

char __fastcall KiSetPriorityFloor(ULONG_PTR BugCheckParameter1, __int64 a2, char a3)
{
  char v3; // di
  char v7; // cl
  char result; // al
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  v7 = *(_BYTE *)(a3 + BugCheckParameter1 + 1392);
  if ( v7 == -1 )
    KeBugCheckEx(0x157u, BugCheckParameter1, a3, 1uLL, 0LL);
  *(_BYTE *)(a3 + BugCheckParameter1 + 1392) = v7 + 1;
  *(_DWORD *)(BugCheckParameter1 + 1408) |= 1 << a3;
  if ( *(char *)(BugCheckParameter1 + 195) < a3 )
  {
    KiSetPriorityThread(BugCheckParameter1, a2, (unsigned int)a3);
    v3 = 1;
  }
  result = v3;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  return result;
}

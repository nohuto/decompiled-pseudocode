/*
 * XREFs of KiSetPriorityFloor @ 0x140031B9C
 * Callers:
 *     KiAbApplyWakeupBoost @ 0x140032408 (KiAbApplyWakeupBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x140032518 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14007BEA0 (KiSetPriorityThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
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
    KiSetPriorityThread(BugCheckParameter1, a2);
    v3 = 1;
  }
  result = v3;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  return result;
}

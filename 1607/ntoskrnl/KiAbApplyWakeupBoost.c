/*
 * XREFs of KiAbApplyWakeupBoost @ 0x14000C360
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x14000C668 (KeSetEventBoostPriorityEx.c)
 *     ExpWakePushLock @ 0x1400C6600 (ExpWakePushLock.c)
 * Callees:
 *     KiSetPriorityFloor @ 0x14006C074 (KiSetPriorityFloor.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KiReadyDeferredReadyList @ 0x1400D13F8 (KiReadyDeferredReadyList.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1402257A8 (EtwTraceAutoBoostSetFloor.c)
 */

__int64 __fastcall KiAbApplyWakeupBoost(char a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  __int16 v5; // ax
  char v6; // bp
  ULONG_PTR v7; // rsi
  unsigned __int8 CurrentIrql; // r12
  char v9; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  __int64 v12; // [rsp+88h] [rbp+10h] BYREF

  v3 = a3;
  if ( (*(_BYTE *)(a2 + 27) & 1) == 0 || *(_QWORD *)(a2 + 64) )
  {
    v5 = *(unsigned __int8 *)(a2 + 24);
    v12 = 0LL;
    v6 = 32;
    v7 = a2 - (unsigned __int16)(16 * v5);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v9 = a1;
    if ( a1 > 15 )
      v9 = 15;
    if ( *(char *)(v7 + 563) < v9 && ((1 << (v9 - 1)) & 0x7FFF & *(_WORD *)(a2 + 88)) == 0 )
    {
      v6 = *(_BYTE *)(v7 + 195);
      KiSetPriorityFloor(v7);
      a3 = 0x7FFFLL;
      *(_WORD *)(a2 + 88) ^= (*(_WORD *)(a2 + 88) ^ (*(_WORD *)(a2 + 88) & 0x7FFF | (1 << (v9 - 1)))) & 0x7FFF;
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v6 != 32 )
    {
      LOBYTE(a3) = v9;
      EtwTraceAutoBoostSetFloor(v7, *(_QWORD *)(a2 + 32) & 0xFFFFFFFC, a3, 0, 0, v6, 0, 0, 1, 0);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v3 )
    {
      return KiReadyDeferredReadyList(CurrentPrcb, &v12);
    }
    else
    {
      LOBYTE(a3) = CurrentIrql;
      return KiProcessDeferredReadyList(CurrentPrcb, &v12, a3);
    }
  }
  return result;
}

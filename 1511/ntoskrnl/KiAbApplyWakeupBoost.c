/*
 * XREFs of KiAbApplyWakeupBoost @ 0x140032408
 * Callers:
 *     ExpWakePushLock @ 0x140030B00 (ExpWakePushLock.c)
 *     KeSetEventBoostPriorityEx @ 0x14007CAE0 (KeSetEventBoostPriorityEx.c)
 * Callees:
 *     KiSetPriorityFloor @ 0x140031B9C (KiSetPriorityFloor.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiReadyDeferredReadyList @ 0x14007DD80 (KiReadyDeferredReadyList.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14020DAD8 (EtwTraceAutoBoostSetFloor.c)
 */

__int64 __fastcall KiAbApplyWakeupBoost(char a1, __int64 a2, int a3)
{
  __int64 v5; // r8
  __int16 v6; // ax
  char v7; // bp
  ULONG_PTR v8; // rsi
  unsigned __int8 CurrentIrql; // r12
  char v10; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  int v13; // eax
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  v5 = 1LL;
  if ( (*(_BYTE *)(a2 + 27) & 1) == 0 || *(_QWORD *)(a2 + 64) )
  {
    v6 = *(unsigned __int8 *)(a2 + 24);
    v14 = 0LL;
    v7 = 32;
    v8 = a2 - (unsigned __int16)(16 * v6);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v10 = a1;
    if ( a1 > 15 )
      v10 = 15;
    if ( *(char *)(v8 + 563) < v10 )
    {
      v13 = *(unsigned __int16 *)(a2 + 88) >> 1;
      if ( !_bittest(&v13, (unsigned __int8)(v10 - 1)) )
      {
        v7 = *(_BYTE *)(v8 + 195);
        KiSetPriorityFloor(v8, (__int64)&v14, v10);
        v5 = 1LL;
        *(_WORD *)(a2 + 88) = *(_WORD *)(a2 + 88) & 1 | (2 * ((*(_WORD *)(a2 + 88) >> 1) | (1 << (v10 - 1))));
      }
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v7 != 32 )
    {
      LOBYTE(v5) = v10;
      EtwTraceAutoBoostSetFloor(v8, *(_QWORD *)(a2 + 32) & 0xFFFFFFFC, v5, 0, v7, 0, 1, 0);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( a3 )
    {
      return KiReadyDeferredReadyList(CurrentPrcb, &v14);
    }
    else
    {
      LOBYTE(v5) = CurrentIrql;
      return KiProcessDeferredReadyList(CurrentPrcb, &v14, v5);
    }
  }
  return result;
}

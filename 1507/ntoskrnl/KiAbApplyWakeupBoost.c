/*
 * XREFs of KiAbApplyWakeupBoost @ 0x1400F4204
 * Callers:
 *     ExpWakePushLock @ 0x1400F3720 (ExpWakePushLock.c)
 *     KeSetEventBoostPriorityEx @ 0x1400F3D78 (KeSetEventBoostPriorityEx.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityFloor @ 0x1400F125C (KiSetPriorityFloor.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14025CD44 (EtwTraceAutoBoostSetFloor.c)
 */

void __fastcall KiAbApplyWakeupBoost(char a1, __int64 a2, int a3)
{
  int v5; // r8d
  __int16 v6; // ax
  char v7; // bp
  ULONG_PTR v8; // rsi
  unsigned __int8 CurrentIrql; // r12
  char v10; // di
  int v11; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v13; // rbx
  _BYTE *v14; // rdx
  _QWORD *v15; // [rsp+78h] [rbp+10h] BYREF

  v5 = 1;
  if ( (*(_BYTE *)(a2 + 27) & 1) == 0 || *(_QWORD *)(a2 + 64) )
  {
    v6 = *(unsigned __int8 *)(a2 + 24);
    v15 = 0LL;
    v7 = 32;
    v8 = a2 - (unsigned __int16)(16 * v6);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v10 = a1;
    if ( a1 > 15 )
      v10 = 15;
    if ( *(char *)(v8 + 563) < v10 )
    {
      v11 = *(unsigned __int16 *)(a2 + 88) >> 1;
      if ( !_bittest(&v11, (unsigned __int8)(v10 - 1)) )
      {
        v7 = *(_BYTE *)(v8 + 195);
        KiSetPriorityFloor(v8, &v15, v10);
        v5 = 1;
        *(_WORD *)(a2 + 88) = *(_WORD *)(a2 + 88) & 1 | (2 * ((*(_WORD *)(a2 + 88) >> 1) | (1 << (v10 - 1))));
      }
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v7 != 32 )
    {
      LOBYTE(v5) = v10;
      EtwTraceAutoBoostSetFloor(v8, *(_QWORD *)(a2 + 32) & 0xFFFFFFFC, v5, 0, v7, 0, 1, 0);
    }
    if ( a3 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = v15;
      while ( v13 )
      {
        v14 = v13 - 27;
        v13 = (_QWORD *)*v13;
        KiDeferredReadyThread((__int64)CurrentPrcb, v14);
      }
    }
    else
    {
      KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), &v15, CurrentIrql);
    }
  }
}

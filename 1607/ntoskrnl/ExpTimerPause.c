/*
 * XREFs of ExpTimerPause @ 0x1400ACE44
 * Callers:
 *     PsInsertVirtualizedTimer @ 0x14007E5B4 (PsInsertVirtualizedTimer.c)
 *     PspSetJobFreezeCountCallback @ 0x1400AC540 (PspSetJobFreezeCountCallback.c)
 *     ExWakeTimersPause @ 0x140114E9C (ExWakeTimersPause.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KeCancelTimerInternal @ 0x1400ACEF0 (KeCancelTimerInternal.c)
 */

void __fastcall ExpTimerPause(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v6; // dl
  unsigned __int64 v7; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 244) |= 2u;
  if ( !(unsigned __int8)KeCancelTimerInternal(a1, &v9, &v8, a1 + 304) )
  {
    v6 = 0;
    goto LABEL_6;
  }
  v6 = v8;
  if ( v8 == 1 )
  {
    if ( v9 <= a3 )
      goto LABEL_11;
    v7 = a2 + v9 - a3;
LABEL_9:
    *(_QWORD *)(a1 + 296) = v7;
    goto LABEL_6;
  }
  if ( v8 != 2 )
  {
    if ( v8 != 3 )
      goto LABEL_6;
    v7 = v9;
    goto LABEL_9;
  }
  if ( v9 <= a3 )
  {
LABEL_11:
    *(_QWORD *)(a1 + 296) = 0LL;
    goto LABEL_6;
  }
  *(_QWORD *)(a1 + 296) = a3 - v9;
LABEL_6:
  *(_BYTE *)(a1 + 245) = v6;
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 64));
}

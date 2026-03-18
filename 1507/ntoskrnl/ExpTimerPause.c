/*
 * XREFs of ExpTimerPause @ 0x14012C9BC
 * Callers:
 *     PsInsertVirtualizedTimer @ 0x14011EBF4 (PsInsertVirtualizedTimer.c)
 *     PspSetJobFreezeCountCallback @ 0x14012CF70 (PspSetJobFreezeCountCallback.c)
 *     ExWakeTimersPause @ 0x1401485F0 (ExWakeTimersPause.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeCancelTimerInternal @ 0x14012CA88 (KeCancelTimerInternal.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ExpTimerPause(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  volatile signed __int32 *v3; // rdi
  __int64 result; // rax
  char v8; // dl
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = (volatile signed __int32 *)(a1 + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v3);
  }
  else if ( _interlockedbittestandset64(v3, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v3);
  }
  *(_BYTE *)(a1 + 244) |= 2u;
  result = KeCancelTimerInternal(a1, &v11, &v10, a1 + 304);
  if ( !(_BYTE)result )
  {
    v8 = 0;
    v10 = 0;
    goto LABEL_9;
  }
  v8 = v10;
  if ( v10 != 1 )
  {
    if ( v10 == 2 )
    {
      if ( v11 > a3 )
      {
        *(_QWORD *)(a1 + 296) = a3 - v11;
        goto LABEL_9;
      }
      goto LABEL_15;
    }
    if ( v10 != 3 )
      goto LABEL_9;
    result = v11;
LABEL_14:
    *(_QWORD *)(a1 + 296) = result;
    goto LABEL_9;
  }
  result = v11;
  if ( v11 > a3 )
  {
    result = a2 + v11 - a3;
    goto LABEL_14;
  }
LABEL_15:
  *(_QWORD *)(a1 + 296) = 0LL;
LABEL_9:
  *(_BYTE *)(a1 + 245) = v8;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    return KiReleaseSpinLockInstrumented(v3, retaddr);
  _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  return result;
}

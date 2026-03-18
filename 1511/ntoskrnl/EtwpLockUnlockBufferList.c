/*
 * XREFs of EtwpLockUnlockBufferList @ 0x1400CFE24
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x140471024 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x140664ED8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400F45B8 (ExfAcquireReleasePushLockExclusive.c)
 */

void __fastcall EtwpLockUnlockBufferList(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  _QWORD *v2; // rcx
  KIRQL CurrentIrql; // bl
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 316) == 1 )
  {
    v2 = (_QWORD *)(a1 + 712);
    _InterlockedOr(v4, 0);
    if ( (*v2 & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((ULONG_PTR)v2);
  }
  else
  {
    v1 = (KSPIN_LOCK *)(a1 + 712);
    if ( *(_QWORD *)(a1 + 712) )
    {
      _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 712));
      KeReleaseSpinLock(v1, CurrentIrql);
    }
  }
}

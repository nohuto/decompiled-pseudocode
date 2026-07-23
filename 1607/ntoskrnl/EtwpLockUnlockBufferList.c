/*
 * XREFs of EtwpLockUnlockBufferList @ 0x1400921C4
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1404F3420 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1406A6848 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400A8F6C (ExfAcquireReleasePushLockExclusive.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 */

void __fastcall EtwpLockUnlockBufferList(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  _QWORD *v2; // rcx
  KIRQL CurrentIrql; // bl
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    v2 = (_QWORD *)(a1 + 696);
    _InterlockedOr(v4, 0);
    if ( (*v2 & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((ULONG_PTR)v2);
  }
  else
  {
    v1 = (KSPIN_LOCK *)(a1 + 696);
    if ( *(_QWORD *)(a1 + 696) )
    {
      _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 696));
      KeReleaseSpinLock(v1, CurrentIrql);
    }
  }
}

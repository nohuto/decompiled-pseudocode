/*
 * XREFs of EtwpLockUnlockBufferList @ 0x140065B9C
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1404A1BD0 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1406E7FB0 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall EtwpLockUnlockBufferList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rdi
  __int64 v7; // rdx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (volatile signed __int32 *)(a1 + 712);
  if ( *(_DWORD *)(a1 + 316) == 1 )
  {
    _InterlockedOr(v8, 0);
    if ( (*(_QWORD *)v4 & 1) != 0 )
    {
      v6 = KeAbPreAcquire(a1 + 712, 0LL, 0LL, a4);
      ExfAcquirePushLockExclusiveEx(v4, v6, v4);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 32);
        *(_BYTE *)(v6 + 26) |= 1u;
      }
      ExfReleasePushLockExclusive(v4, v7);
      if ( v6 )
        KeAbPostRelease((ULONG_PTR)v4);
    }
  }
  else if ( *(_QWORD *)v4 )
  {
    _mm_pause();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(a1 + 712);
    }
    else if ( _interlockedbittestandset64(v4, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(a1 + 712);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v4, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
    __writecr8(CurrentIrql);
  }
}

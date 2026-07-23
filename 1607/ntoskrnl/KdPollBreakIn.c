/*
 * XREFs of KdPollBreakIn @ 0x1400DD630
 * Callers:
 *     KeAccumulateTicks @ 0x1400DA260 (KeAccumulateTicks.c)
 *     KdCheckForDebugBreak @ 0x140114668 (KdCheckForDebugBreak.c)
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x1401D3BB8 (KiReleaseSpinLockInstrumented.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x1401D3BD4 (KiTryToAcquireSpinLockInstrumented.c)
 */

__int64 KdPollBreakIn()
{
  __int64 result; // rax
  unsigned __int8 v1; // bl
  _QWORD *v2; // rsi
  unsigned __int64 *v3; // rcx
  unsigned __int64 v4; // rax
  char v5; // al
  _DWORD *v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // rax
  __int16 v9; // [rsp+30h] [rbp-8h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  result = (unsigned __int8)KdEventLoggingEnabled;
  if ( !KdPitchDebugger || KdEventLoggingEnabled )
  {
    v1 = 0;
    if ( (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
    {
      _disable();
      v2 = (_QWORD *)((char *)&KdLogBuffer + 8 * KeGetPcr()->Prcb.Number);
      if ( *v2 )
      {
        v3 = (unsigned __int64 *)(*v2 + 16 * (*(unsigned int *)*v2 + 1LL));
        v4 = __rdtsc();
        *v3 = ((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4;
        v3[1] = 4 * ((unsigned __int8)KdDebuggerNotPresent & 1);
      }
      if ( BYTE4(KdpContext) )
      {
        v1 = 1;
        BYTE4(KdpContext) = 0;
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          v5 = KiTryToAcquireSpinLockInstrumented(&KdDebuggerLock);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)&KdDebuggerLock, 0LL) )
        {
          v5 = 0;
          _mm_pause();
        }
        else
        {
          v5 = 1;
        }
        if ( v5 )
        {
          if ( !(unsigned int)KdReceivePacket(8LL, 0LL, 0LL, 0LL, 0LL) )
            v1 = 1;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(&KdDebuggerLock, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)&KdDebuggerLock, 0LL);
        }
      }
      v1 &= (unsigned __int8)KdDebuggerEnabled;
      v6 = (_DWORD *)*v2;
      KdpControlCPressed |= v1;
      if ( v6 )
      {
        v7 = (unsigned int)*v6;
        v8 = __rdtsc();
        *(_QWORD *)&v6[4 * v7 + 6] = v6[4 * v7 + 6] & 4 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | ((((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) - *(_QWORD *)&v6[4 * v7 + 4]) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (_DWORD)v7 == 254 )
          *v6 = 0;
        else
          *v6 = v7 + 1;
      }
      if ( (v9 & 0x200) != 0 )
        _enable();
    }
    return v1;
  }
  return result;
}

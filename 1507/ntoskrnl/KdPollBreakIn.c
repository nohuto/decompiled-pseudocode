/*
 * XREFs of KdPollBreakIn @ 0x1401FE5E0
 * Callers:
 *     KdCheckForDebugBreak @ 0x14014E92C (KdCheckForDebugBreak.c)
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x140201108 (KiTryToAcquireSpinLockInstrumented.c)
 */

char KdPollBreakIn()
{
  char result; // al
  char v1; // bl
  __int64 CurrentProcessorNumber; // rsi
  unsigned int *v3; // rax
  unsigned __int64 *v4; // rcx
  unsigned __int64 v5; // rax
  char v6; // al
  _DWORD *v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // rax
  __int16 v10; // [rsp+40h] [rbp-8h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  result = KdEventLoggingEnabled;
  if ( !KdPitchDebugger || KdEventLoggingEnabled )
  {
    v1 = 0;
    if ( (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
    {
      _disable();
      CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
      v3 = (unsigned int *)KdLogBuffer[CurrentProcessorNumber];
      if ( v3 )
      {
        v4 = (unsigned __int64 *)&v3[4 * *v3 + 4];
        v5 = __rdtsc();
        *v4 = ((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5;
        v4[1] = 4 * ((unsigned __int8)KdDebuggerNotPresent & 1);
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
          v6 = KiTryToAcquireSpinLockInstrumented(&KdDebuggerLock);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)&KdDebuggerLock, 0LL) )
        {
          v6 = 0;
          _mm_pause();
        }
        else
        {
          v6 = 1;
        }
        if ( v6 )
        {
          v1 = (unsigned int)KdReceivePacket(8LL, 0LL, 0LL, 0LL, 0LL) == 0;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(&KdDebuggerLock, retaddr);
          else
            _InterlockedAnd64(&KdDebuggerLock, 0LL);
        }
      }
      v1 &= (unsigned __int8)KdDebuggerEnabled;
      KdpControlCPressed |= v1;
      v7 = (_DWORD *)KdLogBuffer[CurrentProcessorNumber];
      if ( v7 )
      {
        v8 = (unsigned int)*v7;
        v9 = __rdtsc();
        *(_QWORD *)&v7[4 * v8 + 6] = v7[4 * v8 + 6] & 4 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | ((((unsigned __int64)HIDWORD(v9) << 32) | (unsigned int)v9) - *(_QWORD *)&v7[4 * v8 + 4]) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (_DWORD)v8 == 254 )
          *v7 = 0;
        else
          *v7 = v8 + 1;
      }
      if ( (v10 & 0x200) != 0 )
        _enable();
    }
    return v1;
  }
  return result;
}

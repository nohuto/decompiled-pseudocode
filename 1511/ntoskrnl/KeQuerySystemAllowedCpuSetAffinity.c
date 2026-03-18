/*
 * XREFs of KeQuerySystemAllowedCpuSetAffinity @ 0x140077160
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140049500 (KeResumeClockTimerFromIdle.c)
 *     PpmParkSteerInterrupts @ 0x140074F40 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x14007C670 (KeCopyAffinityEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall KeQuerySystemAllowedCpuSetAffinity(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned int v6; // ebp
  unsigned int v7; // r8d
  _QWORD *v8; // r15
  unsigned __int64 *v9; // r10
  int v10; // r14d
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  unsigned __int64 v13; // rdx

  while ( 1 )
  {
    while ( 1 )
    {
      v4 = KiCpuSetSequence;
      if ( (KiCpuSetSequence & 1) == 0 )
        break;
      _mm_pause();
    }
    if ( *a2 == KiCpuSetSequence )
      break;
    *a1 = 1310721LL;
    memset(a1 + 1, 0, 0xA0uLL);
    if ( KiRestrictedSystemCpuSetsActive )
    {
      v6 = (unsigned __int16)KiActiveGroups;
      v7 = 0;
      if ( KiActiveGroups )
      {
        v8 = KiCpuSetAffinities;
        v9 = (unsigned __int64 *)KiSystemAllowedCpuSets;
        v10 = 0;
        do
        {
          v11 = *v9;
          v12 = 0LL;
          if ( *v9 )
          {
            do
            {
              _BitScanForward64(&v13, v11);
              v12 |= v8[(unsigned int)(v10 + v13)];
              v11 &= ~(1LL << v13);
            }
            while ( v11 );
            if ( v12 )
            {
              if ( *(_WORD *)a1 <= (unsigned __int16)v7 )
                *(_WORD *)a1 = v7 + 1;
              a1[(unsigned __int16)v7 + 1] |= v12;
            }
          }
          ++v7;
          ++v9;
          v10 += 64;
        }
        while ( v7 < v6 );
      }
    }
    else
    {
      KeCopyAffinityEx(a1, KeActiveProcessors);
    }
    result = KiCpuSetSequence;
    if ( KiCpuSetSequence == v4 )
    {
      *a2 = v4;
      return result;
    }
  }
  return result;
}

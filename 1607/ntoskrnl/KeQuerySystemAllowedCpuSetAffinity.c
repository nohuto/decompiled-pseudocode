/*
 * XREFs of KeQuerySystemAllowedCpuSetAffinity @ 0x14009E1B8
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1400DA910 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x140030B70 (KeCopyAffinityEx.c)
 *     RtlBeginReadTickLock @ 0x1400F003C (RtlBeginReadTickLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall KeQuerySystemAllowedCpuSetAffinity(_DWORD *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
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
    result = RtlBeginReadTickLock(&KiCpuSetSequence);
    v5 = result;
    if ( *a2 == result )
      break;
    a1[1] = 0;
    *a1 = 1310721;
    memset(a1 + 2, 0, 0xA0uLL);
    if ( KiRestrictedSystemCpuSetsActive )
    {
      v6 = (unsigned __int16)KiActiveGroups;
      v7 = 0;
      if ( KiActiveGroups )
      {
        v8 = KiCpuSetAffinities;
        v9 = (unsigned __int64 *)&KiSystemAllowedCpuSets;
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
              *(_QWORD *)&a1[2 * (unsigned __int16)v7 + 2] |= v12;
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
      KeCopyAffinityEx((__int64)a1, (unsigned __int16 *)&KeActiveProcessors);
    }
    result = KiCpuSetSequence;
    if ( KiCpuSetSequence == v5 )
    {
      *a2 = v5;
      return result;
    }
  }
  return result;
}

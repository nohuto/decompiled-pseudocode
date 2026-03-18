/*
 * XREFs of KeQuerySystemAllowedCpuSetAffinity @ 0x1400EA560
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1400AA190 (KeResumeClockTimerFromIdle.c)
 *     PpmParkSteerInterrupts @ 0x1400E87E0 (PpmParkSteerInterrupts.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall KeQuerySystemAllowedCpuSetAffinity(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  unsigned __int16 v5; // dx
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned int v8; // ebp
  unsigned int v9; // r8d
  _QWORD *v10; // r15
  unsigned __int64 *v11; // r10
  int v12; // esi
  unsigned __int64 v13; // r9
  __int64 v14; // r11
  unsigned __int64 v15; // rdx

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
    *(_QWORD *)a1 = 1310721LL;
    memset((void *)(a1 + 8), 0, 0xA0uLL);
    if ( KiRestrictedSystemCpuSetsActive )
    {
      v8 = (unsigned __int16)KiActiveGroups;
      v9 = 0;
      if ( KiActiveGroups )
      {
        v10 = KiCpuSetAffinities;
        v11 = (unsigned __int64 *)KiSystemAllowedCpuSets;
        v12 = 0;
        do
        {
          v13 = *v11;
          v14 = 0LL;
          if ( *v11 )
          {
            do
            {
              _BitScanForward64(&v15, v13);
              v14 |= v10[(unsigned int)(v12 + v15)];
              v13 &= ~(1LL << v15);
            }
            while ( v13 );
            if ( v14 )
            {
              if ( *(_WORD *)a1 <= (unsigned __int16)v9 )
                *(_WORD *)a1 = v9 + 1;
              *(_QWORD *)(a1 + 8LL * (unsigned __int16)v9 + 8) |= v14;
            }
          }
          ++v9;
          ++v11;
          v12 += 64;
        }
        while ( v9 < v8 );
      }
    }
    else
    {
      v5 = 0;
      *(_DWORD *)a1 = KeActiveProcessors[0];
      for ( *(_DWORD *)(a1 + 4) = 0; v5 < LOWORD(KeActiveProcessors[0]); *(_QWORD *)(a1 + 8 * v6 + 8) = qword_1403D15E8[v6] )
        v6 = v5++;
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

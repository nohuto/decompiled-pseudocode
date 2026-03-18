/*
 * XREFs of ?GetFrameStatistics@CConnection@DirectComposition@@QEAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z @ 0x1C0018748
 * Callers:
 *     NtDCompositionGetFrameStatistics @ 0x1C00174F0 (NtDCompositionGetFrameStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CConnection::GetFrameStatistics(
        DirectComposition::CConnection *this,
        union _LARGE_INTEGER *a2)
{
  unsigned __int64 v4; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  DWORD v6; // edx
  LARGE_INTEGER v7; // r8
  unsigned __int64 v8; // rcx
  __int64 v9; // rax

  do
  {
    v4 = *((_QWORD *)this + 21);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v6 = *((_DWORD *)this + 44);
    v7 = PerformanceCounter;
    a2[1].LowPart = v6;
    a2->QuadPart = v4;
    a2[1].HighPart = *((_DWORD *)this + 45);
    a2[2] = PerformanceCounter;
    a2[3] = DirectComposition::CConnection::s_qpcFrequency;
    if ( v6 )
    {
      v8 = DirectComposition::CConnection::s_qpcFrequency.QuadPart * (unsigned __int64)*((unsigned int *)this + 45) / v6;
      if ( v8 )
      {
        v9 = -1LL;
        if ( v7.QuadPart >= v4 )
          v9 = (v7.QuadPart - v4) / v8;
        v7.QuadPart = v4 + v8 * (v9 + 2);
      }
    }
    a2[4] = v7;
  }
  while ( v4 != *((_QWORD *)this + 21) );
  return 0LL;
}

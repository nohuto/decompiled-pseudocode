/*
 * XREFs of PpmSnapPerformanceAccumulation @ 0x1400466A0
 * Callers:
 *     PpmPerfSnapUtility @ 0x140046280 (PpmPerfSnapUtility.c)
 *     PpmResetPerfTimes @ 0x140125844 (PpmResetPerfTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1401F11AC (PoGetPerfStateAndParkingInfo.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x1401F14DC (PpmCapturePerformanceDistributionCallback.c)
 *     PpmGetThroughputInfoCallback @ 0x1401F1630 (PpmGetThroughputInfoCallback.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x140049800 (PpmUpdatePerformanceFeedback.c)
 *     PpmConvertTime @ 0x14009DB08 (PpmConvertTime.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

char __fastcall PpmSnapPerformanceAccumulation(
        LARGE_INTEGER *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        LARGE_INTEGER *a5)
{
  LARGE_INTEGER v5; // r15
  char v6; // r12
  LARGE_INTEGER v9; // rbp
  LARGE_INTEGER v10; // r13
  LARGE_INTEGER PerformanceCounter; // rsi
  signed __int64 QuadPart; // rax
  signed __int64 v13; // rtt
  LARGE_INTEGER *v14; // r15
  char result; // al
  __int64 v16; // r8
  LARGE_INTEGER v17; // r8
  LARGE_INTEGER v18; // r9
  __int64 v19; // rax
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rcx
  LARGE_INTEGER v25; // rcx
  LARGE_INTEGER v26; // rax
  unsigned __int64 v29; // [rsp+38h] [rbp-60h]
  char v30; // [rsp+40h] [rbp-58h] BYREF

  v5 = a1[3021];
  v6 = a4;
  v9.QuadPart = 0LL;
  v10.QuadPart = 0LL;
  if ( a3 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    _m_prefetchw(&a1[2980]);
    QuadPart = a1[2980].QuadPart;
    do
    {
      v13 = QuadPart;
      QuadPart = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2980], QuadPart, QuadPart);
    }
    while ( v13 != QuadPart );
    v9.QuadPart = QuadPart;
    if ( QuadPart )
    {
      if ( a1[3003].LowPart == 3 )
      {
        v26 = a1[3074];
        v9.QuadPart = *(_QWORD *)(v26.QuadPart + 8LL * DWORD2(xmmword_140332008)) >> 1;
        if ( (*(_QWORD *)(v26.QuadPart + 8LL * DWORD2(xmmword_140332008)) & 1) == 0 )
          v9.QuadPart = 0LL;
      }
    }
    if ( !v9.QuadPart )
      return 0;
  }
  else
  {
    _disable();
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v22 = __rdtsc();
    if ( (a1[3149].QuadPart & 0x8000000000LL) != 0 )
      v23 = __readmsr(0xDB2u);
    else
      v23 = 0LL;
    v29 = v23;
    v24 = PerformanceCounter.QuadPart - a1[2990].QuadPart;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[2992], v24);
    if ( (a1[3149].QuadPart & 0x8000000000LL) != 0 )
    {
      a1[3001].QuadPart += PpmConvertTime(v24, v22 - a1[2986].QuadPart, v23 - a1[3000].QuadPart);
      v23 = v29;
    }
    v25 = a1[2986];
    a1[2990] = PerformanceCounter;
    if ( v22 > v25.QuadPart )
      a1[2987].QuadPart += v22 - v25.QuadPart;
    a1[2986].QuadPart = v22;
    v6 = a4;
    if ( (a1[3149].QuadPart & 0x8000000000LL) != 0 )
      a1[3000].QuadPart = v23;
  }
  memset(a5, 0, 0x50uLL);
  a5[7].QuadPart = a1[2924].QuadPart + a1[2943].QuadPart;
  if ( v5.QuadPart )
  {
    a5[8] = a1[2921];
    a5[9] = a1[2922];
  }
  if ( !a3 )
    _enable();
  v14 = 0LL;
  if ( a1[3003].LowPart == 3 )
    v14 = (LARGE_INTEGER *)&v30;
  result = PpmUpdatePerformanceFeedback((_DWORD)a1, a2, a3, 0, (__int64)v14);
  if ( result )
  {
    if ( v6 && PopSnapEnergyCounters )
    {
      LOBYTE(v16) = 1;
      PopSnapEnergyCounters((unsigned int)a1[4].HighPart, a3, v16);
    }
    if ( v14 )
    {
      PerformanceCounter = *v14;
      v17 = v14[1];
      v18 = v14[2];
    }
    else
    {
      v10 = v9;
      if ( PerformanceCounter.QuadPart <= (unsigned __int64)v9.QuadPart )
        PerformanceCounter = v9;
      v17 = a1[2979];
      v18 = a1[2987];
    }
    if ( a1[2988].QuadPart )
    {
      v19 = a1[2993].QuadPart;
    }
    else if ( a1[2989].QuadPart )
    {
      v19 = a1[2994].QuadPart;
    }
    else
    {
      v19 = 100 * a1[2991].QuadPart;
    }
    a5[3].QuadPart = v19;
    if ( a1[2989].QuadPart )
      v19 = a1[2994].QuadPart;
    a5[4].QuadPart = v19;
    a5[5] = a1[2996];
    a5[2] = a1[3001];
    if ( !a3 )
    {
      if ( !v14 )
        v17.QuadPart += a1[2978].QuadPart;
      goto LABEL_33;
    }
    _m_prefetchw(&a1[2980]);
    v20 = a1[2980].QuadPart;
    do
    {
      v21 = v20;
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2980], v20, v20);
    }
    while ( v21 != v20 );
    if ( v20 )
    {
      if ( a1[3003].LowPart == 3 )
      {
        v20 = *(_QWORD *)(a1[3074].QuadPart + 8LL * DWORD2(xmmword_140332008)) >> 1;
        if ( (*(_QWORD *)(a1[3074].QuadPart + 8LL * DWORD2(xmmword_140332008)) & 1) == 0 )
          v20 = 0LL;
      }
    }
    if ( v9.QuadPart == v20 )
    {
      if ( !v14 )
        v17.QuadPart += PerformanceCounter.QuadPart - v10.QuadPart;
LABEL_33:
      *a5 = PerformanceCounter;
      result = 1;
      a5[6] = v18;
      a5[1].QuadPart = PerformanceCounter.QuadPart - v17.QuadPart;
      return result;
    }
    return 0;
  }
  return result;
}

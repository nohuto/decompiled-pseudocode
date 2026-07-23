/*
 * XREFs of PpmSnapPerformanceAccumulation @ 0x1400D7430
 * Callers:
 *     PpmPerfSnapUtility @ 0x1400D7020 (PpmPerfSnapUtility.c)
 *     PpmResetPerfTimes @ 0x140130768 (PpmResetPerfTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14020A0E4 (PoGetPerfStateAndParkingInfo.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x14020A41C (PpmCapturePerformanceDistributionCallback.c)
 *     PpmGetThroughputInfoCallback @ 0x14020A570 (PpmGetThroughputInfoCallback.c)
 * Callees:
 *     PpmConvertTime @ 0x14000DBE4 (PpmConvertTime.c)
 *     PpmUpdatePerformanceFeedback @ 0x1400D9860 (PpmUpdatePerformanceFeedback.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

char __fastcall PpmSnapPerformanceAccumulation(
        LARGE_INTEGER *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        LARGE_INTEGER *a5)
{
  LARGE_INTEGER v5; // r14
  LARGE_INTEGER v10; // r15
  LARGE_INTEGER PerformanceCounter; // rsi
  signed __int64 QuadPart; // rax
  signed __int64 v13; // rtt
  LARGE_INTEGER *v14; // r14
  char result; // al
  __int64 v16; // r8
  LARGE_INTEGER v17; // rdx
  LARGE_INTEGER v18; // r8
  LARGE_INTEGER v19; // r9
  __int64 v20; // rax
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  LARGE_INTEGER v26; // rcx
  LARGE_INTEGER v27; // rax
  LARGE_INTEGER v28; // [rsp+30h] [rbp-78h]
  unsigned __int64 v29; // [rsp+38h] [rbp-70h]
  unsigned __int64 v30; // [rsp+40h] [rbp-68h]
  char v31; // [rsp+48h] [rbp-60h] BYREF

  v5 = a1[3021];
  v28.QuadPart = 0LL;
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
    v10.QuadPart = QuadPart;
    if ( QuadPart )
    {
      if ( a1[3003].LowPart == 3 )
      {
        v27 = a1[3074];
        v10.QuadPart = *(_QWORD *)(v27.QuadPart + 8LL * DWORD2(xmmword_140356000)) >> 1;
        if ( (*(_QWORD *)(v27.QuadPart + 8LL * DWORD2(xmmword_140356000)) & 1) == 0 )
          v10.QuadPart = 0LL;
      }
    }
    if ( !v10.QuadPart )
      return 0;
  }
  else
  {
    _disable();
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v23 = __rdtsc();
    v30 = v23;
    if ( (a1[3165].QuadPart & 0x8000000000LL) != 0 )
      v24 = __readmsr(0xDB2u);
    else
      v24 = 0LL;
    v29 = v24;
    v25 = PerformanceCounter.QuadPart - a1[2990].QuadPart;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[2992], v25);
    if ( (a1[3165].QuadPart & 0x8000000000LL) != 0 )
    {
      a1[3001].QuadPart += PpmConvertTime(v25, v23 - a1[2986].QuadPart, v24 - a1[3000].QuadPart);
      v23 = v30;
      v24 = v29;
    }
    v26 = a1[2986];
    a1[2990] = PerformanceCounter;
    if ( v23 > v26.QuadPart )
      a1[2987].QuadPart += v23 - v26.QuadPart;
    a1[2986].QuadPart = v23;
    if ( (a1[3165].QuadPart & 0x8000000000LL) != 0 )
      a1[3000].QuadPart = v24;
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
    v14 = (LARGE_INTEGER *)&v31;
  result = PpmUpdatePerformanceFeedback((_DWORD)a1, a2, a3, 0, (__int64)v14);
  if ( result )
  {
    if ( a4 && PopSnapEnergyCounters )
    {
      LOBYTE(v16) = 1;
      PopSnapEnergyCounters((unsigned int)a1[4].HighPart, a3, v16);
    }
    if ( v14 )
    {
      PerformanceCounter = *v14;
      v18 = v14[1];
      v19 = v14[2];
      v17.QuadPart = 0LL;
    }
    else
    {
      v17 = v10;
      v28 = v10;
      if ( PerformanceCounter.QuadPart <= (unsigned __int64)v10.QuadPart )
        PerformanceCounter = v10;
      v18 = a1[2979];
      v19 = a1[2987];
    }
    if ( a1[2988].QuadPart )
    {
      v20 = a1[2993].QuadPart;
    }
    else if ( a1[2989].QuadPart )
    {
      v20 = a1[2994].QuadPart;
    }
    else
    {
      v20 = 100 * a1[2991].QuadPart;
    }
    a5[3].QuadPart = v20;
    if ( a1[2989].QuadPart )
      v20 = a1[2994].QuadPart;
    a5[4].QuadPart = v20;
    a5[5] = a1[2996];
    a5[2] = a1[3001];
    if ( !a3 )
    {
      if ( !v14 )
        v18.QuadPart += a1[2978].QuadPart;
      goto LABEL_33;
    }
    _m_prefetchw(&a1[2980]);
    v21 = a1[2980].QuadPart;
    do
    {
      v22 = v21;
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2980], v21, v21);
    }
    while ( v22 != v21 );
    if ( v21 )
    {
      if ( a1[3003].LowPart == 3 )
      {
        v21 = *(_QWORD *)(a1[3074].QuadPart + 8LL * DWORD2(xmmword_140356000)) >> 1;
        v17 = v28;
        if ( (*(_QWORD *)(a1[3074].QuadPart + 8LL * DWORD2(xmmword_140356000)) & 1) == 0 )
          v21 = 0LL;
      }
    }
    if ( v10.QuadPart == v21 )
    {
      if ( !v14 )
        v18.QuadPart += PerformanceCounter.QuadPart - v17.QuadPart;
LABEL_33:
      *a5 = PerformanceCounter;
      result = 1;
      a5[6] = v19;
      a5[1].QuadPart = PerformanceCounter.QuadPart - v18.QuadPart;
      return result;
    }
    return 0;
  }
  return result;
}

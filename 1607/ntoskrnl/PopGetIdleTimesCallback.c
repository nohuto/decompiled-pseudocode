/*
 * XREFs of PopGetIdleTimesCallback @ 0x14000D8B0
 * Callers:
 *     PoGetIdleTimes @ 0x14000D734 (PoGetIdleTimes.c)
 * Callees:
 *     PpmContinueActiveTimeAccumulation @ 0x14000D000 (PpmContinueActiveTimeAccumulation.c)
 *     PpmConvertTime @ 0x14000DBE4 (PpmConvertTime.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall PopGetIdleTimesCallback(__int64 a1, _QWORD *a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  BOOL v7; // esi
  unsigned __int64 v8; // rbp
  _QWORD *v9; // r12
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // r13
  unsigned int *v13; // r15
  LARGE_INTEGER v14; // r8
  __int64 QuadPart; // rcx
  unsigned int i; // r15d
  unsigned int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // rdx
  _QWORD *v23; // r12
  __int64 v24; // rcx
  ULONG v25; // ecx
  int v26; // edx
  unsigned int v27; // r8d
  signed __int64 v29; // rax
  signed __int64 v30; // rtt
  unsigned __int64 v31; // rax
  int v32; // eax
  LARGE_INTEGER PerformanceCounter; // [rsp+28h] [rbp-60h]
  unsigned int *v34; // [rsp+30h] [rbp-58h]
  _QWORD *v35; // [rsp+38h] [rbp-50h]
  _DWORD *v36; // [rsp+40h] [rbp-48h]
  int v37; // [rsp+90h] [rbp+8h]
  unsigned int v38; // [rsp+A8h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = CurrentPrcb != (struct _KPRCB *)a1;
  v8 = 0LL;
  v9 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  if ( CurrentPrcb != (struct _KPRCB *)a1 )
  {
    _m_prefetchw((const void *)(a1 + 23840));
    v10 = *(_QWORD *)(a1 + 23840);
    do
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 23840), v10, v10);
    }
    while ( v11 != v10 );
    v8 = v10;
    if ( !v10 )
      return 3221225473LL;
  }
  v12 = *(_QWORD *)(a1 + 23808);
  v13 = *(unsigned int **)(a1 + 23816);
  v34 = v13;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  QuadPart = PerformanceCounter.QuadPart;
  v37 = *(_DWORD *)(a1 + 23300);
  v38 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 652LL);
  if ( a2 )
  {
    memset(a2, 0, 0x30uLL);
    if ( v13 && v12 )
    {
      for ( i = 0; ; ++i )
      {
        v17 = *v34;
        if ( *v34 >= *(_DWORD *)(v12 + 28) )
          v17 = *(_DWORD *)(v12 + 28);
        if ( i >= v17 )
        {
          v13 = v34;
          v9 = v35;
          *a2 = PpmConvertTime(*((_QWORD *)v34 + 3), PopQpcFrequency, 10000000LL);
          break;
        }
        v18 = 248LL * i;
        if ( *(_BYTE *)(v18 + v12 + 1040) )
        {
          if ( *(_BYTE *)(v18 + v12 + 1040) == 1 )
          {
            v19 = 1;
            goto LABEL_15;
          }
          if ( *(_BYTE *)(v18 + v12 + 1040) == 2 )
          {
            v19 = 2;
            goto LABEL_15;
          }
        }
        else if ( *(_BYTE *)(v18 + v12 + 1043) )
        {
          v19 = 2 - (*(_BYTE *)(v18 + v12 + 1044) != 0);
          goto LABEL_15;
        }
        v19 = 3;
LABEL_15:
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 == 1 )
            {
              v22 = a2 + 5;
              v23 = a2 + 3;
            }
            else
            {
              v22 = 0LL;
              v23 = 0LL;
            }
          }
          else
          {
            v22 = (_DWORD *)a2 + 9;
            v23 = a2 + 2;
          }
        }
        else
        {
          v22 = a2 + 4;
          v23 = a2 + 1;
        }
        if ( i == *(_DWORD *)(v12 + 16) )
        {
          v35 = v23;
          v36 = v22;
        }
        if ( v22 && v23 )
        {
          *v22 += v34[248 * i + 13] + v34[248 * i + 14];
          v24 = *(_QWORD *)&v34[248 * i + 10];
          if ( *(_DWORD *)(v12 + 16) == i )
            v24 += *(_QWORD *)(a1 + 23824);
          *v23 += PpmConvertTime(v24, PopQpcFrequency, 10000000LL);
        }
      }
    }
    QuadPart = PerformanceCounter.QuadPart;
  }
  if ( a3 )
  {
    if ( !v7 )
      PpmContinueActiveTimeAccumulation(a1, QuadPart, v14.QuadPart);
    *(_QWORD *)(a3 + 8) = PpmConvertTime(*(_QWORD *)(a1 + 24008), PopQpcFrequency, 10000000LL);
  }
  if ( !v7 )
    goto LABEL_33;
  _m_prefetchw((const void *)(a1 + 23840));
  v29 = *(_QWORD *)(a1 + 23840);
  do
  {
    v30 = v29;
    v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 23840), v29, v29);
  }
  while ( v30 != v29 );
  if ( v8 != v29 )
    return 3221225473LL;
  if ( PerformanceCounter.QuadPart > v8 )
  {
    v31 = PpmConvertTime(PerformanceCounter.QuadPart - v8, PopQpcFrequency, 10000000LL);
    if ( v9 && v36 )
    {
      ++*v36;
      *v9 += v31;
    }
    v25 = KeMaximumIncrement;
    if ( v31 > KeMaximumIncrement )
    {
      v32 = v31 / KeMaximumIncrement - 1;
      v27 = v32 + v38;
      v26 = v32 + v37;
      v37 += v32;
      goto LABEL_35;
    }
  }
  else
  {
LABEL_33:
    v25 = KeMaximumIncrement;
  }
  v26 = v37;
  v27 = v38;
LABEL_35:
  if ( a2 )
  {
    if ( v13 && v12 )
    {
      *a2 += a2[1] + a2[2] + a2[3];
    }
    else
    {
      *a2 = v27 * (unsigned __int64)v25;
      v26 = v37;
    }
  }
  if ( a3 )
  {
    *(_DWORD *)a3 = v27;
    *(_DWORD *)(a3 + 4) = v26;
  }
  return 0LL;
}

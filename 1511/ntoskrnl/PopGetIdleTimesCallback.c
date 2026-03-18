/*
 * XREFs of PopGetIdleTimesCallback @ 0x14009D7C0
 * Callers:
 *     PoGetIdleTimes @ 0x14009D63C (PoGetIdleTimes.c)
 * Callees:
 *     PpmContinueActiveTimeAccumulation @ 0x14009C174 (PpmContinueActiveTimeAccumulation.c)
 *     PpmConvertTime @ 0x14009DB08 (PpmConvertTime.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall PopGetIdleTimesCallback(__int64 a1, _QWORD *a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  BOOL v7; // edi
  unsigned __int64 v8; // rbp
  _DWORD *v9; // r13
  _QWORD *v10; // r12
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v14; // r15
  LARGE_INTEGER PerformanceCounter; // r8
  ULONG v16; // ecx
  int v17; // edx
  unsigned int v18; // r8d
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  unsigned __int64 v21; // rax
  int v22; // eax
  unsigned int *v23; // r10
  __int64 v24; // r8
  unsigned int i; // r15d
  unsigned int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  _DWORD *v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // [rsp+20h] [rbp-58h]
  __int64 v36; // [rsp+28h] [rbp-50h]
  LARGE_INTEGER v37; // [rsp+30h] [rbp-48h]
  unsigned int *v38; // [rsp+38h] [rbp-40h]
  int v39; // [rsp+80h] [rbp+8h]
  unsigned int v40; // [rsp+98h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = CurrentPrcb != (struct _KPRCB *)a1;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( CurrentPrcb != (struct _KPRCB *)a1 )
  {
    _m_prefetchw((const void *)(a1 + 23840));
    v11 = *(_QWORD *)(a1 + 23840);
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 23840), v11, v11);
    }
    while ( v12 != v11 );
    v8 = v11;
    if ( !v11 )
      return 3221225473LL;
  }
  v14 = *(_QWORD *)(a1 + 23808);
  v36 = v14;
  v38 = *(unsigned int **)(a1 + 23816);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v37 = PerformanceCounter;
  v39 = *(_DWORD *)(a1 + 23300);
  v40 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 652LL);
  if ( !a2 )
    goto LABEL_7;
  memset(a2, 0, 0x30uLL);
  v23 = v38;
  if ( !v38 )
    goto LABEL_50;
  v24 = v14;
  if ( v14 )
  {
    for ( i = 0; ; ++i )
    {
      v26 = *v23;
      if ( *v23 >= *(_DWORD *)(v24 + 28) )
        v26 = *(_DWORD *)(v24 + 28);
      if ( i >= v26 )
      {
        v14 = v36;
        *a2 = PpmConvertTime(*((_QWORD *)v23 + 3), PopQpcFrequency, 10000000LL);
        goto LABEL_50;
      }
      v27 = 248LL * i;
      if ( *(_BYTE *)(v27 + v24 + 1040) )
      {
        if ( *(_BYTE *)(v27 + v24 + 1040) == 1 )
        {
          v28 = 1;
          goto LABEL_35;
        }
        if ( *(_BYTE *)(v27 + v24 + 1040) == 2 )
        {
          v28 = 2;
          goto LABEL_35;
        }
      }
      else if ( *(_BYTE *)(v27 + v24 + 1043) )
      {
        v28 = 2 - (*(_BYTE *)(v27 + v24 + 1044) != 0);
        goto LABEL_35;
      }
      v28 = 3;
LABEL_35:
      v29 = v28 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v30 )
        {
          if ( v30 == 1 )
          {
            v31 = a2 + 5;
            v32 = a2 + 3;
          }
          else
          {
            v31 = 0LL;
            v32 = 0LL;
          }
        }
        else
        {
          v31 = (_DWORD *)a2 + 9;
          v32 = a2 + 2;
        }
      }
      else
      {
        v31 = a2 + 4;
        v32 = a2 + 1;
      }
      v35 = v32;
      if ( i == *(_DWORD *)(v24 + 16) )
      {
        v10 = v32;
        v9 = v31;
      }
      if ( v31 && v32 )
      {
        *v31 += v23[248 * i + 13] + v23[248 * i + 14];
        v33 = *(_QWORD *)&v23[248 * i + 10];
        if ( *(_DWORD *)(v24 + 16) == i )
          v33 += *(_QWORD *)(a1 + 23824);
        v34 = PpmConvertTime(v33, PopQpcFrequency, 10000000LL);
        v24 = v36;
        v23 = v38;
        *v35 += v34;
      }
    }
  }
  v14 = 0LL;
LABEL_50:
  PerformanceCounter = v37;
LABEL_7:
  if ( a3 )
  {
    if ( !v7 )
      PpmContinueActiveTimeAccumulation(a1, PerformanceCounter.QuadPart, PerformanceCounter.QuadPart);
    *(_QWORD *)(a3 + 8) = PpmConvertTime(*(_QWORD *)(a1 + 24008), PopQpcFrequency, 10000000LL);
  }
  if ( !v7 )
    goto LABEL_12;
  _m_prefetchw((const void *)(a1 + 23840));
  v19 = *(_QWORD *)(a1 + 23840);
  do
  {
    v20 = v19;
    v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 23840), v19, v19);
  }
  while ( v20 != v19 );
  if ( v8 != v19 )
    return 3221225473LL;
  if ( v37.QuadPart > v8 )
  {
    v21 = PpmConvertTime(v37.QuadPart - v8, PopQpcFrequency, 10000000LL);
    if ( v10 && v9 )
    {
      ++*v9;
      *v10 += v21;
    }
    v16 = KeMaximumIncrement;
    if ( v21 > KeMaximumIncrement )
    {
      v22 = v21 / KeMaximumIncrement - 1;
      v18 = v22 + v40;
      v17 = v22 + v39;
      v39 += v22;
      goto LABEL_14;
    }
  }
  else
  {
LABEL_12:
    v16 = KeMaximumIncrement;
  }
  v17 = v39;
  v18 = v40;
LABEL_14:
  if ( a2 )
  {
    if ( v38 && v14 )
    {
      *a2 += a2[1] + a2[2] + a2[3];
    }
    else
    {
      *a2 = v18 * (unsigned __int64)v16;
      v17 = v39;
    }
  }
  if ( a3 )
  {
    *(_DWORD *)a3 = v18;
    *(_DWORD *)(a3 + 4) = v17;
  }
  return 0LL;
}

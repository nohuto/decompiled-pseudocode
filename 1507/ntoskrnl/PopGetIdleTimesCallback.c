/*
 * XREFs of PopGetIdleTimesCallback @ 0x1400148E0
 * Callers:
 *     PoGetIdleTimes @ 0x140014610 (PoGetIdleTimes.c)
 * Callees:
 *     PpmContinueActiveTimeAccumulation @ 0x140013B30 (PpmContinueActiveTimeAccumulation.c)
 *     PpmConvertTime @ 0x140014C30 (PpmConvertTime.c)
 */

__int64 __fastcall PopGetIdleTimesCallback(__int64 a1, __int64 *a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD *v7; // rsi
  unsigned __int64 v8; // r15
  _DWORD *v9; // r12
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v13; // rbp
  __int64 v14; // r14
  LARGE_INTEGER v15; // r8
  unsigned __int64 QuadPart; // r11
  unsigned int v17; // ecx
  __int64 v18; // rdx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // rdx
  _QWORD *v23; // r11
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // r11
  __int64 v27; // rax
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  unsigned __int64 v30; // rax
  ULONG v31; // ecx
  int v32; // r9d
  int v33; // eax
  unsigned int v34; // r8d
  BOOL v35; // [rsp+20h] [rbp-58h]
  _QWORD *v36; // [rsp+28h] [rbp-50h]
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp-48h]
  unsigned int v38; // [rsp+80h] [rbp+8h]
  int v39; // [rsp+98h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0LL;
  v8 = 0LL;
  v35 = CurrentPrcb != (struct _KPRCB *)a1;
  v9 = 0LL;
  v36 = 0LL;
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
  v13 = *(_QWORD *)(a1 + 23808);
  v14 = *(_QWORD *)(a1 + 23816);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  QuadPart = PerformanceCounter.QuadPart;
  v39 = *(_DWORD *)(a1 + 23300);
  v38 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 652LL);
  if ( a2 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    a2[3] = 0LL;
    a2[4] = 0LL;
    a2[5] = 0LL;
    if ( v14 )
    {
      if ( v13 )
      {
        while ( 1 )
        {
          v17 = *(_DWORD *)(v13 + 28);
          if ( *(_DWORD *)v14 < v17 )
            v17 = *(_DWORD *)v14;
          if ( (unsigned int)v7 >= v17 )
          {
            v27 = PpmConvertTime(*(_QWORD *)(v14 + 24), PopQpcFrequency, 10000000LL);
            v7 = v36;
            QuadPart = PerformanceCounter.QuadPart;
            *a2 = v27;
            break;
          }
          v18 = 248LL * (unsigned int)v7;
          if ( *(_BYTE *)(v18 + v13 + 1040) )
          {
            if ( *(_BYTE *)(v18 + v13 + 1040) == 1 )
            {
              v19 = 1;
              goto LABEL_20;
            }
            if ( *(_BYTE *)(v18 + v13 + 1040) == 2 )
            {
              v19 = 2;
              goto LABEL_20;
            }
          }
          else if ( *(_BYTE *)(v18 + v13 + 1043) )
          {
            v19 = 2 - (*(_BYTE *)(v18 + v13 + 1044) != 0);
            goto LABEL_20;
          }
          v19 = 3;
LABEL_20:
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
          if ( (_DWORD)v7 == *(_DWORD *)(v13 + 16) )
          {
            v36 = v23;
            v9 = v22;
          }
          if ( v22 && v23 )
          {
            *v22 += *(_DWORD *)(984LL * (unsigned int)v7 + v14 + 52) + *(_DWORD *)(984LL * (unsigned int)v7 + v14 + 56);
            v24 = *(_QWORD *)(984LL * (unsigned int)v7 + v14 + 40);
            if ( *(_DWORD *)(v13 + 16) == (_DWORD)v7 )
              v24 += *(_QWORD *)(a1 + 23824);
            v25 = PpmConvertTime(v24, PopQpcFrequency, 10000000LL);
            *v26 += v25;
          }
          LODWORD(v7) = (_DWORD)v7 + 1;
        }
      }
    }
  }
  if ( a3 )
  {
    if ( !v35 )
      PpmContinueActiveTimeAccumulation(a1, QuadPart, v15.QuadPart);
    *(_QWORD *)(a3 + 8) = PpmConvertTime(*(_QWORD *)(a1 + 24008), PopQpcFrequency, 10000000LL);
  }
  if ( !v35 )
    goto LABEL_51;
  _m_prefetchw((const void *)(a1 + 23840));
  v28 = *(_QWORD *)(a1 + 23840);
  do
  {
    v29 = v28;
    v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 23840), v28, v28);
  }
  while ( v29 != v28 );
  if ( v8 != v28 )
    return 3221225473LL;
  if ( QuadPart <= v8 )
  {
LABEL_51:
    v31 = KeMaximumIncrement;
    v32 = v39;
LABEL_52:
    v34 = v38;
    goto LABEL_53;
  }
  v30 = PpmConvertTime(QuadPart - v8, PopQpcFrequency, 10000000LL);
  if ( v7 && v9 )
  {
    ++*v9;
    *v7 += v30;
  }
  v31 = KeMaximumIncrement;
  v32 = v39;
  if ( v30 <= KeMaximumIncrement )
    goto LABEL_52;
  v33 = v30 / KeMaximumIncrement - 1;
  v34 = v33 + v38;
  v32 = v33 + v39;
LABEL_53:
  if ( a2 )
  {
    if ( v14 && v13 )
      *a2 += a2[1] + a2[2] + a2[3];
    else
      *a2 = v34 * (unsigned __int64)v31;
  }
  if ( a3 )
  {
    *(_DWORD *)a3 = v34;
    *(_DWORD *)(a3 + 4) = v32;
  }
  return 0LL;
}

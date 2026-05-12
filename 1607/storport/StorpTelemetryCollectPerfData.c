/*
 * XREFs of StorpTelemetryCollectPerfData @ 0x1C0007290
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006180 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidQosSupportedCommand @ 0x1C002C8D0 (RaidQosSupportedCommand.c)
 */

__int64 StorpTelemetryCollectPerfData(__int64 a1, __int64 a2, __int64 a3, ...)
{
  unsigned __int8 v3; // al
  int v7; // esi
  unsigned int v8; // ebp
  bool v9; // zf
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  char v13; // si
  _QWORD *v14; // rcx
  __int64 *v15; // r9
  __int64 v16; // rax
  int v17; // r8d
  unsigned int v18; // edx
  int v19; // eax
  unsigned int v20; // ebp
  unsigned int v21; // ebx
  _QWORD *v22; // rcx
  int v23; // eax
  unsigned __int64 *v24; // rcx
  __int64 v26; // rdx
  __int64 *v27; // rcx
  int v28; // edx
  int v29; // eax
  unsigned __int64 v30; // [rsp+60h] [rbp+8h]
  __int64 v31; // [rsp+68h] [rbp+10h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+20h] BYREF
  va_list PerformanceFrequencya; // [rsp+78h] [rbp+20h]
  __int64 v34; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(PerformanceFrequencya, a3);
  PerformanceFrequency.QuadPart = va_arg(va1, _QWORD);
  v34 = va_arg(va1, _QWORD);
  v3 = *(_BYTE *)(a2 + 2);
  if ( v3 == 40 )
    v7 = *(_DWORD *)(a2 + 20);
  else
    v7 = v3;
  v8 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    v9 = UseQPCTime == 0;
    goto LABEL_5;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_60:
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      goto LABEL_7;
    }
    v9 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_5:
    if ( !v9 )
    {
      PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)PerformanceFrequencya);
      goto LABEL_7;
    }
    goto LABEL_60;
  }
  PerformanceCounter.QuadPart = 0LL;
LABEL_7:
  v11 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 696);
  v31 = v11;
  if ( StorEtwLoggingEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_40:
      v12 = v11;
      v30 = v11;
      goto LABEL_14;
    }
    if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      if ( !PerformanceFrequency.QuadPart )
        return 3221225534LL;
      v26 = 10000000 * v11;
      if ( PerformanceFrequency.QuadPart == 2343749 )
        v11 = v26 / 2343749;
      else
        v11 = v26 / PerformanceFrequency.QuadPart;
      v31 = v11;
    }
  }
  if ( !UseQPCTime || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    goto LABEL_40;
  if ( !PerformanceFrequency.QuadPart )
    return 3221225534LL;
  v12 = 10000000 * v11 / PerformanceFrequency.QuadPart;
  v30 = v12;
LABEL_14:
  if ( *(_BYTE *)(a3 + 2552)
    && (unsigned __int8)RaidQosSupportedCommand(a2)
    && v12 + *(_QWORD *)(a1 + 688) >= *(_QWORD *)(a3 + 2592) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a3 + 1800));
    v12 = v30;
    v11 = v31;
  }
  if ( v7 )
    return 3221225473LL;
  v13 = v34;
  if ( (((_BYTE)v34 - 8) & 0x5D) != 0 )
  {
    if ( (_BYTE)v34 == 66 )
    {
      v27 = (__int64 *)qword_1C004F460;
      v28 = 1;
    }
    else
    {
      if ( (_BYTE)v34 != 53 && (_BYTE)v34 != 0x91 )
        return 3221225473LL;
      v27 = (__int64 *)qword_1C004F460;
      v28 = 0;
    }
    v29 = 2;
    while ( v11 > *v27 )
    {
      ++v8;
      ++v27;
      if ( v8 >= 2 )
        goto LABEL_51;
    }
    v29 = v8;
LABEL_51:
    v20 = dword_1C004F47C;
    v21 = v28 + v29 * (unsigned __int16)qword_1C004F450;
    goto LABEL_26;
  }
  v14 = qword_1C004F430;
  v15 = (__int64 *)qword_1C004F438;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v16 = *(unsigned int *)(a2 + 60);
  else
    v16 = *(unsigned int *)(a2 + 16);
  v17 = 3;
  v18 = 0;
  while ( v16 > *v14 )
  {
    ++v18;
    ++v14;
    if ( v18 >= 3 )
      goto LABEL_22;
  }
  v17 = v18;
LABEL_22:
  v19 = 4;
  while ( v11 > *v15 )
  {
    ++v8;
    ++v15;
    if ( v8 >= 4 )
      goto LABEL_25;
  }
  v19 = v8;
LABEL_25:
  v20 = dword_1C004F44C;
  v21 = ((((_BYTE)v34 - 8) & 0x5F) != 0)
      + (unsigned __int16)TelemetryPerfContext * (v17 + v19 * HIWORD(TelemetryPerfContext));
LABEL_26:
  v22 = (_QWORD *)(*(_QWORD *)(a3 + 1848)
                 + KeGetCurrentProcessorNumberEx(0LL) % g_RaidNumberProcessors * (unsigned int)dword_1C004F484
                 + 8 * (v21 + (unsigned __int64)v20));
  ++*v22;
  if ( *(_QWORD *)(a3 + 1872) && ((v13 - 8) & 0x5D) == 0 )
  {
    LOWORD(v23) = KeGetCurrentNodeNumber();
    if ( (_WORD)v23 )
      v23 = (unsigned __int16)v23;
    else
      v23 = 0;
    v24 = (unsigned __int64 *)(*(_QWORD *)(a3 + 1872)
                             + dword_1C004F498
                             * (unsigned int)(unsigned __int16)(v23 % ((unsigned __int16)g_RaidNumaHighestNodeNumber + 1)));
    if ( *v24 < v12 )
      *v24 = v12;
  }
  return 0LL;
}

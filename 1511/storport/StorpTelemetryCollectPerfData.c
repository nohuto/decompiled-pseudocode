/*
 * XREFs of StorpTelemetryCollectPerfData @ 0x1C0002B80
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C00016A0 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidQosSupportedCommand @ 0x1C0028D70 (RaidQosSupportedCommand.c)
 */

__int64 StorpTelemetryCollectPerfData(__int64 a1, __int64 a2, __int64 a3, ...)
{
  unsigned __int8 v3; // al
  int v7; // r14d
  unsigned int v8; // esi
  bool v9; // zf
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdi
  _QWORD *v13; // rax
  __int64 *v14; // r9
  __int64 v15; // rcx
  int v16; // r8d
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // ebx
  _QWORD *v21; // rcx
  __int64 v23; // rdx
  __int64 *v24; // rdx
  int v25; // ecx
  int v26; // eax
  __int64 v27; // [rsp+60h] [rbp+8h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+20h] BYREF
  va_list PerformanceFrequencya; // [rsp+78h] [rbp+20h]
  __int64 v30; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(PerformanceFrequencya, a3);
  PerformanceFrequency.QuadPart = va_arg(va1, _QWORD);
  v30 = va_arg(va1, _QWORD);
  v3 = *(_BYTE *)(a2 + 2);
  if ( v3 == 40 )
    v7 = *(_DWORD *)(a2 + 20);
  else
    v7 = v3;
  v8 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    v9 = LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) == 0;
    goto LABEL_5;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( !LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
    {
LABEL_53:
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
    goto LABEL_53;
  }
  PerformanceCounter.QuadPart = 0LL;
LABEL_7:
  v11 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 696);
  v27 = v11;
  if ( StorEtwLoggingEnabled )
  {
    if ( !LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
    {
LABEL_34:
      v12 = v11;
      goto LABEL_14;
    }
    if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      if ( !PerformanceFrequency.QuadPart )
        return 3221225534LL;
      v23 = 10000000 * v11;
      if ( PerformanceFrequency.QuadPart == 2343749 )
        v11 = v23 / 2343749;
      else
        v11 = v23 / PerformanceFrequency.QuadPart;
      v27 = v11;
    }
  }
  if ( !LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    goto LABEL_34;
  if ( !PerformanceFrequency.QuadPart )
    return 3221225534LL;
  v12 = 10000000 * v11 / PerformanceFrequency.QuadPart;
LABEL_14:
  if ( *(_BYTE *)(a3 + 2528)
    && (unsigned __int8)RaidQosSupportedCommand(a2)
    && (unsigned __int64)(v12 + *(_QWORD *)(a1 + 688)) >= *(_QWORD *)(a3 + 2568) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a3 + 1792));
    v11 = v27;
  }
  if ( v7 )
    return 3221225473LL;
  if ( (((_BYTE)v30 - 8) & 0x5D) != 0 )
  {
    if ( (_BYTE)v30 == 66 )
    {
      v24 = (__int64 *)*(&xmmword_1C00483D8 + 1);
      v25 = 1;
    }
    else
    {
      if ( (_BYTE)v30 != 53 && (_BYTE)v30 != 0x91 )
        return 3221225473LL;
      v24 = (__int64 *)*(&xmmword_1C00483D8 + 1);
      v25 = 0;
    }
    v26 = 2;
    while ( v11 > *v24 )
    {
      ++v8;
      ++v24;
      if ( v8 >= 2 )
        goto LABEL_45;
    }
    v26 = v8;
LABEL_45:
    v19 = dword_1C00483FC;
    v20 = v25 + v26 * (unsigned __int16)qword_1C00483D0;
    goto LABEL_26;
  }
  v13 = *(&xmmword_1C00483A8 + 1);
  v14 = (__int64 *)xmmword_1C00483B8;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v15 = *(unsigned int *)(a2 + 60);
  else
    v15 = *(unsigned int *)(a2 + 16);
  v16 = 3;
  v17 = 0;
  while ( v15 > *v13 )
  {
    ++v17;
    ++v13;
    if ( v17 >= 3 )
      goto LABEL_22;
  }
  v16 = v17;
LABEL_22:
  v18 = 4;
  while ( v11 > *v14 )
  {
    ++v8;
    ++v14;
    if ( v8 >= 4 )
      goto LABEL_25;
  }
  v18 = v8;
LABEL_25:
  v19 = dword_1C00483CC;
  v20 = ((((_BYTE)v30 - 8) & 0x5F) != 0)
      + (unsigned __int16)TelemetryPerfContext * (v16 + v18 * HIWORD(TelemetryPerfContext));
LABEL_26:
  v21 = (_QWORD *)(*(_QWORD *)(a3 + 1832)
                 + KeGetCurrentProcessorNumberEx(0LL) % g_RaidNumberProcessors * (unsigned int)dword_1C0048404
                 + 8 * (v20 + (unsigned __int64)v19));
  ++*v21;
  return 0LL;
}

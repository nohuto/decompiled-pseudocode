/*
 * XREFs of StorpTelemetryCollectPerfData @ 0x1C0002EF0
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0002480 (RaidUnitCompleteRequest.c)
 * Callees:
 *     <none>
 */

__int64 StorpTelemetryCollectPerfData(__int64 a1, __int64 a2, __int64 a3, ...)
{
  unsigned __int8 v3; // al
  int v7; // esi
  unsigned int v8; // ebx
  bool v9; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 *v13; // r11
  __int64 v14; // rdx
  int v15; // r9d
  unsigned int v16; // r8d
  int v17; // r10d
  unsigned int v18; // edi
  unsigned int v19; // ebx
  _QWORD *v20; // rcx
  __int64 *v22; // r8
  int v23; // edx
  int v24; // ecx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp+20h] BYREF
  va_list PerformanceFrequencya; // [rsp+58h] [rbp+20h]
  __int64 v27; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(PerformanceFrequencya, a3);
  PerformanceFrequency.QuadPart = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _QWORD);
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
  }
  else
  {
    if ( !g_StorpTraceLoggingPerformanceEnabled )
    {
      PerformanceCounter.QuadPart = 0LL;
      goto LABEL_9;
    }
    if ( !LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
      goto LABEL_25;
    v9 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
  }
  if ( v9 )
  {
LABEL_25:
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_9;
  }
  PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)PerformanceFrequencya);
LABEL_9:
  v11 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 680);
  if ( StorEtwLoggingEnabled
    && LOBYTE(WPP_MAIN_CB.DeviceObjectExtension)
    && !g_StorpTraceLoggingPerformanceHighResolutionTimer )
  {
    if ( !PerformanceFrequency.QuadPart )
      return 3221225534LL;
    v11 = 10000000 * v11 / PerformanceFrequency.QuadPart;
  }
  if ( !v7 )
  {
    if ( (((_BYTE)v27 - 8) & 0x5D) == 0 )
    {
      v12 = *(&xmmword_1C00443A8 + 1);
      v13 = (__int64 *)xmmword_1C00443B8;
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v14 = *(unsigned int *)(a2 + 60);
      else
        v14 = *(unsigned int *)(a2 + 16);
      v15 = 3;
      v16 = 0;
      v17 = 3;
      do
      {
        if ( v14 <= *v12 )
        {
          v17 = v16;
          break;
        }
        ++v16;
        ++v12;
      }
      while ( v16 < 3 );
      while ( v11 > *v13 )
      {
        ++v8;
        ++v13;
        if ( v8 >= 3 )
          goto LABEL_19;
      }
      v15 = v8;
LABEL_19:
      v18 = dword_1C00443CC;
      v19 = ((((_BYTE)v27 - 8) & 0x5F) != 0)
          + (unsigned __int16)TelemetryPerfContext * (v17 + v15 * HIWORD(TelemetryPerfContext));
LABEL_20:
      v20 = (_QWORD *)(*(_QWORD *)(a3 + 1768)
                     + KeGetCurrentProcessorNumberEx(0LL) % g_RaidNumberProcessors * (unsigned int)dword_1C0044404
                     + 8 * (v19 + (unsigned __int64)v18));
      ++*v20;
      return 0LL;
    }
    if ( (_BYTE)v27 == 66 )
    {
      v22 = (__int64 *)*(&xmmword_1C00443D8 + 1);
      v23 = 1;
    }
    else
    {
      if ( (_BYTE)v27 != 53 && (_BYTE)v27 != 0x91 )
        return 3221225473LL;
      v22 = (__int64 *)*(&xmmword_1C00443D8 + 1);
      v23 = 0;
    }
    v24 = 2;
    while ( v11 > *v22 )
    {
      ++v8;
      ++v22;
      if ( v8 >= 2 )
        goto LABEL_33;
    }
    v24 = v8;
LABEL_33:
    v18 = dword_1C00443FC;
    v19 = v23 + v24 * (unsigned __int16)qword_1C00443D0;
    goto LABEL_20;
  }
  return 3221225473LL;
}

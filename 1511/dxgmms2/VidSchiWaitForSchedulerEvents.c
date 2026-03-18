/*
 * XREFs of VidSchiWaitForSchedulerEvents @ 0x1C003A290
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C000ADA0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiGetSchedulerStatus @ 0x1C000AD90 (VidSchiGetSchedulerStatus.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     VidSchIsTDRPending @ 0x1C000B6A0 (VidSchIsTDRPending.c)
 *     VidSchiIsFlipQueueBusy @ 0x1C000BE20 (VidSchiIsFlipQueueBusy.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     RtlULongLongMult @ 0x1C001F6B0 (RtlULongLongMult.c)
 *     VidSchiCheckHwProgress @ 0x1C003A610 (VidSchiCheckHwProgress.c)
 *     VidSchiHandleControlEvent @ 0x1C006182C (VidSchiHandleControlEvent.c)
 */

__int64 __fastcall VidSchiWaitForSchedulerEvents(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // ebp
  PRKEVENT *v4; // rsi
  PRKEVENT v5; // rcx
  __int64 v6; // r9
  PRKEVENT v7; // rcx
  bool v8; // bl
  char IsFlipQueueBusy; // si
  union _LARGE_INTEGER *Timeout; // r9
  ULONG v11; // r10d
  LARGE_INTEGER v12; // rax
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r10
  ULONGLONG v15; // r10
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  PRKEVENT v24; // rcx
  _BYTE v26[8]; // [rsp+40h] [rbp-88h] BYREF
  ULONGLONG v27; // [rsp+48h] [rbp-80h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-78h] BYREF
  ULONGLONG pullResult; // [rsp+58h] [rbp-70h] BYREF
  PRKEVENT Event[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v31; // [rsp+70h] [rbp-58h]
  PVOID Object; // [rsp+78h] [rbp-50h] BYREF

  Event[0] = (PRKEVENT)(a1 + 1360);
  Event[1] = (PRKEVENT)(a1 + 1304);
  v31 = a1 + 1472;
  while ( 1 )
  {
    v2 = 0;
    v3 = 2;
    if ( (unsigned int)VidSchiGetSchedulerStatus(a1) != 1 )
      v3 = 1;
    v4 = Event;
    while ( 1 )
    {
      v5 = *v4;
      *(_QWORD *)&v5[2].Header.Lock = MEMORY[0xFFFFF78000000320];
      if ( KeReadStateEvent(v5) )
        break;
      ++v2;
      ++v4;
      if ( v2 >= v3 )
        goto LABEL_9;
    }
    v7 = Event[v2];
    v7[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v7);
LABEL_9:
    if ( v2 == v3 )
    {
      VidSchiProfilePerformanceTick(14LL, a1, 0LL, v6, 0LL, 0LL, 0LL, 0LL);
      while ( 1 )
      {
        do
        {
          v27 = 0LL;
          v8 = *(_DWORD *)(a1 + 908) != 0;
          IsFlipQueueBusy = VidSchiIsFlipQueueBusy(a1);
          if ( (unsigned int)VidSchiGetSchedulerStatus(a1) == 1 )
          {
            v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
            if ( RtlULongLongMult(v12.QuadPart, 0x989680uLL, &pullResult) >= 0 )
              v15 = pullResult / v13;
            else
              v15 = 10000000 * (v14 / v13) + 10000000 * (v14 % v13) / v13;
            v16 = -1LL;
            if ( *(_BYTE *)(a1 + 2552) )
              v16 = *(_QWORD *)(a1 + 2536);
            v17 = *(_DWORD *)(a1 + 56);
            if ( v17 )
            {
              v18 = a1 + 376;
              v19 = v17;
              do
              {
                v20 = *(_QWORD *)(*(_QWORD *)v18 + 120LL);
                if ( v20 && v16 >= v20 )
                  v16 = *(_QWORD *)(*(_QWORD *)v18 + 120LL);
                v18 += 8LL;
                --v19;
              }
              while ( v19 );
            }
            if ( (v8 || IsFlipQueueBusy) && v16 >= v15 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1) )
              v16 = v15 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
            if ( v16 == -1LL )
            {
              Timeout = 0LL;
              *(_BYTE *)(a1 + 892) = 1;
              v11 = 3;
            }
            else
            {
              if ( v16 > v15 )
                v27 = v15 - v16;
              else
                v27 = 0LL;
              Timeout = (union _LARGE_INTEGER *)&v27;
              *(_BYTE *)(a1 + 892) = 0;
              v11 = 2;
            }
          }
          else
          {
            Timeout = 0LL;
            v11 = 1;
            *(_BYTE *)(a1 + 892) = 0;
          }
          if ( v11 - 1 > 3 )
          {
            v2 = -1073741811;
          }
          else
          {
            v21 = MEMORY[0xFFFFF78000000320];
            v22 = 0LL;
            v23 = v11;
            do
            {
              v24 = Event[v22++];
              *(_QWORD *)&v24[1].Header.Lock = v21;
              *(__int64 *)((char *)&v31 + v22 * 8) = (__int64)v24;
              --v23;
            }
            while ( v23 );
            v2 = KeWaitForMultipleObjects(v11, &Object, WaitAny, Executive, 0, 0, Timeout, 0LL);
          }
          *(_BYTE *)(a1 + 892) = 0;
        }
        while ( v2 > 1 && v2 != 258 );
        v26[0] = 0;
        if ( v2 != 258 || !(unsigned int)VidSchiCheckHwProgress(a1, v26) )
          break;
        if ( v26[0] )
        {
          v2 = 1;
          break;
        }
      }
      VidSchiProfilePerformanceTick(15LL, a1, 0LL, (__int64)Timeout, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v2 )
      break;
    VidSchiHandleControlEvent(a1);
    if ( VidSchIsTDRPending(a1) )
      return 258LL;
  }
  if ( VidSchIsTDRPending(a1) )
    return 258;
  return v2;
}

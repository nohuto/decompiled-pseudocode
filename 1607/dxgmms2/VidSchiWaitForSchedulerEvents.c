/*
 * XREFs of VidSchiWaitForSchedulerEvents @ 0x1C00433D0
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C00098B0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiGetSchedulerStatus @ 0x1C0007F28 (VidSchiGetSchedulerStatus.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     VidSchiIsFlipQueueBusy @ 0x1C000B190 (VidSchiIsFlipQueueBusy.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     VidSchiCheckHwProgress @ 0x1C0043C50 (VidSchiCheckHwProgress.c)
 *     VidSchiHandleControlEvent @ 0x1C006894C (VidSchiHandleControlEvent.c)
 */

__int64 __fastcall VidSchiWaitForSchedulerEvents(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // ebp
  PRKEVENT *v4; // rdi
  PRKEVENT v5; // rcx
  __int64 v6; // r9
  bool v7; // bl
  char IsFlipQueueBusy; // di
  LARGE_INTEGER v9; // rcx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r9
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  union _LARGE_INTEGER *Timeout; // r9
  ULONG v17; // r10d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  PRKEVENT v21; // rcx
  PRKEVENT v23; // rcx
  _BYTE v24[8]; // [rsp+40h] [rbp-78h] BYREF
  union _LARGE_INTEGER v25; // [rsp+48h] [rbp-70h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-68h] BYREF
  PRKEVENT Event[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v28; // [rsp+68h] [rbp-50h]
  PVOID Object; // [rsp+70h] [rbp-48h] BYREF

  Event[0] = (PRKEVENT)(a1 + 1392);
  Event[1] = (PRKEVENT)(a1 + 1336);
  v28 = a1 + 1504;
  while ( 1 )
  {
    v2 = 0;
    v3 = (unsigned int)VidSchiGetSchedulerStatus(a1) == 1 ? 2 : 1;
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
        goto LABEL_7;
    }
    v23 = Event[v2];
    v23[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v23);
LABEL_7:
    if ( v2 == v3 )
    {
      VidSchiProfilePerformanceTick(14LL, a1, 0LL, v6, 0LL, 0LL, 0LL, 0LL);
      while ( 1 )
      {
        do
        {
          v25.QuadPart = 0LL;
          v7 = *(_DWORD *)(a1 + 944) != 0;
          IsFlipQueueBusy = VidSchiIsFlipQueueBusy(a1);
          if ( (unsigned int)VidSchiGetSchedulerStatus(a1) == 1 )
          {
            v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
            if ( is_mul_ok(v9.QuadPart, 0x989680uLL) )
              v10 = (unsigned __int64)v9.QuadPart
                  * (unsigned __int128)0x989680uLL
                  / (unsigned __int64)PerformanceFrequency.QuadPart;
            else
              v10 = 10000000 * (v9.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
                  + 10000000
                  * (v9.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
                  / PerformanceFrequency.QuadPart;
            v11 = -1LL;
            if ( *(_BYTE *)(a1 + 2928) )
              v11 = *(_QWORD *)(a1 + 2912);
            v12 = *(_DWORD *)(a1 + 60);
            if ( v12 )
            {
              v13 = a1 + 408;
              v14 = v12;
              do
              {
                v15 = *(_QWORD *)(*(_QWORD *)v13 + 128LL);
                if ( v15 && v11 >= v15 )
                  v11 = *(_QWORD *)(*(_QWORD *)v13 + 128LL);
                v13 += 8LL;
                --v14;
              }
              while ( v14 );
            }
            if ( (v7 || IsFlipQueueBusy) && v11 >= v10 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1) )
              v11 = v10 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
            if ( v11 == -1LL )
            {
              Timeout = 0LL;
              *(_BYTE *)(a1 + 924) = 1;
              v17 = 3;
            }
            else
            {
              if ( v11 <= v10 )
                v25.QuadPart = 0LL;
              else
                v25.QuadPart = v10 - v11;
              Timeout = &v25;
              *(_BYTE *)(a1 + 924) = 0;
              v17 = 2;
            }
          }
          else
          {
            Timeout = 0LL;
            v17 = 1;
            *(_BYTE *)(a1 + 924) = 0;
          }
          if ( v17 - 1 > 3 )
          {
            v2 = -1073741811;
          }
          else
          {
            v18 = MEMORY[0xFFFFF78000000320];
            v19 = 0LL;
            v20 = v17;
            do
            {
              v21 = Event[v19++];
              *(_QWORD *)&v21[1].Header.Lock = v18;
              *(__int64 *)((char *)&v28 + v19 * 8) = (__int64)v21;
              --v20;
            }
            while ( v20 );
            v2 = KeWaitForMultipleObjects(v17, &Object, WaitAny, Executive, 0, 0, Timeout, 0LL);
          }
          *(_BYTE *)(a1 + 924) = 0;
        }
        while ( v2 > 1 && v2 != 258 );
        v24[0] = 0;
        if ( v2 != 258 || !(unsigned int)VidSchiCheckHwProgress(a1, v24) )
          break;
        if ( v24[0] )
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
  if ( !VidSchIsTDRPending(a1) )
    return v2;
  return 258LL;
}

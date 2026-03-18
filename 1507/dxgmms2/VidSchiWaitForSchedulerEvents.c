/*
 * XREFs of VidSchiWaitForSchedulerEvents @ 0x1C0032900
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0004BB0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiGetSchedulerStatus @ 0x1C0004BA0 (VidSchiGetSchedulerStatus.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 *     VidSchIsTDRPending @ 0x1C00051E0 (VidSchIsTDRPending.c)
 *     VidSchiIsFlipQueueBusy @ 0x1C00052A4 (VidSchiIsFlipQueueBusy.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     VidSchiCheckHwProgress @ 0x1C0032B80 (VidSchiCheckHwProgress.c)
 *     VidSchiHandleControlEvent @ 0x1C00768E0 (VidSchiHandleControlEvent.c)
 */

__int64 __fastcall VidSchiWaitForSchedulerEvents(struct _VIDSCH_GLOBAL *a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // ebp
  PRKEVENT *v4; // rdi
  PRKEVENT v5; // rcx
  __int64 v6; // r9
  bool v7; // bl
  char v8; // dl
  union _LARGE_INTEGER *Timeout; // r9
  ULONG v10; // r10d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  PRKEVENT v14; // rcx
  PRKEVENT v16; // rcx
  union _LARGE_INTEGER v17; // [rsp+40h] [rbp-68h] BYREF
  PRKEVENT Event[2]; // [rsp+48h] [rbp-60h] BYREF
  char *v19; // [rsp+58h] [rbp-50h]
  PVOID Object; // [rsp+60h] [rbp-48h] BYREF

  Event[0] = (PRKEVENT)((char *)a1 + 1352);
  Event[1] = (PRKEVENT)((char *)a1 + 1296);
  v19 = (char *)a1 + 1464;
  v17.QuadPart = -(__int64)((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
  while ( 2 )
  {
    v2 = 0;
    if ( (unsigned int)VidSchiGetSchedulerStatus((__int64)a1) == 1 )
      v3 = 2;
    else
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
        goto LABEL_7;
    }
    v16 = Event[v2];
    v16[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v16);
LABEL_7:
    if ( v2 != v3 )
      goto LABEL_20;
    VidSchiProfilePerformanceTick(14LL, (__int64)a1, 0LL, v6, 0LL, 0LL, 0LL, 0LL);
    do
    {
      v7 = *((_DWORD *)a1 + 225) != 0;
      VidSchiIsFlipQueueBusy();
      if ( (unsigned int)VidSchiGetSchedulerStatus((__int64)a1) == 1 )
      {
        if ( *((_BYTE *)a1 + 2600) )
        {
          Timeout = (union _LARGE_INTEGER *)((char *)a1 + 2592);
        }
        else
        {
          if ( !v7 && !v8 )
          {
            Timeout = 0LL;
            *((_BYTE *)a1 + 884) = 1;
            v10 = 3;
            goto LABEL_14;
          }
          Timeout = &v17;
        }
        v10 = 2;
        *((_BYTE *)a1 + 884) = 0;
        goto LABEL_14;
      }
      Timeout = 0LL;
      v10 = 1;
      *((_BYTE *)a1 + 884) = 0;
LABEL_14:
      if ( v10 - 1 > 3 )
      {
        v2 = -1073741811;
      }
      else
      {
        v11 = MEMORY[0xFFFFF78000000320];
        v12 = 0LL;
        v13 = v10;
        do
        {
          v14 = Event[v12++];
          *(_QWORD *)&v14[1].Header.Lock = v11;
          (&v19)[v12] = (char *)v14;
          --v13;
        }
        while ( v13 );
        v2 = KeWaitForMultipleObjects(v10, &Object, WaitAny, Executive, 0, 0, Timeout, 0LL);
      }
      *((_BYTE *)a1 + 884) = 0;
    }
    while ( v2 > 1 && (v2 != 258 || (unsigned int)VidSchiCheckHwProgress(a1)) );
    VidSchiProfilePerformanceTick(15LL, (__int64)a1, 0LL, (__int64)Timeout, 0LL, 0LL, 0LL, 0LL);
LABEL_20:
    if ( !v2 )
    {
      VidSchiHandleControlEvent(a1);
      if ( VidSchIsTDRPending((__int64)a1) )
        return 258LL;
      continue;
    }
    break;
  }
  if ( !VidSchIsTDRPending((__int64)a1) )
    return v2;
  return 258LL;
}

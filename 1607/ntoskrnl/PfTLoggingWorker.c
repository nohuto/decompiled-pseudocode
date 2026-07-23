/*
 * XREFs of PfTLoggingWorker @ 0x14055B69C
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     KeSetBasePriorityThread @ 0x14007EE14 (KeSetBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PfTGenerateTrace @ 0x1403E7030 (PfTGenerateTrace.c)
 *     PfpFlushBuffers @ 0x1403E9660 (PfpFlushBuffers.c)
 */

void __fastcall PfTLoggingWorker(char *StartContext)
{
  NTSTATUS v2; // ebx
  int v3; // ebx
  int v4; // ebx
  unsigned int v5; // ebx
  unsigned __int8 v6; // al
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  unsigned int v10; // ebx
  unsigned __int8 v11; // al
  int v12; // edi
  LARGE_INTEGER Interval; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Object[4]; // [rsp+58h] [rbp-B0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+78h] [rbp-90h] BYREF

  Interval.QuadPart = -300000LL;
  Timeout.QuadPart = -3000000000LL;
  KeSetBasePriorityThread(KeGetCurrentThread(), -1);
  Object[0] = StartContext + 96;
  Object[1] = StartContext + 32;
  Object[2] = StartContext + 8;
  Object[3] = &Event;
  qword_140328100 = KiQueryUnbiasedInterruptTime();
  while ( 1 )
  {
    do
    {
      v2 = KeWaitForMultipleObjects(4u, Object, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
      if ( v2 == 258 )
        v2 = 3;
    }
    while ( v2 >= 4 );
    KeResetEvent((PRKEVENT)Object[v2]);
    if ( !v2 )
      break;
    if ( dword_140328258 >= (unsigned int)dword_14032825C )
    {
      if ( v2 == 1 )
        goto LABEL_31;
    }
    else
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 == 1 )
          {
            v5 = 0;
            while ( 1 )
            {
              v6 = PfpFlushBuffers();
              v7 = v6;
              if ( !v6 && (unsigned int)PfTGenerateTrace() == -1073741670 )
                break;
              ++v5;
              if ( v7 || v5 >= 0x3E8 )
                goto LABEL_13;
            }
            KeDelayExecutionThread(0, 0, &Interval);
LABEL_13:
            if ( (unsigned __int64)(KiQueryUnbiasedInterruptTime() - qword_140328100) > 0xB2D05E00 )
              PfTGenerateTrace();
          }
        }
        else
        {
          v8 = (unsigned __int8)PfpFlushBuffers();
          v9 = PfTGenerateTrace();
          if ( !v8 )
          {
            if ( v9 == -1073741670 )
              KeDelayExecutionThread(0, 0, &Interval);
            PfpFlushBuffers();
          }
        }
      }
      else
      {
        v10 = 0;
        do
        {
          v11 = PfpFlushBuffers();
          v12 = v11;
          if ( (!v11 || *((_DWORD *)StartContext + 20)) && (unsigned int)PfTGenerateTrace() == -1073741670 )
          {
            KeDelayExecutionThread(0, 0, &Interval);
            v10 += 1000;
          }
          else
          {
            ++v10;
          }
        }
        while ( !v12 && v10 < 0x2710 );
LABEL_31:
        KeSetEvent((PRKEVENT)(StartContext + 56), 0, 0);
      }
    }
  }
}

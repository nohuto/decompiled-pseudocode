/*
 * XREFs of PfTLoggingWorker @ 0x1405C2D20
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KeSetBasePriorityThread @ 0x14011ABD0 (KeSetBasePriorityThread.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PfpFlushBuffers @ 0x1404F7BD0 (PfpFlushBuffers.c)
 *     PfTGenerateTrace @ 0x1404F8758 (PfTGenerateTrace.c)
 */

void __fastcall PfTLoggingWorker(char *StartContext)
{
  char *v2; // rsi
  NTSTATUS v3; // ebx
  int v4; // ebx
  int v5; // ebx
  unsigned int v6; // ebx
  unsigned __int8 v7; // al
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned __int8 v12; // al
  int v13; // edi
  LARGE_INTEGER Interval; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp-B8h] BYREF
  char *v16; // [rsp+58h] [rbp-B0h]
  PVOID Object[5]; // [rsp+60h] [rbp-A8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+88h] [rbp-80h] BYREF

  v16 = StartContext;
  Timeout.QuadPart = -3000000000LL;
  Interval.QuadPart = -300000LL;
  KeSetBasePriorityThread(KeGetCurrentThread(), -1);
  Object[0] = StartContext + 96;
  Object[1] = StartContext + 32;
  Object[2] = StartContext + 8;
  Object[3] = &stru_140367D90;
  v2 = v16;
  qword_1403502C0 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  while ( 1 )
  {
    do
    {
      v3 = KeWaitForMultipleObjects(4u, Object, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
      if ( v3 == 258 )
        v3 = 3;
    }
    while ( v3 >= 4 );
    KeResetEvent((PRKEVENT)Object[v3]);
    if ( !v3 )
      break;
    if ( dword_140350418 >= (unsigned int)dword_14035041C )
    {
      if ( v3 == 1 )
        goto LABEL_20;
    }
    else
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 == 1 )
          {
            v6 = 0;
            while ( 1 )
            {
              v7 = PfpFlushBuffers();
              v8 = v7;
              if ( !v7 && (unsigned int)PfTGenerateTrace() == -1073741670 )
                break;
              ++v6;
              if ( v8 || v6 >= 0x3E8 )
                goto LABEL_13;
            }
            KeDelayExecutionThread(0, 0, &Interval);
LABEL_13:
            if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - qword_1403502C0 - MEMORY[0xFFFFF780000003B0]) > 0xB2D05E00 )
              PfTGenerateTrace();
          }
        }
        else
        {
          v9 = (unsigned __int8)PfpFlushBuffers();
          v10 = PfTGenerateTrace();
          if ( !v9 )
          {
            if ( v10 == -1073741670 )
              KeDelayExecutionThread(0, 0, &Interval);
            PfpFlushBuffers();
          }
        }
      }
      else
      {
        v11 = 0;
        do
        {
          v12 = PfpFlushBuffers();
          v13 = v12;
          if ( (!v12 || *((_DWORD *)v2 + 20)) && (unsigned int)PfTGenerateTrace() == -1073741670 )
          {
            KeDelayExecutionThread(0, 0, &Interval);
            v11 += 1000;
          }
          else
          {
            ++v11;
          }
        }
        while ( !v13 && v11 < 0x2710 );
LABEL_20:
        KeSetEvent((PRKEVENT)(v2 + 56), 0, 0);
      }
    }
  }
}

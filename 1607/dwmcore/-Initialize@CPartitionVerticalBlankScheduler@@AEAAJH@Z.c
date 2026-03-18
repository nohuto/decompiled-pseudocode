/*
 * XREFs of ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJH@Z @ 0x180046F5C
 * Callers:
 *     ?Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoRenderEngine@@PEAPEAV1@PEAPEAU_DWM_TIMING_INFO_EX@@@Z @ 0x1800A9E74 (-Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoR.c)
 * Callees:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180047008 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::Initialize(CPartitionVerticalBlankScheduler *this, int nPriority)
{
  HANDLE WaitableTimerW; // rax
  int v5; // eax
  signed int v6; // ebx
  HANDLE Thread; // rax
  signed int LastError; // eax
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]

  *((_QWORD *)this + 12) = *(_QWORD *)(*((_QWORD *)this + 18) + 8LL);
  SetLastError(0);
  WaitableTimerW = CreateWaitableTimerW(0LL, 0, 0LL);
  *((_QWORD *)this + 14) = WaitableTimerW;
  if ( !WaitableTimerW )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    v11 = 220;
    if ( v6 >= 0 )
      v6 = -2003304445;
    goto LABEL_12;
  }
  v5 = CPartitionVerticalBlankScheduler::Reinitialize(this);
  v6 = v5;
  if ( v5 < 0 )
  {
    v11 = 225;
    v10 = v5;
    goto LABEL_14;
  }
  Thread = CreateThread(0LL, 0LL, CPartitionThread::ThreadMain, this, 0, (LPDWORD)this + 4);
  *((_QWORD *)this + 1) = Thread;
  if ( !Thread )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Bu);
    v11 = 230;
LABEL_12:
    v10 = v6;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v11);
    return (unsigned int)v6;
  }
  SetThreadPriority(Thread, nPriority);
  return 0;
}

/*
 * XREFs of ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00E51EC
 * Callers:
 *     ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x1C00E4DC0 (-BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00035C0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00BFA8C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C00BFB94 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ @ 0x1C01443F4 (-TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C015DBF0 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C015DC70 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1C015E97C (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C015EB3C (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C015EB74 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C015F7A8 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C015F920 (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C015FBB0 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorker(BLTQUEUE *this)
{
  struct _KEVENT *v2; // rcx
  struct _KEVENT *v3; // rax
  ULONG v4; // ecx
  NTSTATUS v5; // eax
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  int v8; // edx
  LONGLONG v9; // rdi
  LARGE_INTEGER v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int8 v13; // dl
  __int64 v14; // rax
  __int128 v15; // [rsp+40h] [rbp-C0h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[8]; // [rsp+58h] [rbp-A8h] BYREF
  DXGPUSHLOCK *v18; // [rsp+60h] [rbp-A0h]
  int v19; // [rsp+68h] [rbp-98h]
  struct _KEVENT v20; // [rsp+70h] [rbp-90h] BYREF
  struct _KEVENT v21; // [rsp+88h] [rbp-78h] BYREF
  struct _KEVENT v22; // [rsp+A0h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+B8h] [rbp-48h] BYREF
  struct _KMUTANT Mutex; // [rsp+D0h] [rbp-30h] BYREF
  struct _KMUTANT v25; // [rsp+108h] [rbp+8h] BYREF
  struct _KMUTANT v26; // [rsp+140h] [rbp+40h] BYREF
  _KTIMER Timer; // [rsp+180h] [rbp+80h] BYREF
  PVOID Object; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _KEVENT *v29; // [rsp+1C8h] [rbp+C8h]
  struct _KEVENT *v30; // [rsp+1D0h] [rbp+D0h]
  __int64 v31; // [rsp+1D8h] [rbp+D8h]
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+1E0h] [rbp+E0h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  *((_QWORD *)this + 30) = &Event;
  KeInitializeEvent(&v22, SynchronizationEvent, 0);
  *((_QWORD *)this + 31) = &v22;
  KeInitializeEvent(&v21, SynchronizationEvent, 0);
  KeInitializeEvent(&v20, SynchronizationEvent, 0);
  KeInitializeMutex(&Mutex, 0);
  *((_QWORD *)this + 1) = &Mutex;
  KeInitializeMutex(&v26, 0);
  *((_QWORD *)this + 7) = &v26;
  KeInitializeMutex(&v25, 0);
  *((_QWORD *)this + 299) = &v25;
  KeInitializeTimerEx(&Timer, SynchronizationTimer);
  *((_QWORD *)this + 41) = &Timer;
  v2 = (struct _KEVENT *)*((_QWORD *)this + 29);
  *((_QWORD *)this + 38) = KeGetCurrentThread();
  KeSetEvent(v2, 0, 0);
  v15 = 0uLL;
  while ( 1 )
  {
    if ( _InterlockedExchange((volatile __int32 *)this + 66, 0) )
      BLTQUEUE::DisableHwVSyncWorker(this);
    Object = (PVOID)*((_QWORD *)this + 30);
    if ( (v15 & 3) != 0 )
      BLTQUEUE::StartVSync(this, 0);
    if ( (*((_DWORD *)this + 168) & 2) != 0 )
    {
      if ( !*((_BYTE *)this + 220) )
      {
        v29 = (struct _KEVENT *)*((_QWORD *)this + 40);
        v30 = &v20;
        if ( *((_BYTE *)this + 221) )
        {
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, (struct _KTHREAD **)this + 19);
          DXGPUSHLOCK::AcquireExclusive(v18);
          v19 = 2;
          v9 = 0LL;
          v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
          v11 = *((_QWORD *)this + 25);
          if ( v11 > 0 )
          {
            v12 = *((_QWORD *)this + 24);
            if ( v12 > 0 && v10.QuadPart > v12 )
              v9 = 10000000
                 * (v10.QuadPart - v11 * ((v10.QuadPart - v12) / v11 + 1) - v12)
                 / PerformanceFrequency.QuadPart;
          }
          ExSetTimer(*((_QWORD *)this + 40), v9, 0LL, 0LL);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
        }
        goto LABEL_9;
      }
      v29 = (struct _KEVENT *)*((_QWORD *)this + 15);
      v3 = (struct _KEVENT *)*((_QWORD *)this + 41);
    }
    else
    {
      v29 = &v21;
      v3 = &v20;
    }
    v30 = v3;
LABEL_9:
    if ( (v15 & 1) != 0 )
    {
      v4 = 4;
      v31 = *((_QWORD *)&v15 + 1);
    }
    else
    {
      v4 = 3;
    }
    v5 = KeWaitForMultipleObjects(v4, &Object, WaitAny, Executive, 0, 1u, 0LL, &WaitBlockArray);
    v15 = 0uLL;
    if ( v5 )
    {
      switch ( v5 )
      {
        case 1:
          if ( g_TdrForceDodVSyncTimeout && TdrIsDodVSyncTimeoutForcedFlip() )
          {
            v13 = 1;
            goto LABEL_45;
          }
          BLTQUEUE::ProcessBltQueue((__int64)this, 1, (__int64)&v15);
          if ( !*((_DWORD *)this + 35) && (v15 & 3) == 0 && ++*((_DWORD *)this + 36) > 0xAu )
            BLTQUEUE::StopVSync(this, 0);
          break;
        case 2:
          v13 = 0;
LABEL_45:
          BLTQUEUE::ProcessVSyncTdrWorker(this, v13);
          break;
        case 3:
          v8 = 2;
LABEL_20:
          BLTQUEUE::ProcessBltQueue((__int64)this, v8, (__int64)&v15);
          break;
        case 257:
          v14 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v14 + 24) = this;
          WdLogEvent5_WdError(v14);
          break;
      }
    }
    else
    {
      v6 = *((_OWORD *)this + 17);
      *((_OWORD *)this + 32) = *((_OWORD *)this + 16);
      v7 = *((_QWORD *)this + 36);
      *((_OWORD *)this + 33) = v6;
      *((_QWORD *)this + 68) = v7;
      *((LARGE_INTEGER *)this + 63) = KeQueryPerformanceCounter(0LL);
      if ( *((_BYTE *)this + 256) )
      {
        KeAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(*((_QWORD *)this + 34) + 40LL) + 56LL));
        *((_DWORD *)this + 168) |= 1u;
        *((_BYTE *)this + 256) = 0;
        BLTQUEUE::FinishCommand((LARGE_INTEGER *)this, 0);
      }
      else if ( *((_BYTE *)this + 257) )
      {
        BLTQUEUE::ResetWorker(this);
      }
      else if ( *((_BYTE *)this + 260) )
      {
        BLTQUEUE::ResetInternal(this);
        *((_BYTE *)this + 260) = 0;
        BLTQUEUE::FinishCommand((LARGE_INTEGER *)this, 0);
        *((_QWORD *)this + 299) = 0LL;
        PsTerminateSystemThread(0);
      }
      else if ( *((_BYTE *)this + 258) )
      {
        BLTQUEUE::UpdateDisplayModeInfoWorker(this);
      }
      else if ( *((_BYTE *)this + 259) )
      {
        BLTQUEUE::StartVSync(this, 0);
        *((_BYTE *)this + 259) = 0;
        ++*((_DWORD *)this + 35);
        *((_DWORD *)this + 36) = 0;
      }
      if ( !*((_BYTE *)this + 263) )
      {
        v8 = 0;
        goto LABEL_20;
      }
      BLTQUEUE::DiscardPendingPresent(this);
      *((_QWORD *)this + 28) = 0LL;
      *((_BYTE *)this + 263) = 0;
      BLTQUEUE::FinishCommand((LARGE_INTEGER *)this, 0);
    }
  }
}

/*
 * XREFs of ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C00CF6B0
 * Callers:
 *     ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x1C00CEB30 (-BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00CF23C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C00CF47C (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C00CF504 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C00CF5D4 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C00CF9A8 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ @ 0x1C01670D4 (-TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01834D4 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C01835A4 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1C01842C4 (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C0184494 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01844CC (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorker(BLTQUEUE *this)
{
  struct _KEVENT *v2; // rax
  ULONG v3; // ecx
  NTSTATUS v4; // eax
  int v5; // edx
  LONGLONG v6; // rdi
  LARGE_INTEGER v7; // rax
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned __int8 v10; // dl
  __int64 v11; // rax
  __int64 WaitMode; // [rsp+28h] [rbp-E0h]
  BOOLEAN Alertable[8]; // [rsp+30h] [rbp-D8h]
  __int128 v14; // [rsp+48h] [rbp-C0h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp-B0h] BYREF
  DXGPUSHLOCK *v16[2]; // [rsp+60h] [rbp-A8h] BYREF
  int v17; // [rsp+70h] [rbp-98h]
  struct _KEVENT v18; // [rsp+78h] [rbp-90h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-78h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-60h] BYREF
  struct _KEVENT *p_Event; // [rsp+B0h] [rbp-58h]
  struct _KEVENT *v22; // [rsp+B8h] [rbp-50h]
  __int64 v23; // [rsp+C0h] [rbp-48h]
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+C8h] [rbp-40h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeEvent(&v18, SynchronizationEvent, 0);
  *((_QWORD *)this + 56) = KeGetCurrentThread();
  KeSetEvent((PRKEVENT)((char *)this + 328), 0, 0);
  v14 = 0uLL;
  while ( 1 )
  {
    if ( _InterlockedExchange((volatile __int32 *)this + 102, 0) )
      BLTQUEUE::DisableHwVSyncWorker(this);
    Object = (char *)this + 352;
    if ( (v14 & 3) != 0 )
      BLTQUEUE::StartVSync(this, 0);
    if ( (*((_DWORD *)this + 212) & 2) != 0 )
    {
      if ( !*((_BYTE *)this + 316) )
      {
        p_Event = (struct _KEVENT *)*((_QWORD *)this + 58);
        v22 = &v18;
        if ( *((_BYTE *)this + 317) )
        {
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, (struct _KTHREAD **)this + 31);
          DXGPUSHLOCK::AcquireExclusive(v16[1]);
          v17 = 2;
          v6 = 0LL;
          v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
          v8 = *((_QWORD *)this + 37);
          if ( v8 > 0 )
          {
            v9 = *((_QWORD *)this + 36);
            if ( v9 > 0 && v7.QuadPart > v9 )
              v6 = 10000000 * (v7.QuadPart - v8 * ((v7.QuadPart - v9) / v8 + 1) - v9) / PerformanceFrequency.QuadPart;
          }
          ExSetTimer(*((_QWORD *)this + 58), v6, 0LL, 0LL, WaitMode, *(_QWORD *)Alertable);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
        }
        goto LABEL_9;
      }
      p_Event = (struct _KEVENT *)*((_QWORD *)this + 27);
      v2 = (struct _KEVENT *)((char *)this + 472);
    }
    else
    {
      p_Event = &Event;
      v2 = &v18;
    }
    v22 = v2;
LABEL_9:
    if ( (v14 & 1) != 0 )
    {
      v3 = 4;
      v23 = *((_QWORD *)&v14 + 1);
    }
    else
    {
      v3 = 3;
    }
    v4 = KeWaitForMultipleObjects(v3, &Object, WaitAny, Executive, 0, 1u, 0LL, &WaitBlockArray);
    v14 = 0uLL;
    if ( v4 )
    {
      switch ( v4 )
      {
        case 1:
          if ( g_TdrForceDodVSyncTimeout && TdrIsDodVSyncTimeoutForcedFlip() )
          {
            v10 = 1;
            goto LABEL_46;
          }
          BLTQUEUE::ProcessBltQueue((__int64)this, 1, (__int64)&v14);
          if ( !*((_DWORD *)this + 59) && (v14 & 3) == 0 && ++*((_DWORD *)this + 60) > 0xAu )
            BLTQUEUE::StopVSync(this, 0);
          break;
        case 2:
          v10 = 0;
LABEL_46:
          BLTQUEUE::ProcessVSyncTdrWorker(this, v10);
          break;
        case 3:
          v5 = 2;
LABEL_20:
          BLTQUEUE::ProcessBltQueue((__int64)this, v5, (__int64)&v14);
          break;
        case 257:
          v11 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v11 + 24) = this;
          WdLogEvent5_WdError(v11);
          break;
      }
    }
    else
    {
      *((_BYTE *)this + 688) = *((_BYTE *)this + 400);
      *((_BYTE *)this + 689) = *((_BYTE *)this + 401);
      *((_BYTE *)this + 690) = *((_BYTE *)this + 402);
      *((_BYTE *)this + 691) = *((_BYTE *)this + 403);
      *((_BYTE *)this + 692) = *((_BYTE *)this + 404);
      *((_BYTE *)this + 693) = *((_BYTE *)this + 405);
      *((_BYTE *)this + 694) = *((_BYTE *)this + 406);
      *((_BYTE *)this + 695) = *((_BYTE *)this + 407);
      *((_DWORD *)this + 174) = *((_DWORD *)this + 102);
      *((_QWORD *)this + 88) = *((_QWORD *)this + 52);
      *((_QWORD *)this + 88) = *((_QWORD *)this + 52);
      *((_DWORD *)this + 178) = *((_DWORD *)this + 106);
      *((_DWORD *)this + 180) = *((_DWORD *)this + 108);
      *((LARGE_INTEGER *)this + 85) = KeQueryPerformanceCounter(0LL);
      if ( *((_BYTE *)this + 400) )
      {
        KeAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(*((_QWORD *)this + 52) + 40LL) + 48LL));
        *((_DWORD *)this + 212) |= 1u;
        *((_BYTE *)this + 400) = 0;
        BLTQUEUE::FinishCommand(this, 0);
      }
      else if ( *((_BYTE *)this + 401) )
      {
        BLTQUEUE::ResetWorker(this);
      }
      else if ( *((_BYTE *)this + 404) )
      {
        BLTQUEUE::ResetInternal(this);
        *((_BYTE *)this + 404) = 0;
        BLTQUEUE::FinishCommand(this, 0);
        PsTerminateSystemThread(0);
      }
      else if ( *((_BYTE *)this + 402) )
      {
        BLTQUEUE::UpdateDisplayModeInfoWorker(this);
      }
      else if ( *((_BYTE *)this + 403) )
      {
        BLTQUEUE::StartVSync(this, 0);
        *((_BYTE *)this + 403) = 0;
        ++*((_DWORD *)this + 59);
        *((_DWORD *)this + 60) = 0;
      }
      if ( !*((_BYTE *)this + 407) )
      {
        v5 = 0;
        goto LABEL_20;
      }
      BLTQUEUE::DiscardPendingPresent(this);
      *((_QWORD *)this + 40) = 0LL;
      *((_BYTE *)this + 407) = 0;
      BLTQUEUE::FinishCommand(this, 0);
    }
  }
}

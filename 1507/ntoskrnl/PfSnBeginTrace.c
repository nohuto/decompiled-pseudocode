/*
 * XREFs of PfSnBeginTrace @ 0x140543FC8
 * Callers:
 *     PfSnBeginScenario @ 0x1404FD948 (PfSnBeginScenario.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     PsGetThreadId @ 0x1401191F0 (PsGetThreadId.c)
 *     PfSnActivateTrace @ 0x140126794 (PfSnActivateTrace.c)
 *     PfSnTraceBufferAllocate @ 0x1401268E0 (PfSnTraceBufferAllocate.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PfSnCleanupTrace @ 0x1404F6FD4 (PfSnCleanupTrace.c)
 */

__int64 __fastcall PfSnBeginTrace(_OWORD *a1, int a2, void *a3, struct _KTHREAD *a4, int a5, __int64 *a6)
{
  __int64 v8; // r15
  PVOID PoolWithTag; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 v13; // rtt
  __int16 v14; // ax
  __int128 v15; // xmm1
  char *v16; // rax
  int v17; // ecx
  int v18; // eax
  __int64 *v19; // rax
  __int64 **v20; // rcx
  int v21; // edi

  v8 = a2;
  if ( PfSnNumActiveTraces >= (unsigned int)dword_140353338 )
  {
    return (unsigned int)-1073741618;
  }
  else if ( FsRtlpVolumeStartupApplicationsComplete )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x258uLL, 0x54506343u);
    v11 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x258uLL);
      *(_DWORD *)v11 = 1128485697;
      KeInitializeTimerEx((PKTIMER)(v11 + 136), NotificationTimer);
      v12 = v11 + 104;
      *(_QWORD *)(v11 + 112) = v11 + 104;
      *(_QWORD *)(v11 + 104) = v11 + 104;
      *(_QWORD *)(v11 + 128) = 0LL;
      *(_DWORD *)(v11 + 456) = -1073741779;
      *(_QWORD *)(v11 + 464) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v11 + 520) = 0LL;
      *(_QWORD *)(v11 + 528) = 0LL;
      *(_QWORD *)(v11 + 272) = 0LL;
      KeInitializeDpc((PRKDPC)(v11 + 208), (PKDEFERRED_ROUTINE)PfSnTraceTimerRoutine, (PVOID)v11);
      *(_QWORD *)(v11 + 360) = 0LL;
      _m_prefetchw((const void *)(v11 + 360));
      v13 = *(_QWORD *)(v11 + 360) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v13 != _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 360), v13 + 2, v13) )
        ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v11 + 360));
      ObfReferenceObjectWithTag(a3, 0x73576650u);
      *(_QWORD *)(v11 + 352) = a3;
      *(_QWORD *)(v11 + 368) = 0LL;
      *(_QWORD *)(v11 + 384) = PfSnEndTraceWorkerThreadRoutine;
      *(_QWORD *)(v11 + 392) = v11;
      *(_DWORD *)(v11 + 400) = 0;
      v14 = *(_WORD *)(v11 + 486);
      *(_OWORD *)(v11 + 24) = *a1;
      *(_OWORD *)(v11 + 40) = a1[1];
      *(_OWORD *)(v11 + 56) = a1[2];
      v15 = a1[3];
      *(_DWORD *)(v11 + 88) = v8;
      *(_WORD *)(v11 + 486) ^= ((a5 != 0) ^ v14) & 1;
      v16 = (char *)&unk_140353318 + 16 * v8;
      *(_OWORD *)(v11 + 72) = v15;
      v17 = *(_DWORD *)v16;
      *(_DWORD *)(v11 + 340) = *(_DWORD *)v16;
      *(_QWORD *)(v11 + 200) = *((_QWORD *)v16 + 1);
      if ( v17 )
      {
        v18 = v17;
        if ( v17 > 0x100000 )
          v18 = 0x100000;
        *(_DWORD *)(v11 + 340) = v18;
        *(_QWORD *)(v11 + 96) = PfSnTraceBufferAllocate();
        if ( *(_QWORD *)(v11 + 96) )
        {
          v19 = *(__int64 **)(v11 + 96);
          v20 = *(__int64 ***)(v11 + 112);
          *v19 = v12;
          v19[1] = (__int64)v20;
          if ( *v20 != (__int64 *)v12 )
            __fastfail(3u);
          *v20 = v19;
          *(_QWORD *)(v11 + 112) = v19;
          *(_QWORD *)(v11 + 424) = -1LL;
          *(_QWORD *)(v11 + 416) = -8LL;
          *(_DWORD *)(v11 + 120) = 1;
          *(_QWORD *)(v11 + 408) = v11 + 416;
          if ( a4 )
          {
            *(_QWORD *)(v11 + 432) = a4;
            *(_QWORD *)(v11 + 440) = PsGetThreadId(a4);
          }
          v21 = PfSnActivateTrace(v11);
          if ( v21 >= 0 )
          {
            *a6 = v11;
            v11 = 0LL;
            v21 = 0;
          }
        }
        else
        {
          v21 = -1073741670;
        }
      }
      else
      {
        v21 = -1073741811;
      }
      if ( v11 )
      {
        PfSnCleanupTrace(v11);
        ExFreePoolWithTag((PVOID)v11, 0);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741661;
  }
  return (unsigned int)v21;
}

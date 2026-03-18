/*
 * XREFs of PfSnBeginTrace @ 0x1404D5984
 * Callers:
 *     PfSnBeginScenario @ 0x1404D6D78 (PfSnBeginScenario.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     PsGetThreadId @ 0x1400E3450 (PsGetThreadId.c)
 *     PfSnActivateTrace @ 0x1400FADC4 (PfSnActivateTrace.c)
 *     PfSnTraceBufferAllocate @ 0x1400FAED4 (PfSnTraceBufferAllocate.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PfSnCleanupTrace @ 0x1404D2D58 (PfSnCleanupTrace.c)
 */

__int64 __fastcall PfSnBeginTrace(_OWORD *a1, int a2, void *a3, struct _KTHREAD *a4, int a5, __int64 *a6)
{
  __int64 v8; // r15
  PVOID PoolWithTag; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int16 v13; // ax
  __int128 v14; // xmm1
  char *v15; // rax
  int v16; // ecx
  int v17; // eax
  __int64 *v18; // rax
  __int64 **v19; // rcx
  int v20; // edi

  v8 = a2;
  if ( PfSnNumActiveTraces >= (unsigned int)dword_1403055C8 )
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
      ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v11 + 360));
      ObfReferenceObjectWithTag(a3, 0x73576650u);
      *(_QWORD *)(v11 + 352) = a3;
      *(_QWORD *)(v11 + 368) = 0LL;
      *(_QWORD *)(v11 + 384) = PfSnEndTraceWorkerThreadRoutine;
      *(_QWORD *)(v11 + 392) = v11;
      *(_DWORD *)(v11 + 400) = 0;
      v13 = *(_WORD *)(v11 + 486);
      *(_OWORD *)(v11 + 24) = *a1;
      *(_OWORD *)(v11 + 40) = a1[1];
      *(_OWORD *)(v11 + 56) = a1[2];
      v14 = a1[3];
      *(_DWORD *)(v11 + 88) = v8;
      *(_WORD *)(v11 + 486) ^= ((a5 != 0) ^ v13) & 1;
      v15 = (char *)&unk_1403055A8 + 16 * v8;
      *(_OWORD *)(v11 + 72) = v14;
      v16 = *(_DWORD *)v15;
      *(_DWORD *)(v11 + 340) = *(_DWORD *)v15;
      *(_QWORD *)(v11 + 200) = *((_QWORD *)v15 + 1);
      if ( v16 )
      {
        v17 = v16;
        if ( v16 > 0x100000 )
          v17 = 0x100000;
        *(_DWORD *)(v11 + 340) = v17;
        *(_QWORD *)(v11 + 96) = PfSnTraceBufferAllocate();
        if ( *(_QWORD *)(v11 + 96) )
        {
          v18 = *(__int64 **)(v11 + 96);
          v19 = *(__int64 ***)(v11 + 112);
          *v18 = v12;
          v18[1] = (__int64)v19;
          if ( *v19 != (__int64 *)v12 )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(v11 + 112) = v18;
          *(_QWORD *)(v11 + 424) = -1LL;
          *(_QWORD *)(v11 + 416) = -8LL;
          *(_DWORD *)(v11 + 120) = 1;
          *(_QWORD *)(v11 + 408) = v11 + 416;
          if ( a4 )
          {
            *(_QWORD *)(v11 + 432) = a4;
            *(_QWORD *)(v11 + 440) = PsGetThreadId(a4);
          }
          v20 = PfSnActivateTrace(v11);
          if ( v20 >= 0 )
          {
            *a6 = v11;
            v11 = 0LL;
            v20 = 0;
          }
        }
        else
        {
          v20 = -1073741670;
        }
      }
      else
      {
        v20 = -1073741811;
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
  return (unsigned int)v20;
}

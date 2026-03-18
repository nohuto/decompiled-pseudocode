/*
 * XREFs of VidSchiSubmitCommandPacketToQueue @ 0x1C0043780
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C00013B0 (VidSchSubmitDeviceCommand.c)
 *     VidSchWaitForSingleSyncObject @ 0x1C0006320 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007120 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0040000 (VidSchEnqueueCpuEvent.c)
 *     VidSchSubmitCommand @ 0x1C0042B20 (VidSchSubmitCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchFlushPendingCommand @ 0x1C00A0EA0 (VidSchFlushPendingCommand.c)
 * Callees:
 *     VidSchiUpdatePriorityTables @ 0x1C0008AF0 (VidSchiUpdatePriorityTables.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchIncrementNumberOfMmIoFlipCommandPackets@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z @ 0x1C0010830 (-VidSchIncrementNumberOfMmIoFlipCommandPackets@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     VidSchIsVSyncEnabled @ 0x1C00425E0 (VidSchIsVSyncEnabled.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C005B900 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VidSchiSubmitCommandPacketToQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r9
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v13; // r14d
  struct _KTHREAD *v14; // rax
  int v15; // edx
  __int64 v16; // r8
  __int64 v17; // rbx
  int v18; // eax
  KPRIORITY v19; // ebp
  __int64 v20; // rdi
  __int64 *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  void (__fastcall *v32)(_QWORD); // rax
  __int64 v33; // rax
  int v34; // r9d
  int v35; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(v3 + 24);
  if ( (*((_BYTE *)a1 + 267) & 1) != 0
    && *(_DWORD *)(*(_QWORD *)(v5 + 8LL * *((unsigned int *)a1 + 95) + 2968) + 18872LL) != -1 )
  {
    v32 = *(void (__fastcall **)(_QWORD))(v5 + 2832);
    if ( v32 )
      v32(*(_QWORD *)(v5 + 2896));
  }
  ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 1024), 1u);
  *((_QWORD *)a1 + 13) = (*(_QWORD *)(v1 + 136))++;
  v6 = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(v4 + 152) = v6 * KeQueryTimeIncrement();
  if ( !*((_DWORD *)a1 + 12) )
  {
    *(_QWORD *)(v1 + 168) = *((_QWORD *)a1 + 13);
    ++*(_QWORD *)(v4 + 1144);
  }
  *(_QWORD *)(v5 + 928) = *((_QWORD *)a1 + 9);
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 38) != -1 )
    VidSchIncrementNumberOfMmIoFlipCommandPackets(a1, 1u);
  v8 = *((_DWORD *)a1 + 18);
  if ( (v8 & 0x1000) != 0 && (*((_DWORD *)a1 + 18) & 0xC00) != 0x400 )
  {
    v28 = *((unsigned int *)a1 + 38);
    if ( (_DWORD)v28 != -1 )
    {
      if ( (v8 & 0x40000) != 0 )
      {
        if ( (v8 & 0x1000000) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 952));
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 1124));
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 4 * v28 + 1060));
          if ( (*(_DWORD *)(v4 + 48) & 2) != 0 || *((int *)a1 + 96) >= 4 )
            VidSchIsVSyncEnabled(v5, v28);
        }
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 4 * v28 + 996));
        v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 24LL)
                                    + 8LL * *(unsigned int *)(*(_QWORD *)(v4 + 32) + 4LL))
                        + 8LL * (unsigned int)v28
                        + 520);
        if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 8LL * (unsigned int)v28 + 5504) + 8LL));
        _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
        if ( (*((_DWORD *)a1 + 18) & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 952));
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 1124));
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 4LL * (unsigned int)v28 + 1060));
        }
      }
    }
  }
  VidSchiProfilePerformanceTick(4LL, v5, v3, v7, 0LL, (__int64)a1, 0LL, 0LL);
  v35 = 1;
  VidSchiUpdatePriorityTables(v5, (__int64)a1, 0, &v35);
  v11 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(v11 + 2136) & 0x100) != 0 )
  {
    if ( CurrentThread != *(struct _KTHREAD **)(v11 + 136) && CurrentThread != *(struct _KTHREAD **)(v11 + 144) )
    {
      if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
        v13 = 31;
      else
        v13 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
      while ( 1 )
      {
LABEL_11:
        v14 = KeGetCurrentThread();
        if ( v14 == *(struct _KTHREAD **)(v11 + 136) || v14 == *(struct _KTHREAD **)(v11 + 144) )
        {
          if ( *(_DWORD *)(v1 + 780) )
            goto LABEL_18;
        }
        else if ( !*(_DWORD *)(v1 + 780) )
        {
          goto LABEL_18;
        }
        v15 = v13;
        v16 = v13;
        v17 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
        if ( v13 < 15 )
        {
          v15 = 15;
          v16 = 15LL;
        }
        v18 = *(_DWORD *)(v1 + 384);
        if ( v18 != v15 )
        {
          v26 = 0;
          if ( v18 > 15 )
          {
            v30 = v18 - 16;
            if ( (*(_DWORD *)(v17 + 4 * v30 + 2072))-- == 1 )
            {
              v26 = 1;
              *(_DWORD *)(v17 + 2068) &= ~(1 << *(_DWORD *)(v1 + 384));
            }
          }
          if ( v15 > 15 && ++*(_DWORD *)(v17 + 4 * v16 + 2008) == 1 )
          {
            v26 = 1;
            *(_DWORD *)(v17 + 2068) |= 1 << v15;
          }
          *(_DWORD *)(v1 + 384) = v15;
          if ( v26 )
          {
            v27 = *(_DWORD *)(v17 + 2068);
            if ( v27 )
              *(_DWORD *)(v17 + 188) = RtlFindMostSignificantBit(v27);
            else
              *(_DWORD *)(v17 + 188) = 15;
          }
        }
        v19 = *(_DWORD *)(v17 + 188);
        if ( v19 == KeQueryPriorityThread(*(PKTHREAD *)(v11 + 136)) )
          goto LABEL_18;
        ExReleaseResourceLite((PERESOURCE)(v11 + 1024));
        KeSetPriorityThread(*(PKTHREAD *)(v11 + 136), v19);
        ExAcquireResourceExclusiveLite((PERESOURCE)(v11 + 1024), 1u);
      }
    }
    if ( !*(_DWORD *)(v1 + 780) )
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(v11 + 1024), 1u);
      v13 = 15;
      goto LABEL_11;
    }
  }
  else if ( CurrentThread != *(struct _KTHREAD **)(v11 + 136) && CurrentThread != *(struct _KTHREAD **)(v11 + 144) )
  {
LABEL_18:
    ExReleaseResourceLite((PERESOURCE)(v11 + 1024));
  }
  if ( v35 )
  {
    *(_QWORD *)(v5 + 1368) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1336), 0, 0);
  }
  v20 = *(_QWORD *)(v4 + 8);
  if ( v20 )
  {
    v21 = *(__int64 **)(v20 + 560);
    if ( v21 )
    {
      if ( *((_BYTE *)v21 + 48) )
      {
        v22 = *v21;
        *((_BYTE *)v21 + 48) = 1;
        v23 = v22 + 41520;
        if ( v23 && *(struct _KTHREAD **)(v23 + 8) == KeGetCurrentThread() )
        {
          v33 = WdLogNewEntry5_WdAssertion(v10, v9);
          *(_QWORD *)(v33 + 24) = 1142LL;
          WdLogEvent5_WdAssertion(v33);
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v23, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v34 = *(_DWORD *)(v23 + 16);
            if ( v34 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v24, &EventBlockThread, v25, v34);
          }
          ExAcquirePushLockExclusiveEx(v23, 0LL);
        }
        *(_QWORD *)(v23 + 8) = KeGetCurrentThread();
        if ( (*((_DWORD *)v21 + 13) & 7) == 4 )
        {
          VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(v21, 3LL);
          KeSetEvent(*(PRKEVENT *)(*(_QWORD *)*v21 + 152LL), 0, 0);
        }
        *(_QWORD *)(v23 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v23, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
}

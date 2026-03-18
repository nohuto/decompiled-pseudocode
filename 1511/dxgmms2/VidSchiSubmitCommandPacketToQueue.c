/*
 * XREFs of VidSchiSubmitCommandPacketToQueue @ 0x1C0039E40
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0006F20 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0008030 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitDeviceCommand @ 0x1C00121A0 (VidSchSubmitDeviceCommand.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00382C0 (VidSchEnqueueCpuEvent.c)
 *     VidSchSubmitCommand @ 0x1C0039780 (VidSchSubmitCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     VidSchFlushPendingCommand @ 0x1C008B570 (VidSchFlushPendingCommand.c)
 * Callees:
 *     VidSchiUpdatePriorityTables @ 0x1C000AA90 (VidSchiUpdatePriorityTables.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchIncrementNumberOfMmIoFlipCommandPackets@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z @ 0x1C0012D50 (-VidSchIncrementNumberOfMmIoFlipCommandPackets@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     VidSchIsVSyncEnabled @ 0x1C0039080 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ecx
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v12; // ebp
  struct _KTHREAD *v13; // rax
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // rbx
  int v17; // eax
  KPRIORITY v18; // r15d
  int v19; // r9d
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  void (__fastcall *v25)(_QWORD); // rax
  int v26; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(v3 + 24);
  if ( (*((_BYTE *)a1 + 259) & 1) != 0
    && *(_DWORD *)(*(_QWORD *)(v5 + 8LL * *((unsigned int *)a1 + 93) + 2592) + 14768LL) != -1 )
  {
    v25 = *(void (__fastcall **)(_QWORD))(v5 + 2472);
    if ( v25 )
      v25(*(_QWORD *)(v5 + 2520));
  }
  ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 992), 1u);
  *((_QWORD *)a1 + 12) = (*(_QWORD *)(v1 + 136))++;
  v6 = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(v4 + 160) = v6 * KeQueryTimeIncrement();
  if ( !*((_DWORD *)a1 + 12) )
  {
    *(_QWORD *)(v1 + 168) = *((_QWORD *)a1 + 12);
    ++*(_QWORD *)(v4 + 1152);
  }
  *(_DWORD *)(v5 + 896) = *((_DWORD *)a1 + 18);
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 36) != -1 )
    VidSchIncrementNumberOfMmIoFlipCommandPackets(a1, 1u);
  v9 = *((_DWORD *)a1 + 18);
  if ( (v9 & 0x1000) != 0 && (*((_DWORD *)a1 + 18) & 0xC00) != 0x400 )
  {
    v21 = *((unsigned int *)a1 + 36);
    if ( (_DWORD)v21 != -1 )
    {
      if ( (v9 & 0x40000) != 0 )
      {
        if ( (v9 & 0x1000000) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 916));
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 1128));
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 4 * v21 + 1064));
          if ( (*(_DWORD *)(v4 + 48) & 2) != 0 || *((int *)a1 + 94) >= 4 )
            VidSchIsVSyncEnabled(v5, v21, v7, v8);
        }
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 4 * v21 + 1000));
        v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 24LL)
                                    + 8LL * *(unsigned int *)(*(_QWORD *)(v4 + 32) + 4LL))
                        + 8LL * (unsigned int)v21
                        + 520);
        if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 8LL * (unsigned int)v21 + 5128) + 8LL));
        _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
        if ( (*((_DWORD *)a1 + 18) & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 916));
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 1128));
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 4LL * (unsigned int)v21 + 1064));
        }
      }
    }
  }
  VidSchiProfilePerformanceTick(4LL, v5, v3, v8, 0LL, (__int64)a1, 0LL, 0LL);
  v26 = 1;
  VidSchiUpdatePriorityTables(v5, (__int64)a1, 0, &v26);
  v10 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(v10 + 2096) & 0x400) == 0 )
  {
    if ( CurrentThread == *(struct _KTHREAD **)(v10 + 128) || CurrentThread == *(struct _KTHREAD **)(v10 + 136) )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( CurrentThread != *(struct _KTHREAD **)(v10 + 128) && CurrentThread != *(struct _KTHREAD **)(v10 + 136) )
  {
    if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
      v12 = 31;
    else
      v12 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
    while ( 1 )
    {
LABEL_11:
      v13 = KeGetCurrentThread();
      if ( v13 == *(struct _KTHREAD **)(v10 + 128) || v13 == *(struct _KTHREAD **)(v10 + 136) )
      {
        if ( *(_DWORD *)(v1 + 756) )
          break;
      }
      else if ( !*(_DWORD *)(v1 + 756) )
      {
        break;
      }
      v14 = v12;
      v15 = v12;
      v16 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
      if ( v12 < 15 )
      {
        v14 = 15;
        v15 = 15LL;
      }
      v17 = *(_DWORD *)(v1 + 384);
      if ( v17 != v14 )
      {
        v19 = 0;
        if ( v17 > 15 )
        {
          v23 = v17 - 16;
          if ( (*(_DWORD *)(v16 + 4 * v23 + 2032))-- == 1 )
          {
            v19 = 1;
            *(_DWORD *)(v16 + 2028) &= ~(1 << *(_DWORD *)(v1 + 384));
          }
        }
        if ( v14 > 15 && ++*(_DWORD *)(v16 + 4 * v15 + 1968) == 1 )
        {
          v19 = 1;
          *(_DWORD *)(v16 + 2028) |= 1 << v14;
        }
        *(_DWORD *)(v1 + 384) = v14;
        if ( v19 )
        {
          v20 = *(_DWORD *)(v16 + 2028);
          if ( v20 )
            *(_DWORD *)(v16 + 180) = RtlFindMostSignificantBit(v20);
          else
            *(_DWORD *)(v16 + 180) = 15;
        }
      }
      v18 = *(_DWORD *)(v16 + 180);
      if ( v18 == KeQueryPriorityThread(*(PKTHREAD *)(v10 + 128)) )
        break;
      ExReleaseResourceLite((PERESOURCE)(v10 + 992));
      KeSetPriorityThread(*(PKTHREAD *)(v10 + 128), v18);
      ExAcquireResourceExclusiveLite((PERESOURCE)(v10 + 992), 1u);
    }
LABEL_18:
    ExReleaseResourceLite((PERESOURCE)(v10 + 992));
    goto LABEL_19;
  }
  if ( !*(_DWORD *)(v1 + 756) )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)(v10 + 992), 1u);
    v12 = 15;
    goto LABEL_11;
  }
LABEL_19:
  if ( v26 )
  {
    *(_QWORD *)(v5 + 1336) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1304), 0, 0);
  }
}

/*
 * XREFs of VidSchiSubmitCommandPacketToQueue @ 0x1C002EC90
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C0001048 (VidSchSubmitDeviceCommand.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005320 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchWaitForSingleSyncObject @ 0x1C001D890 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSubmitCommand @ 0x1C002E700 (VidSchSubmitCommand.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0077DB0 (VidSchEnqueueCpuEvent.c)
 *     VidSchFlushPendingCommand @ 0x1C0078390 (VidSchFlushPendingCommand.c)
 *     VidSchSubmitPagingCommand @ 0x1C00794D0 (VidSchSubmitPagingCommand.c)
 * Callees:
 *     VidSchiUpdatePriorityTables @ 0x1C0002C9C (VidSchiUpdatePriorityTables.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?VidSchIncrementNumberOfMmIoFlipCommandPackets@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z @ 0x1C0012200 (-VidSchIncrementNumberOfMmIoFlipCommandPackets@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z.c)
 *     VidSchiAdjustWorkerThreadPriority @ 0x1C002EF10 (VidSchiAdjustWorkerThreadPriority.c)
 *     VidSchIsVSyncEnabled @ 0x1C0078930 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  _QWORD *v1; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rdi
  bool v7; // r15
  void (__fastcall *v8)(_QWORD); // rax
  __int64 v9; // rbx
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // [rsp+70h] [rbp+8h] BYREF

  v1 = (_QWORD *)*((_QWORD *)a1 + 10);
  CurrentThread = KeGetCurrentThread();
  v4 = v1[12];
  v5 = v1[13];
  v6 = *(_QWORD *)(v4 + 24);
  v7 = CurrentThread != *(struct _KTHREAD **)(v6 + 128) && CurrentThread != *(struct _KTHREAD **)(v6 + 136);
  if ( (*((_DWORD *)a1 + 64) & 0x2000000) != 0
    && *(_DWORD *)(*(_QWORD *)(v6 + 8LL * *((unsigned int *)a1 + 93) + 2640) + 14736LL) != -1 )
  {
    v8 = *(void (__fastcall **)(_QWORD))(v6 + 2512);
    if ( v8 )
      v8(*(_QWORD *)(v6 + 2560));
  }
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 984), 1u);
  *((_QWORD *)a1 + 12) = v1[17]++;
  v9 = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(v5 + 160) = v9 * KeQueryTimeIncrement();
  if ( !*((_DWORD *)a1 + 12) )
  {
    v1[21] = *((_QWORD *)a1 + 12);
    ++*(_QWORD *)(v5 + 1024);
  }
  *(_DWORD *)(v6 + 888) = *((_DWORD *)a1 + 18);
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 36) != -1 )
    VidSchIncrementNumberOfMmIoFlipCommandPackets(a1, 1u);
  v11 = *((_DWORD *)a1 + 18);
  if ( (v11 & 0x2000) != 0 && ((v11 & 0x800) == 0 || (v11 & 0x1000) != 0) )
  {
    v12 = *((unsigned int *)a1 + 36);
    if ( (_DWORD)v12 != -1 )
    {
      if ( (v11 & 0x80000) != 0 )
      {
        if ( (v11 & 0x2000000) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 908));
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 1000));
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 4 * v12 + 936));
          if ( (*(_DWORD *)(v5 + 48) & 2) != 0 || *((int *)a1 + 94) >= 4 )
            VidSchIsVSyncEnabled(v6, (unsigned int)v12);
        }
      }
      else
      {
        v10 = *((unsigned int *)a1 + 36);
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 4 * v12 + 872));
        v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 24LL)
                                    + 8LL * *(unsigned int *)(*(_QWORD *)(v5 + 32) + 4LL))
                        + 8 * v12
                        + 520);
        if ( (*((_DWORD *)a1 + 18) & 0x100) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 8 * v10 + 5176) + 8LL));
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        if ( (*((_DWORD *)a1 + 18) & 8) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 908));
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 1000));
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 4 * v10 + 936));
        }
      }
    }
  }
  VidSchiProfilePerformanceTick(4LL, v6, v4, v10, 0LL, (__int64)a1, 0LL, 0LL);
  v14 = 1;
  VidSchiUpdatePriorityTables(v6, (__int64)a1, 0, &v14);
  if ( v7 )
    VidSchiAdjustWorkerThreadPriority(v1);
  else
    ExReleaseResourceLite((PERESOURCE)(v6 + 984));
  if ( v14 )
  {
    if ( v7 )
    {
      *(_QWORD *)(v6 + 1328) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v6 + 1296), 0, 0);
    }
  }
}

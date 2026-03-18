/*
 * XREFs of VidSchiSetPriorityContext @ 0x1C0010F74
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C00013B0 (VidSchSubmitDeviceCommand.c)
 *     VidSchSubmitCommand @ 0x1C0042B20 (VidSchSubmitCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSetPriorityContext @ 0x1C0066FC0 (VidSchSetPriorityContext.c)
 * Callees:
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C0001048 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C000CCBC (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     Template_pqq @ 0x1C001FCE8 (Template_pqq.c)
 */

void __fastcall VidSchiSetPriorityContext(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // r15
  char v5; // bl
  __int64 v6; // r14
  int v7; // r8d
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rax
  LARGE_INTEGER v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  v4 = a2;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1856), &LockHandle);
  if ( *(_DWORD *)(a1 + 392) != (_DWORD)v4 )
  {
    v8 = *(unsigned int *)(a1 + 396);
    v9 = gulPriorityToPriorityClass[v4];
    *(_DWORD *)(a1 + 396) = gulPublicPriorityToSchedulingPriority[v4];
    *(_DWORD *)(a1 + 392) = v4;
    *(_QWORD *)(a1 + 480) = *(_QWORD *)(v6 + 8 * v9 + 2424);
    *(_QWORD *)(a1 + 488) = *(_QWORD *)(v6 + 8 * v9 + 2472);
    if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
      *(_QWORD *)(a1 + 456) = *(_QWORD *)(a1 + 480);
    if ( (_DWORD)v8 != *(_DWORD *)(a1 + 396) )
    {
      if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
      {
        v13 = (_QWORD *)(a1 + 8);
        v14 = *(_QWORD *)(a1 + 8);
        v15 = *(_QWORD **)(a1 + 16);
        if ( *(_QWORD *)(v14 + 8) != a1 + 8 || (_QWORD *)*v15 != v13 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        v9 = v2 + 16 * (*(unsigned int *)(a1 + 396) + 122LL);
        v16 = *(_QWORD **)(v9 + 8);
        if ( *v16 != v9 )
          __fastfail(3u);
        *v13 = v9;
        *(_QWORD *)(a1 + 16) = v16;
        *v16 = v13;
        *(_QWORD *)(v9 + 8) = v13;
        LODWORD(v9) = *(_DWORD *)(a1 + 396);
        *(_DWORD *)(v2 + 1688) |= 1 << v9;
        if ( *(_QWORD *)(v2 + 16 * (v8 + 122)) == v2 + 16 * (v8 + 122) )
        {
          LODWORD(v9) = v8;
          *(_DWORD *)(v2 + 1688) &= ~(1 << v8);
        }
        v5 = 1;
      }
      if ( (*(_DWORD *)(a1 + 176) & 2) != 0 )
      {
        ++*(_DWORD *)(v2 + 4LL * *(unsigned int *)(a1 + 396) + 1696);
        v10 = *(unsigned int *)(a1 + 396);
        if ( *(_DWORD *)(v2 + 4 * v10 + 1696) == 1 )
        {
          LODWORD(v9) = *(_DWORD *)(a1 + 396);
          *(_DWORD *)(v2 + 1692) |= 1 << v10;
        }
        if ( (*(_DWORD *)(v2 + 4 * v8 + 1696))-- == 1 )
        {
          LODWORD(v9) = v8;
          *(_DWORD *)(v2 + 1692) &= ~(1 << v8);
        }
        if ( *(_QWORD *)(v2 + 8LL * *(unsigned int *)(v2 + 1552) + 1560) == a1 )
        {
          v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
          VidSchiStopExecutionTimeAtThisPriority(
            (struct _VIDSCH_NODE *)v2,
            v8,
            v12.QuadPart,
            PerformanceFrequency.QuadPart);
          VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v2, *(_DWORD *)(a1 + 396));
        }
        v5 = 1;
      }
      if ( bTracingEnabled )
      {
        v17 = *(_QWORD *)(a1 + 56);
        if ( !v17 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
          LODWORD(v17) = a1;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_pqq(v9, (unsigned int)&EventChangePriority, v7, v17, *(_DWORD *)(a1 + 392), *(_DWORD *)(a1 + 396));
      }
      if ( v5 )
      {
        *(_QWORD *)(v6 + 1368) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(v6 + 1336), 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

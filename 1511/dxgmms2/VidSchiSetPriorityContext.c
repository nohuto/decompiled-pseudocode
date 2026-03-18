/*
 * XREFs of VidSchiSetPriorityContext @ 0x1C0010018
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C00121A0 (VidSchSubmitDeviceCommand.c)
 *     VidSchSubmitCommand @ 0x1C0039780 (VidSchSubmitCommand.c)
 *     VidSchSetPriorityContext @ 0x1C003AD60 (VidSchSetPriorityContext.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 * Callees:
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C00031A8 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C000F444 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     Template_pqq @ 0x1C001E198 (Template_pqq.c)
 */

void __fastcall VidSchiSetPriorityContext(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // r15
  char v5; // bl
  __int64 v6; // r14
  int v7; // r8d
  __int64 v8; // rbp
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 QuadPart; // rbx
  __int64 *v13; // rdx
  __int64 **v14; // rax
  __int64 v15; // rdx
  __int64 **v16; // rax
  __int64 v17; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  v4 = a2;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1824), &LockHandle);
  if ( *(_DWORD *)(a1 + 392) != (_DWORD)v4 )
  {
    v8 = *(unsigned int *)(a1 + 396);
    v9 = (__int64 *)gulPriorityToPriorityClass[v4];
    *(_DWORD *)(a1 + 396) = gulPublicPriorityToSchedulingPriority[v4];
    *(_DWORD *)(a1 + 392) = v4;
    *(_QWORD *)(a1 + 480) = *(_QWORD *)(v6 + 8LL * (_QWORD)v9 + 2136);
    *(_QWORD *)(a1 + 488) = *(_QWORD *)(v6 + 8LL * (_QWORD)v9 + 2184);
    if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
      *(_QWORD *)(a1 + 456) = *(_QWORD *)(a1 + 480);
    if ( (_DWORD)v8 != *(_DWORD *)(a1 + 396) )
    {
      if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
      {
        v9 = (__int64 *)(a1 + 8);
        v13 = *(__int64 **)(a1 + 8);
        v14 = *(__int64 ***)(a1 + 16);
        if ( v13[1] != a1 + 8 || *v14 != v9 )
          __fastfail(3u);
        *v14 = v13;
        v13[1] = (__int64)v14;
        v15 = 16LL * *(unsigned int *)(a1 + 396) + v2 + 1912;
        v16 = *(__int64 ***)(v15 + 8);
        *v9 = v15;
        *(_QWORD *)(a1 + 16) = v16;
        if ( *v16 != (__int64 *)v15 )
          __fastfail(3u);
        *v16 = v9;
        *(_QWORD *)(v15 + 8) = v9;
        LODWORD(v9) = *(_DWORD *)(a1 + 396);
        *(_DWORD *)(v2 + 1648) |= 1 << (char)v9;
        if ( *(_QWORD *)(v2 + 16 * v8 + 1912) == v2 + 16 * v8 + 1912 )
        {
          LODWORD(v9) = v8;
          *(_DWORD *)(v2 + 1648) &= ~(1 << v8);
        }
        v5 = 1;
      }
      if ( (*(_DWORD *)(a1 + 176) & 2) != 0 )
      {
        ++*(_DWORD *)(v2 + 4LL * *(unsigned int *)(a1 + 396) + 1656);
        v10 = *(unsigned int *)(a1 + 396);
        if ( *(_DWORD *)(v2 + 4 * v10 + 1656) == 1 )
        {
          LODWORD(v9) = *(_DWORD *)(a1 + 396);
          *(_DWORD *)(v2 + 1652) |= 1 << v10;
        }
        if ( (*(_DWORD *)(v2 + 4 * v8 + 1656))-- == 1 )
        {
          LODWORD(v9) = v8;
          *(_DWORD *)(v2 + 1652) &= ~(1 << v8);
        }
        if ( *(_QWORD *)(v2 + 8LL * *(unsigned int *)(v2 + 1512) + 1520) == a1 )
        {
          QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
          VidSchiStopExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v2, v8, QuadPart, PerformanceFrequency.QuadPart);
          VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v2, *(_DWORD *)(a1 + 396), QuadPart);
        }
        v5 = 1;
      }
      if ( bTracingEnabled )
      {
        v17 = *(_QWORD *)(a1 + 56);
        if ( !v17 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
          LODWORD(v17) = a1;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_pqq(
            (_DWORD)v9,
            (unsigned int)&EventChangePriority,
            v7,
            v17,
            *(_DWORD *)(a1 + 392),
            *(_DWORD *)(a1 + 396));
      }
      if ( v5 )
      {
        *(_QWORD *)(v6 + 1336) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(v6 + 1304), 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

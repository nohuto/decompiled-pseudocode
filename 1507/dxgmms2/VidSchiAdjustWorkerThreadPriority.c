/*
 * XREFs of VidSchiAdjustWorkerThreadPriority @ 0x1C002EF10
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C002EC90 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiRun_PriorityTable @ 0x1C00448C4 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiComputeWorkerThreadPriority @ 0x1C002F060 (VidSchiComputeWorkerThreadPriority.c)
 */

void __fastcall VidSchiAdjustWorkerThreadPriority(__int64 a1)
{
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // ebp
  struct _KTHREAD *v5; // rax
  KPRIORITY v6; // r14d

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(v2 + 2144) & 0x400) != 0 )
  {
    if ( CurrentThread != *(struct _KTHREAD **)(v2 + 128) && CurrentThread != *(struct _KTHREAD **)(v2 + 136) )
    {
      v4 = 31;
      if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 < 31 )
        v4 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
      while ( 1 )
      {
LABEL_6:
        v5 = KeGetCurrentThread();
        if ( v5 == *(struct _KTHREAD **)(v2 + 128) || v5 == *(struct _KTHREAD **)(v2 + 136) )
        {
          if ( *(_DWORD *)(a1 + 756) )
            goto LABEL_10;
        }
        else if ( !*(_DWORD *)(a1 + 756) )
        {
          goto LABEL_10;
        }
        v6 = VidSchiComputeWorkerThreadPriority(a1, v4);
        if ( v6 == KeQueryPriorityThread(*(PKTHREAD *)(v2 + 128)) )
          goto LABEL_10;
        ExReleaseResourceLite((PERESOURCE)(v2 + 984));
        KeSetPriorityThread(*(PKTHREAD *)(v2 + 128), v6);
        ExAcquireResourceExclusiveLite((PERESOURCE)(v2 + 984), 1u);
      }
    }
    if ( !*(_DWORD *)(a1 + 756) )
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(v2 + 984), 1u);
      v4 = 15;
      goto LABEL_6;
    }
  }
  else if ( CurrentThread != *(struct _KTHREAD **)(v2 + 128) && CurrentThread != *(struct _KTHREAD **)(v2 + 136) )
  {
LABEL_10:
    ExReleaseResourceLite((PERESOURCE)(v2 + 984));
  }
}

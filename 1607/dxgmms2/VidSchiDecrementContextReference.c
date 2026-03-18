/*
 * XREFs of VidSchiDecrementContextReference @ 0x1C0001BA0
 * Callers:
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C0001AF0 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007F30 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000DA44 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C000E530 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiReportHwHang @ 0x1C0027844 (VidSchiReportHwHang.c)
 *     VidSchTerminateContext @ 0x1C00410C0 (VidSchTerminateContext.c)
 *     VidSchiRun_PriorityTable @ 0x1C006AC40 (VidSchiRun_PriorityTable.c)
 *     VidSchTerminateAdapter @ 0x1C00A19F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C00070B0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiDecrementDeviceReference @ 0x1C000F050 (VidSchiDecrementDeviceReference.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00214E0 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiDecrementContextReference(struct _VIDSCH_CONTEXT *a1, int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  struct _VIDSCH_CONTEXT **v6; // rcx
  __int64 v7; // rdx
  struct _VIDSCH_CONTEXT **v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1856), &LockHandle);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 18, 0xFFFFFFFF) == 1 )
  {
    v5 = *((_QWORD *)a1 + 1);
    v6 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 2);
    if ( *(struct _VIDSCH_CONTEXT **)(v5 + 8) != (struct _VIDSCH_CONTEXT *)((char *)a1 + 8)
      || *v6 != (struct _VIDSCH_CONTEXT *)((char *)a1 + 8) )
    {
      __fastfail(3u);
    }
    *v6 = (struct _VIDSCH_CONTEXT *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    v7 = *((_QWORD *)a1 + 3);
    v8 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 4);
    if ( *(struct _VIDSCH_CONTEXT **)(v7 + 8) != (struct _VIDSCH_CONTEXT *)((char *)a1 + 24)
      || *v8 != (struct _VIDSCH_CONTEXT *)((char *)a1 + 24) )
    {
      __fastfail(3u);
    }
    *v8 = (struct _VIDSCH_CONTEXT *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    while ( 1 )
    {
      v9 = VidSchiInterlockedRemoveHeadListIfExist(v4 + 1864, (char *)a1 + 712, (char *)a1 + 728);
      if ( !v9 )
        break;
      ExFreePoolWithTag((PVOID)(v9 - 8), 0);
    }
    if ( (*((_DWORD *)a1 + 28) & 0x100) != 0 )
    {
      while ( 1 )
      {
        v10 = VidSchiInterlockedRemoveHeadListIfExist(v4 + 1864, (char *)a1 + 736, (char *)a1 + 752);
        if ( !v10 )
          break;
        ExFreePoolWithTag((PVOID)(v10 - 8), 0);
      }
    }
    if ( bTracingEnabled )
      VidSchiFlushGpuWorkEntries(a1);
    operator delete[](*((void **)a1 + 123));
    VidSchiDecrementDeviceReference(*((PVOID *)a1 + 13));
    ExFreePoolWithTag(a1, 0);
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}

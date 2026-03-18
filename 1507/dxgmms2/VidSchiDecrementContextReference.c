/*
 * XREFs of VidSchiDecrementContextReference @ 0x1C0001880
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00022F0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C0003888 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C0004824 (VidSchiSetTransferContextRunningTime.c)
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C001BD20 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchiReportHwHang @ 0x1C001DFB4 (VidSchiReportHwHang.c)
 *     VidSchTerminateContext @ 0x1C002E1C0 (VidSchTerminateContext.c)
 *     VidSchiRun_PriorityTable @ 0x1C00448C4 (VidSchiRun_PriorityTable.c)
 *     VidSchTerminateAdapter @ 0x1C0079880 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0001150 (VidSchiDecrementDeviceReference.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0003310 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00128B4 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiDecrementContextReference(struct _VIDSCH_CONTEXT *a1, int a2)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  struct _VIDSCH_CONTEXT **v6; // rcx
  __int64 v7; // rdx
  struct _VIDSCH_CONTEXT **v8; // rax
  __int64 v9; // rax
  char *v10; // rax
  __int64 v11; // rdx
  char **v12; // rcx
  __int64 v13; // rdx
  struct _VIDSCH_CONTEXT **v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 18, 0xFFFFFFFF) == 1 )
  {
    if ( a2 )
    {
      v10 = (char *)a1 + 8;
      v11 = *((_QWORD *)a1 + 1);
      v12 = (char **)*((_QWORD *)a1 + 2);
      if ( *(char **)(v11 + 8) != v10 || *v12 != v10 )
        __fastfail(3u);
      *v12 = (char *)v11;
      *(_QWORD *)(v11 + 8) = v12;
      v13 = *((_QWORD *)a1 + 3);
      v14 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 4);
      if ( *(struct _VIDSCH_CONTEXT **)(v13 + 8) != (struct _VIDSCH_CONTEXT *)((char *)a1 + 24)
        || *v14 != (struct _VIDSCH_CONTEXT *)((char *)a1 + 24) )
      {
        __fastfail(3u);
      }
      *v14 = (struct _VIDSCH_CONTEXT *)v13;
      *(_QWORD *)(v13 + 8) = v14;
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1872), &LockHandle);
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
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    while ( 1 )
    {
      v9 = VidSchiInterlockedRemoveHeadListIfExist(v4 + 1880, (char *)a1 + 712, (char *)a1 + 728);
      if ( !v9 )
        break;
      ExFreePoolWithTag((PVOID)(v9 - 8), 0);
    }
    if ( bTracingEnabled )
      VidSchiFlushGpuWorkEntries(a1);
    operator delete(*((void **)a1 + 119));
    VidSchiDecrementDeviceReference(*((char **)a1 + 13), a2);
    ExFreePoolWithTag(a1, 0);
  }
}

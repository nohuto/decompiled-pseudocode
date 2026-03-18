/*
 * XREFs of VidSchiDecrementContextReference @ 0x1C00104B0
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008E10 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000EF58 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C000F790 (VidSchiSetTransferContextRunningTime.c)
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C0022120 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchiReportHwHang @ 0x1C0023200 (VidSchiReportHwHang.c)
 *     VidSchTerminateContext @ 0x1C003C380 (VidSchTerminateContext.c)
 *     VidSchiRun_PriorityTable @ 0x1C006A810 (VidSchiRun_PriorityTable.c)
 *     VidSchTerminateAdapter @ 0x1C008C0D0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007FC0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiDecrementDeviceReference @ 0x1C00110F8 (VidSchiDecrementDeviceReference.c)
 *     ??_V@YAXPEAX@Z @ 0x1C001132C (--_V@YAXPEAX@Z.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C001EE88 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiDecrementContextReference(struct _VIDSCH_CONTEXT *a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  struct _VIDSCH_CONTEXT **v5; // rcx
  __int64 v6; // rdx
  struct _VIDSCH_CONTEXT **v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rdx
  char *v10; // rax
  char **v11; // rcx
  __int64 v12; // rcx
  struct _VIDSCH_CONTEXT **v13; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 18, 0xFFFFFFFF) == 1 )
  {
    if ( a2 )
    {
      v9 = *((_QWORD *)a1 + 1);
      v10 = (char *)a1 + 8;
      v11 = (char **)*((_QWORD *)a1 + 2);
      if ( *(char **)(v9 + 8) != v10 || *v11 != v10 )
        __fastfail(3u);
      *v11 = (char *)v9;
      *(_QWORD *)(v9 + 8) = v11;
      v12 = *((_QWORD *)a1 + 3);
      v13 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 4);
      if ( *(struct _VIDSCH_CONTEXT **)(v12 + 8) != (struct _VIDSCH_CONTEXT *)((char *)a1 + 24)
        || *v13 != (struct _VIDSCH_CONTEXT *)((char *)a1 + 24) )
      {
        __fastfail(3u);
      }
      *v13 = (struct _VIDSCH_CONTEXT *)v12;
      *(_QWORD *)(v12 + 8) = v13;
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 1824), &LockHandle);
      v4 = *((_QWORD *)a1 + 1);
      v5 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 2);
      if ( *(struct _VIDSCH_CONTEXT **)(v4 + 8) != (struct _VIDSCH_CONTEXT *)((char *)a1 + 8)
        || *v5 != (struct _VIDSCH_CONTEXT *)((char *)a1 + 8) )
      {
        __fastfail(3u);
      }
      *v5 = (struct _VIDSCH_CONTEXT *)v4;
      *(_QWORD *)(v4 + 8) = v5;
      v6 = *((_QWORD *)a1 + 3);
      v7 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 4);
      if ( *(struct _VIDSCH_CONTEXT **)(v6 + 8) != (struct _VIDSCH_CONTEXT *)((char *)a1 + 24)
        || *v7 != (struct _VIDSCH_CONTEXT *)((char *)a1 + 24) )
      {
        __fastfail(3u);
      }
      *v7 = (struct _VIDSCH_CONTEXT *)v6;
      *(_QWORD *)(v6 + 8) = v7;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    while ( 1 )
    {
      v8 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v3 + 1832), (__int64 **)a1 + 89, (_DWORD *)a1 + 182);
      if ( !v8 )
        break;
      ExFreePoolWithTag(v8 - 1, 0);
    }
    if ( bTracingEnabled )
      VidSchiFlushGpuWorkEntries(a1);
    operator delete[](*((void **)a1 + 119));
    VidSchiDecrementDeviceReference(*((PVOID *)a1 + 13));
    ExFreePoolWithTag(a1, 0);
  }
}

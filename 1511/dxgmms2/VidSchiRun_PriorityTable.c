/*
 * XREFs of VidSchiRun_PriorityTable @ 0x1C006A810
 * Callers:
 *     VidSchiWorkerThread @ 0x1C006A780 (VidSchiWorkerThread.c)
 * Callees:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C00025A0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000ADA0 (VidSchiScheduleCommandToRun.c)
 *     VidSchIsTDRPending @ 0x1C000B6A0 (VidSchIsTDRPending.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000E204 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C000EA90 (VidSchiSubmitSignalCommand.c)
 *     VidSchiRewindPacket @ 0x1C000F53C (VidSchiRewindPacket.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C000F790 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiIncrementContextReference @ 0x1C00101E0 (VidSchiIncrementContextReference.c)
 *     VidSchiDecrementContextReference @ 0x1C00104B0 (VidSchiDecrementContextReference.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0012110 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C0012E38 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0012EAC (VidSchiProcessCompletedQueuePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C00392E0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C003AA00 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C008ABB8 (VidSchiSubmitRenderCommand.c)
 */

__int64 __fastcall VidSchiRun_PriorityTable(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r14d
  struct _KTHREAD *v12; // rax
  int v13; // edx
  __int64 v14; // r9
  __int64 v15; // rdi
  int v16; // eax
  KPRIORITY v17; // r15d
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  char v24; // [rsp+50h] [rbp+8h] BYREF

  do
  {
    v2 = VidSchiScheduleCommandToRun(a1, &v24);
    v3 = v2;
    if ( v2 )
    {
      v4 = *(_QWORD *)(v2 + 80);
      if ( v24 && *((_DWORD *)a1 + 610) != 2 )
      {
        VidSchiSetTransferContextRunningTime(*(_QWORD *)(v2 + 80), 0LL, 0);
        VidSchiRewindPacket(v3, 0LL, 1, 0);
        VidschiUnselectContext((struct _VIDSCH_CONTEXT *)v4);
        continue;
      }
      VidSchiIncrementContextReference(*(_QWORD *)(v2 + 80));
      v5 = *(_QWORD *)(v3 + 80);
      v6 = *(_QWORD *)(v5 + 96);
      v7 = *(_QWORD *)(*(_QWORD *)(v5 + 104) + 32LL);
      v8 = *(_DWORD *)(v3 + 48);
      if ( v8 )
      {
        switch ( v8 )
        {
          case 8:
            VidSchiSubmitPagingCommand((LARGE_INTEGER *)v3);
            break;
          case 3:
            VidSchiSubmitMmIoFlipCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
            break;
          case 4:
            VidSchiSubmitWaitCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
            break;
          case 5:
            VidSchiSubmitSignalCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
            break;
          case 6:
            (*(void (__fastcall **)(_QWORD, __int64))(v3 + 280))(*(_QWORD *)(v3 + 288), v7);
            VidSchiProcessCompletedQueuePacket((struct _VIDSCH_QUEUE_PACKET *)v3, v21, v22);
            break;
          case 7:
            VidSchiSubmitSoftwareCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
            break;
        }
      }
      else
      {
        if ( (*(_DWORD *)(v3 + 64) & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v6 + 2704));
          *(_QWORD *)(v7 + 360) |= 1LL << *(_WORD *)(v6 + 4);
        }
        if ( (*(_DWORD *)(v3 + 256) & 0x8000000) != 0 )
          VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)v3);
        else
          VidSchiSubmitRenderCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
      }
      v9 = *(_QWORD *)(*(_QWORD *)(v4 + 96) + 24LL);
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(v9 + 2096) & 0x400) != 0 )
      {
        if ( CurrentThread == *(struct _KTHREAD **)(v9 + 128) || CurrentThread == *(struct _KTHREAD **)(v9 + 136) )
        {
          if ( !*(_DWORD *)(v4 + 756) )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v9 + 992), 1u);
            v11 = 15;
            goto LABEL_16;
          }
          goto LABEL_12;
        }
        if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
          v11 = 31;
        else
          v11 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
        while ( 1 )
        {
LABEL_16:
          v12 = KeGetCurrentThread();
          if ( v12 == *(struct _KTHREAD **)(v9 + 128) || v12 == *(struct _KTHREAD **)(v9 + 136) )
          {
            if ( *(_DWORD *)(v4 + 756) )
              break;
          }
          else if ( !*(_DWORD *)(v4 + 756) )
          {
            break;
          }
          v13 = v11;
          v14 = v11;
          v15 = *(_QWORD *)(*(_QWORD *)(v4 + 96) + 24LL);
          if ( v11 < 15 )
          {
            v13 = 15;
            v14 = 15LL;
          }
          v16 = *(_DWORD *)(v4 + 384);
          if ( v16 != v13 )
          {
            v18 = 0;
            if ( v16 > 15 )
            {
              v19 = v16 - 16;
              if ( (*(_DWORD *)(v15 + 4 * v19 + 2032))-- == 1 )
              {
                v18 = 1;
                *(_DWORD *)(v15 + 2028) &= ~(1 << *(_DWORD *)(v4 + 384));
              }
            }
            if ( v13 > 15 && ++*(_DWORD *)(v15 + 4 * v14 + 1968) == 1 )
            {
              v18 = 1;
              *(_DWORD *)(v15 + 2028) |= 1 << v13;
            }
            *(_DWORD *)(v4 + 384) = v13;
            if ( v18 )
            {
              if ( *(_DWORD *)(v15 + 2028) )
                *(_DWORD *)(v15 + 180) = RtlFindMostSignificantBit(*(unsigned int *)(v15 + 2028));
              else
                *(_DWORD *)(v15 + 180) = 15;
            }
          }
          v17 = *(_DWORD *)(v15 + 180);
          if ( v17 == KeQueryPriorityThread(*(PKTHREAD *)(v9 + 128)) )
            break;
          ExReleaseResourceLite((PERESOURCE)(v9 + 992));
          KeSetPriorityThread(*(PKTHREAD *)(v9 + 128), v17);
          ExAcquireResourceExclusiveLite((PERESOURCE)(v9 + 992), 1u);
        }
      }
      else if ( CurrentThread == *(struct _KTHREAD **)(v9 + 128) || CurrentThread == *(struct _KTHREAD **)(v9 + 136) )
      {
        goto LABEL_12;
      }
      ExReleaseResourceLite((PERESOURCE)(v9 + 992));
LABEL_12:
      VidSchiSetTransferContextRunningTime(v4, 0LL, 0);
      VidschiUnselectContext((struct _VIDSCH_CONTEXT *)v4);
      VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)v4, 0);
    }
  }
  while ( !VidSchIsTDRPending((__int64)a1) || *((_DWORD *)a1 + 610) == 2 );
  return VidSchiRecoverFromTDR(a1);
}

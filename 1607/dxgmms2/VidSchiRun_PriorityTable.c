/*
 * XREFs of VidSchiRun_PriorityTable @ 0x1C006AC40
 * Callers:
 *     VidSchiWorkerThread @ 0x1C006ABB0 (VidSchiWorkerThread.c)
 * Callees:
 *     VidSchiSubmitSoftwareCommand @ 0x1C0001A3C (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiDecrementContextReference @ 0x1C0001BA0 (VidSchiDecrementContextReference.c)
 *     VidSchiIncrementContextReference @ 0x1C0001CE0 (VidSchiIncrementContextReference.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002180 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiScheduleCommandToRun @ 0x1C00098B0 (VidSchiScheduleCommandToRun.c)
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000D568 (VidSchiSubmitWaitCommand.c)
 *     VidSchiRewindPacket @ 0x1C000E11C (VidSchiRewindPacket.c)
 *     VidSchiSubmitSignalCommand @ 0x1C000E1C0 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C000E530 (VidSchiSetTransferContextRunningTime.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0010540 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiSubmitDeviceCommand @ 0x1C0041070 (VidSchiSubmitDeviceCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0042840 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0043F50 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00A03FC (VidSchiSubmitRenderCommand.c)
 *     VidSchiRecoverFromTDR @ 0x1C00A27F4 (VidSchiRecoverFromTDR.c)
 */

char __fastcall VidSchiRun_PriorityTable(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // rax
  LARGE_INTEGER *v3; // rdi
  __int64 v4; // rbx
  LARGE_INTEGER v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  DWORD LowPart; // eax
  __int64 v9; // r8
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char result; // al
  int v13; // r15d
  struct _KTHREAD *v14; // rax
  int v15; // edx
  __int64 v16; // r9
  __int64 v17; // rdi
  int v18; // eax
  KPRIORITY v19; // ebp
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // rcx
  char v24; // [rsp+50h] [rbp+8h] BYREF

  do
  {
    v2 = VidSchiScheduleCommandToRun(a1, &v24);
    v3 = (LARGE_INTEGER *)v2;
    if ( v2 )
    {
      v4 = *(_QWORD *)(v2 + 88);
      if ( v24 && *((_DWORD *)a1 + 700) != 2 )
      {
        VidSchiSetTransferContextRunningTime(*(_QWORD *)(v2 + 88), 0LL, 0);
        VidSchiRewindPacket((__int64)v3, 0LL, 1LL, 0LL);
        VidschiUnselectContext((struct _VIDSCH_CONTEXT *)v4);
        goto LABEL_13;
      }
      VidSchiIncrementContextReference(*(_QWORD *)(v2 + 88));
      v5 = v3[11];
      v6 = *(_QWORD *)(v5.QuadPart + 104);
      v7 = *(_QWORD *)(v5.QuadPart + 96);
      LowPart = v3[6].LowPart;
      v9 = *(_QWORD *)(v6 + 32);
      if ( LowPart )
      {
        switch ( LowPart )
        {
          case 8u:
            VidSchiSubmitPagingCommand(v3);
            break;
          case 3u:
            VidSchiSubmitMmIoFlipCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
            break;
          case 4u:
            VidSchiSubmitWaitCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
            break;
          case 5u:
            VidSchiSubmitSignalCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
            break;
          case 6u:
            VidSchiSubmitDeviceCommand((__int64)v3);
            break;
          case 7u:
            VidSchiSubmitSoftwareCommand((__int64)v3);
            break;
        }
      }
      else
      {
        if ( *(_BYTE *)(v6 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 160), 0, 0) )
          v3[8].LowPart &= ~4u;
        if ( (v3[8].LowPart & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v7 + 2744));
          v20 = *(_QWORD *)(v9 + 392);
          _bittestandset64(&v20, *(unsigned __int16 *)(v7 + 4));
          *(_QWORD *)(v9 + 392) = v20;
        }
        if ( (v3[33].LowPart & 0x8000000) != 0 )
          VidSchiSubmitRenderVirtualCommand((_VIDSCH_QUEUE_PACKET *)v3);
        else
          VidSchiSubmitRenderCommand((struct _VIDSCH_QUEUE_PACKET *)v3);
      }
      v10 = *(_QWORD *)(*(_QWORD *)(v4 + 96) + 24LL);
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(v10 + 2136) & 0x100) != 0 )
      {
        if ( CurrentThread == *(struct _KTHREAD **)(v10 + 136) || CurrentThread == *(struct _KTHREAD **)(v10 + 144) )
        {
          if ( !*(_DWORD *)(v4 + 780) )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v10 + 1024), 1u);
            v13 = 15;
            goto LABEL_16;
          }
          goto LABEL_12;
        }
        if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
          v13 = 31;
        else
          v13 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
        while ( 1 )
        {
LABEL_16:
          v14 = KeGetCurrentThread();
          if ( v14 == *(struct _KTHREAD **)(v10 + 136) || v14 == *(struct _KTHREAD **)(v10 + 144) )
          {
            if ( *(_DWORD *)(v4 + 780) )
              break;
          }
          else if ( !*(_DWORD *)(v4 + 780) )
          {
            break;
          }
          v15 = v13;
          v16 = v13;
          v17 = *(_QWORD *)(*(_QWORD *)(v4 + 96) + 24LL);
          if ( v13 < 15 )
          {
            v15 = 15;
            v16 = 15LL;
          }
          v18 = *(_DWORD *)(v4 + 384);
          if ( v18 != v15 )
          {
            v21 = 0;
            if ( v18 > 15 )
            {
              v22 = v18 - 16;
              if ( (*(_DWORD *)(v17 + 4 * v22 + 2072))-- == 1 )
              {
                v21 = 1;
                *(_DWORD *)(v17 + 2068) &= ~(1 << *(_DWORD *)(v4 + 384));
              }
            }
            if ( v15 > 15 && ++*(_DWORD *)(v17 + 4 * v16 + 2008) == 1 )
            {
              v21 = 1;
              *(_DWORD *)(v17 + 2068) |= 1 << v15;
            }
            *(_DWORD *)(v4 + 384) = v15;
            if ( v21 )
            {
              if ( *(_DWORD *)(v17 + 2068) )
                *(_DWORD *)(v17 + 188) = RtlFindMostSignificantBit(*(unsigned int *)(v17 + 2068));
              else
                *(_DWORD *)(v17 + 188) = 15;
            }
          }
          v19 = *(_DWORD *)(v17 + 188);
          if ( v19 == KeQueryPriorityThread(*(PKTHREAD *)(v10 + 136)) )
            break;
          ExReleaseResourceLite((PERESOURCE)(v10 + 1024));
          KeSetPriorityThread(*(PKTHREAD *)(v10 + 136), v19);
          ExAcquireResourceExclusiveLite((PERESOURCE)(v10 + 1024), 1u);
        }
      }
      else if ( CurrentThread == *(struct _KTHREAD **)(v10 + 136) || CurrentThread == *(struct _KTHREAD **)(v10 + 144) )
      {
        goto LABEL_12;
      }
      ExReleaseResourceLite((PERESOURCE)(v10 + 1024));
LABEL_12:
      VidSchiSetTransferContextRunningTime(v4, 0LL, 0);
      VidschiUnselectContext((struct _VIDSCH_CONTEXT *)v4);
      VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)v4, 0);
    }
LABEL_13:
    result = VidSchIsTDRPending((__int64)a1);
  }
  while ( !result || *((_DWORD *)a1 + 700) == 2 );
  if ( *((_DWORD *)a1 + 700) != 3 )
    return VidSchiRecoverFromTDR(a1);
  return result;
}

/*
 * XREFs of ?ndisNblTrackerWatchdogTimer@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C000DD40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerDebugBreak@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00605F0 (-ndisNblTrackerDebugBreak@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0060758 (-ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C006EF38 (-NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 */

void __fastcall ndisNblTrackerWatchdogTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned int v4; // ebp
  struct _NDIS_NBL_TRACKER *i; // rbx
  __int64 v6; // rax
  __int64 PassiveCounter; // rcx
  PNDIS_PER_PROCESSOR_SLOT__ *Slot; // rdx
  int v9; // edi
  int v10; // edi

  v4 = (ndisNblTrackerEpoch - 1) & 1;
  KeAcquireSpinLockAtDpcLevel(&ndisNblTrackerListLock);
  for ( i = ndisNblTrackerList;
        i != (struct _NDIS_NBL_TRACKER *)&ndisNblTrackerList;
        i = (struct _NDIS_NBL_TRACKER *)i->Linkage.Flink )
  {
    LODWORD(v6) = KeQueryActiveProcessorCountEx(0xFFFFu);
    PassiveCounter = i->Buckets[v4].PassiveCounter;
    if ( (_DWORD)v6 )
    {
      Slot = i->Buckets[v4].Slot;
      v6 = (unsigned int)v6;
      do
      {
        PassiveCounter += *(_QWORD *)Slot;
        Slot += 1024;
        --v6;
      }
      while ( v6 );
    }
    if ( PassiveCounter )
    {
      v9 = ndisNblTrackerStuckNblDisposition;
      NdisTraceLoggingStuckNbl(i);
      if ( (*((_BYTE *)i + 18) & 1) == 0 )
      {
        *((_WORD *)i + 9) |= 1u;
        ndisLastFailedNblTracker = i;
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
            ndisNblTrackerSetSqmFlag(i);
        }
        else
        {
          ndisNblTrackerDebugBreak(i);
        }
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&ndisNblTrackerListLock);
  ndisNblTrackerEpoch = v4;
}

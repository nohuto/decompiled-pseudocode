/*
 * XREFs of WheapProcessWorkQueueItem @ 0x140266DAC
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     WheapFreeErrorRecord @ 0x140266D5C (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x14026763C (WheapGenerateETWEvents.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x140404E68 (WheapCreateTriageDumpFromPreviousSession.c)
 *     WheapPredictiveFailureAnalysis @ 0x1406FDA34 (WheapPredictiveFailureAnalysis.c)
 */

void __fastcall WheapProcessWorkQueueItem(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  struct _DEVICE_OBJECT **v6; // rax

  if ( WheapPreviousSessionFailure )
  {
    if ( (*(_BYTE *)(a2 + 144) & 2) != 0 && *(_DWORD *)(a2 + 52) <= 1u )
    {
      v3 = *(_QWORD *)(a2 + 32);
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 40);
        if ( v4 <= 9 )
        {
          v5 = 665;
          if ( _bittest(&v5, v4) )
            WheapCreateTriageDumpFromPreviousSession(a2);
        }
      }
    }
  }
  if ( LODWORD(WheapDispatchPtr.Queue.ListEntry.Flink) )
  {
    WheapPredictiveFailureAnalysis(a2);
    WheapGenerateETWEvents(a2 + 40);
    WheapFreeErrorRecord(a2);
  }
  else
  {
    KeWaitForSingleObject(&WheapDispatchPtr.CurrentIrp, Executive, 0, 0, 0LL);
    v6 = *(struct _DEVICE_OBJECT ***)&WheapDispatchPtr.DeviceType;
    *(_QWORD *)a2 = &WheapDispatchPtr.DeviceExtension;
    *(_QWORD *)(a2 + 8) = v6;
    if ( *v6 != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DeviceExtension )
      __fastfail(3u);
    *v6 = (struct _DEVICE_OBJECT *)a2;
    *(_QWORD *)&WheapDispatchPtr.DeviceType = a2;
    KeSetEvent((PRKEVENT)&WheapDispatchPtr.CurrentIrp, 0, 0);
  }
}

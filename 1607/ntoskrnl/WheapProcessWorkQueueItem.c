/*
 * XREFs of WheapProcessWorkQueueItem @ 0x140230700
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     WheapFreeErrorRecord @ 0x1402306B0 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x140230F14 (WheapGenerateETWEvents.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x1403E07FC (WheapCreateTriageDumpFromPreviousSession.c)
 *     WheapPredictiveFailureAnalysis @ 0x1406BBA80 (WheapPredictiveFailureAnalysis.c)
 */

void __fastcall WheapProcessWorkQueueItem(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  __int64 *v6; // rax

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
  if ( LODWORD(WheapDispatchPtr.NextDevice) )
  {
    WheapPredictiveFailureAnalysis(a2);
    WheapGenerateETWEvents(a2 + 40);
    WheapFreeErrorRecord(a2);
  }
  else
  {
    KeWaitForSingleObject(&WheapDispatchPtr.CurrentIrp, Executive, 0, 0, 0LL);
    v6 = *(__int64 **)&WheapDispatchPtr.DeviceType;
    if ( **(struct _DEVICE_OBJECT ***)&WheapDispatchPtr.DeviceType != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DeviceExtension )
      __fastfail(3u);
    *(_QWORD *)a2 = &WheapDispatchPtr.DeviceExtension;
    *(_QWORD *)(a2 + 8) = v6;
    *v6 = a2;
    *(_QWORD *)&WheapDispatchPtr.DeviceType = a2;
    KeSetEvent((PRKEVENT)&WheapDispatchPtr.CurrentIrp, 0, 0);
  }
}

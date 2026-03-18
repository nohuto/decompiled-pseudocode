/*
 * XREFs of DpiMiracastPerfCleanupPerfTrack @ 0x1C019EC5C
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C002CA34 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C002D594 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastPerfCleanupPerfTrack(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 808) )
  {
    if ( *(_BYTE *)(a1 + 809) )
    {
      *(_BYTE *)(a1 + 809) = 0;
      KeCancelTimer((PKTIMER)(a1 + 904));
      KeFlushQueuedDpcs();
    }
    *(_BYTE *)(a1 + 808) = 0;
  }
}

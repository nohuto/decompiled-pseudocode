/*
 * XREFs of DpiMiracastPerfCleanupPerfTrack @ 0x1C01752A8
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C00256C4 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0026540 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastPerfCleanupPerfTrack(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 720) )
  {
    if ( *(_BYTE *)(a1 + 721) )
    {
      *(_BYTE *)(a1 + 721) = 0;
      KeCancelTimer((PKTIMER)(a1 + 816));
      KeFlushQueuedDpcs();
    }
    *(_BYTE *)(a1 + 720) = 0;
  }
}

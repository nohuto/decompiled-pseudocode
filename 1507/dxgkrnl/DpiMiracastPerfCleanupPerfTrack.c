/*
 * XREFs of DpiMiracastPerfCleanupPerfTrack @ 0x1C0170A28
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0025B74 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00269F0 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastPerfCleanupPerfTrack(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 712) )
  {
    if ( *(_BYTE *)(a1 + 713) )
    {
      *(_BYTE *)(a1 + 713) = 0;
      KeCancelTimer((PKTIMER)(a1 + 808));
      KeFlushQueuedDpcs();
    }
    *(_BYTE *)(a1 + 712) = 0;
  }
}

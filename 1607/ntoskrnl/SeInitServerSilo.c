/*
 * XREFs of SeInitServerSilo @ 0x14068CAF4
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x14067E960 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140009D20 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140009D40 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x1400766B0 (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x140079F68 (PsIsHostSilo.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     SepReferenceLogonSessionSilo @ 0x1404796D4 (SepReferenceLogonSessionSilo.c)
 *     SepCreateLogonSessionTrack @ 0x1404E69EC (SepCreateLogonSessionTrack.c)
 *     SepDeleteLogonSessionTrack @ 0x140533094 (SepDeleteLogonSessionTrack.c)
 *     SepInitializationPhase1 @ 0x140552FE0 (SepInitializationPhase1.c)
 */

__int64 __fastcall SeInitServerSilo(__int64 a1)
{
  __int64 *ServerSiloGlobals; // rsi
  __int64 v3; // rbp
  signed int LogonSessionTrack; // ebx

  if ( PsIsHostSilo(a1) )
    KeBugCheckEx(0x33u, 0LL, 0LL, 0LL, 0LL);
  ServerSiloGlobals = (__int64 *)PsGetServerSiloGlobals(a1);
  v3 = PsAttachSiloToCurrentThread(a1);
  LogonSessionTrack = SepCreateLogonSessionTrack((__int64 **)&SeSystemAuthenticationId);
  if ( LogonSessionTrack >= 0 )
  {
    LogonSessionTrack = SepReferenceLogonSessionSilo(&SeSystemAuthenticationId, a1, ServerSiloGlobals + 92);
    if ( LogonSessionTrack >= 0 )
    {
      LogonSessionTrack = SepCreateLogonSessionTrack((__int64 **)&SeAnonymousAuthenticationId);
      if ( LogonSessionTrack < 0 )
        goto LABEL_9;
      LogonSessionTrack = SepReferenceLogonSessionSilo(&SeAnonymousAuthenticationId, a1, ServerSiloGlobals + 93);
      if ( LogonSessionTrack >= 0 )
      {
        LogonSessionTrack = SepInitializationPhase1() == 0 ? 0xC0000001 : 0;
        goto LABEL_9;
      }
    }
    SepDeleteLogonSessionTrack(&SeSystemAuthenticationId, 0);
  }
LABEL_9:
  PsDetachSiloFromCurrentThread(v3);
  return (unsigned int)LogonSessionTrack;
}

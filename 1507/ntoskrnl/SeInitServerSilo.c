/*
 * XREFs of SeInitServerSilo @ 0x140593C18
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     PsSetMonitorContextServerSilo @ 0x14015EC2C (PsSetMonitorContextServerSilo.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SepReferenceLogonSessionSilo @ 0x14046E22C (SepReferenceLogonSessionSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x14052EA14 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14052EA20 (PsAttachSiloToCurrentThread.c)
 *     SepCreateLogonSessionTrack @ 0x14053C348 (SepCreateLogonSessionTrack.c)
 *     SepDeleteLogonSessionTrack @ 0x14056899C (SepDeleteLogonSessionTrack.c)
 *     SepInitializationPhase1 @ 0x1405931F0 (SepInitializationPhase1.c)
 *     PsAllocateMonitorContextServerSilo @ 0x140593528 (PsAllocateMonitorContextServerSilo.c)
 */

__int64 __fastcall SeInitServerSilo(_QWORD *a1)
{
  __int64 result; // rax
  __int64 *v3; // rsi
  __int64 v4; // rdx
  signed int LogonSessionTrack; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbp
  void *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  result = PsAllocateMonitorContextServerSilo(SeSiloMonitor, 32LL, &v9);
  if ( (int)result >= 0 )
  {
    v3 = (__int64 *)v9;
    memset(v9, 0, 0x20uLL);
    LogonSessionTrack = PsSetMonitorContextServerSilo(SeSiloMonitor, a1, 1, (__int64)v3, 0LL);
    if ( LogonSessionTrack < 0 )
    {
LABEL_13:
      PsDereferenceMonitorContextServerSilo((__int64)v3);
      return (unsigned int)LogonSessionTrack;
    }
    v8 = PsAttachSiloToCurrentThread((__int64)a1, v4, v6, v7);
    LogonSessionTrack = SepCreateLogonSessionTrack((__int64)&SeSystemAuthenticationId);
    if ( LogonSessionTrack >= 0 )
    {
      LogonSessionTrack = SepReferenceLogonSessionSilo(&SeSystemAuthenticationId, (__int64)a1, v3);
      if ( LogonSessionTrack < 0 )
        goto LABEL_11;
      LogonSessionTrack = SepCreateLogonSessionTrack((__int64)&SeAnonymousAuthenticationId);
      if ( LogonSessionTrack >= 0 )
      {
        LogonSessionTrack = SepReferenceLogonSessionSilo(&SeAnonymousAuthenticationId, (__int64)a1, v3 + 1);
        if ( LogonSessionTrack >= 0 )
        {
          LogonSessionTrack = SepInitializationPhase1() == 0 ? 0xC0000001 : 0;
          goto LABEL_12;
        }
LABEL_11:
        SepDeleteLogonSessionTrack(&SeSystemAuthenticationId, 0);
      }
    }
LABEL_12:
    PsDetachSiloFromCurrentThread(v8);
    goto LABEL_13;
  }
  return result;
}

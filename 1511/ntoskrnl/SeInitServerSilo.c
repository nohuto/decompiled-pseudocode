/*
 * XREFs of SeInitServerSilo @ 0x140526CAC
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsSetMonitorContextServerSilo @ 0x140134308 (PsSetMonitorContextServerSilo.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SepReferenceLogonSessionSilo @ 0x1403C24A4 (SepReferenceLogonSessionSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x14049BC98 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14049BCB0 (PsAttachSiloToCurrentThread.c)
 *     SepCreateLogonSessionTrack @ 0x1404BDA90 (SepCreateLogonSessionTrack.c)
 *     SepDeleteLogonSessionTrack @ 0x1404F4570 (SepDeleteLogonSessionTrack.c)
 *     SepInitializationPhase1 @ 0x1405262AC (SepInitializationPhase1.c)
 *     PsAllocateMonitorContextServerSilo @ 0x1405265E4 (PsAllocateMonitorContextServerSilo.c)
 */

__int64 __fastcall SeInitServerSilo(_QWORD *a1)
{
  __int64 result; // rax
  __int64 *v3; // rsi
  signed int LogonSessionTrack; // ebx
  __int64 v5; // rbp
  void *v6; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  result = PsAllocateMonitorContextServerSilo(SeSiloMonitor, 32LL, &v6);
  if ( (int)result >= 0 )
  {
    v3 = (__int64 *)v6;
    memset(v6, 0, 0x20uLL);
    LogonSessionTrack = PsSetMonitorContextServerSilo(SeSiloMonitor, a1, 1, (__int64)v3, 0LL);
    if ( LogonSessionTrack < 0 )
    {
LABEL_13:
      PsDereferenceMonitorContextServerSilo((__int64)v3);
      return (unsigned int)LogonSessionTrack;
    }
    v5 = PsAttachSiloToCurrentThread(a1);
    LogonSessionTrack = SepCreateLogonSessionTrack((__int64 *)&SeSystemAuthenticationId);
    if ( LogonSessionTrack >= 0 )
    {
      LogonSessionTrack = SepReferenceLogonSessionSilo(&SeSystemAuthenticationId, (__int64)a1, v3);
      if ( LogonSessionTrack < 0 )
        goto LABEL_11;
      LogonSessionTrack = SepCreateLogonSessionTrack((__int64 *)&SeAnonymousAuthenticationId);
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
    PsDetachSiloFromCurrentThread(v5);
    goto LABEL_13;
  }
  return result;
}

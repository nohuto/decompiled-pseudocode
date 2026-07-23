/*
 * XREFs of EtwpCheckNotificationAccess @ 0x140491C9C
 * Callers:
 *     EtwpValidateEnableNotification @ 0x14048F810 (EtwpValidateEnableNotification.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x140014200 (PsGetCurrentProcess.c)
 *     EtwpCheckGuidAccess @ 0x140491D18 (EtwpCheckGuidAccess.c)
 *     EtwCheckSecurityLoggerAccess @ 0x1406A825C (EtwCheckSecurityLoggerAccess.c)
 */

__int64 __fastcall EtwpCheckNotificationAccess(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ecx
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *CurrentProcess; // rax
  __int64 v8; // rdx

  result = EtwpCheckGuidAccess(a1, 128LL, 0LL);
  if ( (int)result >= 0 )
  {
    result = EtwpCheckGuidAccess(a2, 128LL, 0LL);
    v5 = result;
    if ( (int)result >= 0 )
    {
      if ( *a1 == s_ProviderThreatInt && a1[1] == 0x44D38D4D0F04D8F1LL )
      {
        CurrentThread = KeGetCurrentThread();
        CurrentProcess = PsGetCurrentProcess();
        LOBYTE(v8) = CurrentThread->PreviousMode;
        return (unsigned int)EtwCheckSecurityLoggerAccess(CurrentProcess, v8);
      }
      return v5;
    }
  }
  return result;
}

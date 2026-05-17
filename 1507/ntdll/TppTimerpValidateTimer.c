/*
 * XREFs of TppTimerpValidateTimer @ 0x18003D1F8
 * Callers:
 *     TpIsTimerSet @ 0x18003CE20 (TpIsTimerSet.c)
 *     TpSetTimerEx @ 0x18003CE70 (TpSetTimerEx.c)
 *     TpReleaseTimer @ 0x18003ED60 (TpReleaseTimer.c)
 *     TpTimerOutstandingCallbackCount @ 0x18007CBD0 (TpTimerOutstandingCallbackCount.c)
 *     TpWaitForTimer @ 0x18007D560 (TpWaitForTimer.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18003D260 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppTimerpValidateTimer(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r11d
  int v4; // r10d
  __int64 v5; // r9

  LOBYTE(v3) = 0;
  v4 = a3;
  if ( Ldr )
  {
    if ( !BYTE1(Ldr[3].ShutdownThreadId) )
    {
      if ( (unsigned int)TppValidateCleanupGroupMember(Ldr, a2, a3, Ldr) )
      {
        if ( *(__int64 (__fastcall ***)())(v5 + 8) == TppTimerpCleanupGroupMemberVFuncs )
        {
          Ldr = NtCurrentPeb()->Ldr;
          if ( Ldr->ShutdownInProgress == (_BYTE)v3 )
            return (unsigned int)(v3 + 1);
        }
      }
    }
  }
  if ( v4 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress == (_BYTE)v3) )
    TppRaiseInvalidParameter(Ldr, a2, a3);
  return 0LL;
}

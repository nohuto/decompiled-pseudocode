/*
 * XREFs of TppTimerpValidateTimer @ 0x18003C1B8
 * Callers:
 *     TpReleaseTimer @ 0x18003A480 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x18003B8E0 (TpWaitForTimer.c)
 *     TpIsTimerSet @ 0x18003BF50 (TpIsTimerSet.c)
 *     TpSetTimerEx @ 0x18003BFF0 (TpSetTimerEx.c)
 *     TpTimerOutstandingCallbackCount @ 0x1800647D0 (TpTimerOutstandingCallbackCount.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18003C230 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppTimerpValidateTimer(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r11d
  int v4; // r10d
  _PEB_LDR_DATA *v5; // r9

  LOBYTE(v3) = 0;
  v4 = a3;
  v5 = Ldr;
  if ( Ldr )
  {
    if ( !BYTE1(Ldr[4].Length) )
    {
      if ( (unsigned int)TppValidateCleanupGroupMember(Ldr, a2, a3, Ldr) )
      {
        if ( v5->SsHandle == TppTimerpCleanupGroupMemberVFuncs )
        {
          Ldr = NtCurrentPeb()->Ldr;
          if ( Ldr->ShutdownInProgress == (_BYTE)v3 )
            return (unsigned int)(v3 + 1);
        }
      }
    }
  }
  if ( v4 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress == (_BYTE)v3) )
    TppRaiseInvalidParameter(Ldr, a2, a3, v5);
  return 0LL;
}

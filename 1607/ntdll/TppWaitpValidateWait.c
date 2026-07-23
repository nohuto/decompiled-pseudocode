/*
 * XREFs of TppWaitpValidateWait @ 0x18003BF88
 * Callers:
 *     TpSetWaitEx @ 0x18003BD50 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x180064580 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x180064638 (TpWaitOutstandingCallbackCount.c)
 *     TpWaitForWait @ 0x180064F30 (TpWaitForWait.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18003C230 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppWaitpValidateWait(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  _PEB_LDR_DATA *Ldr; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r10d

  if ( (unsigned int)TppValidateCleanupGroupMember(a1, a2, a3, a1) )
  {
    if ( *(__int64 (__fastcall ***)())(v6 + 8) == TppWaitpCleanupGroupMemberVFuncs )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return 1LL;
    }
  }
  if ( v7 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr, v3, v5, v6);
  return 0LL;
}

/*
 * XREFs of TppWaitpValidateWait @ 0x18000AC08
 * Callers:
 *     TpWaitForWait @ 0x180004C20 (TpWaitForWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x180006F44 (TpWaitOutstandingCallbackCount.c)
 *     TpReleaseWait @ 0x1800078A0 (TpReleaseWait.c)
 *     TpSetWaitEx @ 0x18000A960 (TpSetWaitEx.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18000B324 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppWaitpValidateWait(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  _PEB_LDR_DATA *Ldr; // rcx
  __int64 v5; // r9
  int v6; // r10d

  if ( (unsigned int)TppValidateCleanupGroupMember(a1, a2, a3, a1) )
  {
    if ( *(__int64 (__fastcall ***)())(v5 + 8) == TppWaitpCleanupGroupMemberVFuncs )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return 1LL;
    }
  }
  if ( v6 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr, v3);
  return 0LL;
}

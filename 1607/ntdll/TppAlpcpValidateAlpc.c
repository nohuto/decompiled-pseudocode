/*
 * XREFs of TppAlpcpValidateAlpc @ 0x18006557C
 * Callers:
 *     TpAlpcUnregisterCompletionList @ 0x1800652D0 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x180065310 (TpAlpcRegisterCompletionList.c)
 *     TpWaitForAlpcCompletion @ 0x180065410 (TpWaitForAlpcCompletion.c)
 *     TpReleaseAlpcCompletion @ 0x1800654B0 (TpReleaseAlpcCompletion.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18003C230 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppAlpcpValidateAlpc(_PEB_LDR_DATA *Ldr, int a2, int a3)
{
  int v3; // r10d
  int v4; // eax
  __int64 v5; // r9

  v3 = a3;
  if ( Ldr )
  {
    LOBYTE(v4) = TppValidateCleanupGroupMember((__int64)&Ldr->ShutdownInProgress, a2);
    if ( v4 )
    {
      if ( *(__int64 (__fastcall ***)())(v5 + 80) == TppAlpcpCleanupGroupMemberVFuncs )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr);
  return 0LL;
}

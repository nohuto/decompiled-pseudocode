/*
 * XREFs of TppAlpcpValidateAlpc @ 0x18006BEAC
 * Callers:
 *     TpAlpcUnregisterCompletionList @ 0x18006BC00 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x18006BC40 (TpAlpcRegisterCompletionList.c)
 *     TpWaitForAlpcCompletion @ 0x18006BD40 (TpWaitForAlpcCompletion.c)
 *     TpReleaseAlpcCompletion @ 0x18006BDE0 (TpReleaseAlpcCompletion.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18000B324 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
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

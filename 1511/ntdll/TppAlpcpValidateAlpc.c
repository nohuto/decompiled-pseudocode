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

__int64 __fastcall TppAlpcpValidateAlpc(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  _PEB_LDR_DATA *v4; // r9
  int v5; // eax

  v3 = a3;
  v4 = Ldr;
  if ( Ldr )
  {
    LOBYTE(v5) = TppValidateCleanupGroupMember((__int64)&Ldr->ShutdownInProgress, a2);
    if ( v5 )
    {
      if ( v4->ShutdownThreadId == TppAlpcpCleanupGroupMemberVFuncs )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr, a2, a3, v4);
  return 0LL;
}

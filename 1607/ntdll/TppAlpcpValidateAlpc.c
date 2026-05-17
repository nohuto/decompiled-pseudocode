/*
 * XREFs of TppAlpcpValidateAlpc @ 0x18006558C
 * Callers:
 *     TpAlpcUnregisterCompletionList @ 0x1800652E0 (TpAlpcUnregisterCompletionList.c)
 *     TpAlpcRegisterCompletionList @ 0x180065320 (TpAlpcRegisterCompletionList.c)
 *     TpWaitForAlpcCompletion @ 0x180065420 (TpWaitForAlpcCompletion.c)
 *     TpReleaseAlpcCompletion @ 0x1800654C0 (TpReleaseAlpcCompletion.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18003C240 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
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

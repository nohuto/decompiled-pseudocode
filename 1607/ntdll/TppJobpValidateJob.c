/*
 * XREFs of TppJobpValidateJob @ 0x1800846F8
 * Callers:
 *     TpWaitForJobNotification @ 0x180084370 (TpWaitForJobNotification.c)
 *     TpReleaseJobNotification @ 0x1800843B0 (TpReleaseJobNotification.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18003C230 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppJobpValidateJob(__int64 a1, int a2)
{
  int v2; // eax
  __int64 v3; // r9
  _PEB_LDR_DATA *Ldr; // rcx

  if ( a1 )
  {
    LOBYTE(v2) = TppValidateCleanupGroupMember(a1 + 72, a2);
    if ( v2 )
    {
      if ( *(__int64 (__fastcall ***)())(v3 + 80) == TppJobpCleanupGroupMemberVFuncs
        && !NtCurrentPeb()->Ldr->ShutdownInProgress )
      {
        return 1LL;
      }
    }
  }
  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter(Ldr);
  return 0LL;
}

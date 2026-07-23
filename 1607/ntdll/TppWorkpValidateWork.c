/*
 * XREFs of TppWorkpValidateWork @ 0x18003BCE0
 * Callers:
 *     TpReleaseWork @ 0x18003BA20 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x180082080 (TpWaitForWork.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18003C230 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppWorkpValidateWork(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  _PEB_LDR_DATA *v4; // r9

  v3 = a3;
  v4 = Ldr;
  if ( Ldr )
  {
    if ( (unsigned int)TppValidateCleanupGroupMember(Ldr, a2, a3, Ldr) )
    {
      if ( v4->SsHandle == &TppWorkpCleanupGroupMemberVFuncs )
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

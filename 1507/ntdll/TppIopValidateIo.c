/*
 * XREFs of TppIopValidateIo @ 0x18003CD08
 * Callers:
 *     TpStartAsyncIoOperation @ 0x18003C7D0 (TpStartAsyncIoOperation.c)
 *     TpCancelAsyncIoOperation @ 0x18006F720 (TpCancelAsyncIoOperation.c)
 *     TpReleaseIoCompletion @ 0x1800729E0 (TpReleaseIoCompletion.c)
 *     TpWaitForIoCompletion @ 0x1800773F0 (TpWaitForIoCompletion.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18003D260 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppIopValidateIo(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  __int64 v4; // r9

  v3 = a3;
  if ( Ldr )
  {
    if ( (unsigned int)TppValidateCleanupGroupMember(Ldr, a2, a3, Ldr) )
    {
      if ( *(__int64 (__fastcall ***)(PVOID))(v4 + 8) == &TppIopCleanupGroupMemberVFuncs )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr, a2, a3);
  return 0LL;
}

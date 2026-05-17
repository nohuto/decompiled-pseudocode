/*
 * XREFs of TppIopValidateIo @ 0x18003C170
 * Callers:
 *     TpStartAsyncIoOperation @ 0x18003C110 (TpStartAsyncIoOperation.c)
 *     TpReleaseIoCompletion @ 0x1800785F0 (TpReleaseIoCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x18007E4E0 (TpCancelAsyncIoOperation.c)
 *     TpWaitForIoCompletion @ 0x180087A00 (TpWaitForIoCompletion.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18003C240 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppIopValidateIo(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  _PEB_LDR_DATA *v4; // r9

  v3 = a3;
  v4 = Ldr;
  if ( Ldr )
  {
    if ( (unsigned int)TppValidateCleanupGroupMember(Ldr, a2, a3, Ldr) )
    {
      if ( v4->SsHandle == TppIopCleanupGroupMemberVFuncs )
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

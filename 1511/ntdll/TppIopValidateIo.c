/*
 * XREFs of TppIopValidateIo @ 0x18000ABB0
 * Callers:
 *     TpStartAsyncIoOperation @ 0x18000AB50 (TpStartAsyncIoOperation.c)
 *     TpReleaseIoCompletion @ 0x180079240 (TpReleaseIoCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x18007C3B0 (TpCancelAsyncIoOperation.c)
 *     TpWaitForIoCompletion @ 0x180083590 (TpWaitForIoCompletion.c)
 * Callees:
 *     TppValidateCleanupGroupMember @ 0x18000B324 (TppValidateCleanupGroupMember.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
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
    TppRaiseInvalidParameter(Ldr, a2);
  return 0LL;
}

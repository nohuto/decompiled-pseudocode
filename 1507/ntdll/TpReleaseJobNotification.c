/*
 * XREFs of TpReleaseJobNotification @ 0x18007A660
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x18003D61C (TppCleanupGroupMemberRelease.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppJobpRundownJob @ 0x18007A72C (TppJobpRundownJob.c)
 *     TppJobpValidateJob @ 0x18007DA20 (TppJobpValidateJob.c)
 */

char __fastcall TpReleaseJobNotification(__int64 a1)
{
  signed __int32 v2; // eax
  volatile signed __int32 *v3; // rdi

  v2 = TppJobpValidateJob(a1, 1LL);
  if ( v2 )
  {
    v3 = (volatile signed __int32 *)(a1 + 72);
    LOBYTE(v2) = TppCleanupGroupMemberRelease(a1 + 72, 1LL);
    if ( v2 )
    {
      TppJobpRundownJob(a1);
      v2 = _InterlockedExchangeAdd(v3, 0xFFFFFFFF);
      if ( v2 == 1 )
        LOBYTE(v2) = (**(__int64 (__fastcall ***)(volatile signed __int32 *))(a1 + 80))(v3);
    }
  }
  return v2;
}

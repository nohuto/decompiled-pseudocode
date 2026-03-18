/*
 * XREFs of PsGetCurrentServerSilo @ 0x140013620
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x1403E0080 (ExpSystemErrorHandler2.c)
 *     ExpWnfGenerateStateName @ 0x1403F6E6C (ExpWnfGenerateStateName.c)
 *     SeCreateClientSecurityEx @ 0x14040F250 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x140412280 (SepCreateClientSecurityEx.c)
 *     PsLookupProcessByProcessId @ 0x140420700 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1404207F0 (PsLookupThreadByThreadId.c)
 *     ObpReferenceDeviceMap @ 0x140421DE0 (ObpReferenceDeviceMap.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     MmMapApiSetView @ 0x14046BD4C (MmMapApiSetView.c)
 *     NtImpersonateAnonymousToken @ 0x140475D5C (NtImpersonateAnonymousToken.c)
 *     SepReferenceLogonSession @ 0x1404796A4 (SepReferenceLogonSession.c)
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     SepCreateLogonSessionTrack @ 0x1404E69EC (SepCreateLogonSessionTrack.c)
 *     SepDeleteLogonSessionTrack @ 0x140533094 (SepDeleteLogonSessionTrack.c)
 *     SepBlockAccessForLogonSession @ 0x140533AB8 (SepBlockAccessForLogonSession.c)
 *     MiSessionCreateInternal @ 0x140536508 (MiSessionCreateInternal.c)
 *     CmLockKeyForWrite @ 0x140574BC8 (CmLockKeyForWrite.c)
 *     SepMakeLogonSessionsSiblings @ 0x140693860 (SepMakeLogonSessionsSiblings.c)
 * Callees:
 *     PspIsServerSilo @ 0x1400B2DF8 (PspIsServerSilo.c)
 */

__int64 PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v1; // rcx
  __int64 v3; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
  {
    v1 = CurrentThread->Process[1].Affinity.Bitmap[16];
    if ( !v1 )
      return 0LL;
    do
    {
      if ( (*(_DWORD *)(v1 + 1304) & 0x40000000) != 0 )
        break;
      v1 = *(_QWORD *)(v1 + 1056);
    }
    while ( v1 );
  }
  else
  {
    v1 = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  }
  if ( !v1 )
    return 0LL;
  while ( !(unsigned __int8)PspIsServerSilo() )
    ;
  return v3;
}

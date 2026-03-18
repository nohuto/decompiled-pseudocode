/*
 * XREFs of PsGetCurrentServerSilo @ 0x1400436F0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x1403B3344 (ExpSystemErrorHandler2.c)
 *     NtImpersonateAnonymousToken @ 0x1403BE658 (NtImpersonateAnonymousToken.c)
 *     SepReferenceLogonSession @ 0x1403C245C (SepReferenceLogonSession.c)
 *     ExpWnfGenerateStateName @ 0x1403E295C (ExpWnfGenerateStateName.c)
 *     CmOpenKey @ 0x1404128E0 (CmOpenKey.c)
 *     EtwpWriteUserEvent @ 0x14041BFD0 (EtwpWriteUserEvent.c)
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 *     NtQueryAttributesFile @ 0x140423010 (NtQueryAttributesFile.c)
 *     AlpcpExposeTokenAttribute @ 0x14042B240 (AlpcpExposeTokenAttribute.c)
 *     SepCreateClientSecurityEx @ 0x14042C5D0 (SepCreateClientSecurityEx.c)
 *     IopCreateFile @ 0x140439640 (IopCreateFile.c)
 *     ObReferenceObjectByName @ 0x14046F95C (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x14046FBC0 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 *     NtQueryFullAttributesFile @ 0x14049DA10 (NtQueryFullAttributesFile.c)
 *     SeCreateClientSecurityEx @ 0x1404A629C (SeCreateClientSecurityEx.c)
 *     SepCreateLogonSessionTrack @ 0x1404BDA90 (SepCreateLogonSessionTrack.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     MiSessionCreateInternal @ 0x1404FF8F8 (MiSessionCreateInternal.c)
 *     NtDeleteFile @ 0x140546550 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x1405FA488 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 */

_QWORD *PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v1; // rbx
  __int64 v3; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
  {
    v1 = (_QWORD *)CurrentThread->Process[1].Affinity.Bitmap[16];
    if ( !v1 )
      return 0LL;
    do
    {
      if ( v1[156] )
        break;
      v1 = (_QWORD *)v1[133];
    }
    while ( v1 );
  }
  else
  {
    v1 = *(_QWORD **)&CurrentThread[1].WaitBlockFill11[160];
  }
  if ( !v1 )
    return 0LL;
  while ( 1 )
  {
    v3 = v1[156];
    if ( *(_QWORD *)(v3 + 136) )
      break;
    v1 = *(_QWORD **)(v3 + 128);
    if ( !v1 )
      return v1;
  }
  ObfReferenceObjectWithTag(v1, 0x746C6644u);
  return v1;
}

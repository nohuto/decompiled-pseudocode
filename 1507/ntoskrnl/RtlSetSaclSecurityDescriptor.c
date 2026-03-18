/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x140413954
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14015D52C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     SepInitProcessAuditSd @ 0x14015EE30 (SepInitProcessAuditSd.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14024F4BC (SepBuildCapeSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140413138 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14041382C (IopCreateSecurityDescriptorPerType.c)
 *     CmpCopySaclToVirtualKey @ 0x140659314 (CmpCopySaclToVirtualKey.c)
 *     SepBuildObjectSecurityDescriptor @ 0x1406D7344 (SepBuildObjectSecurityDescriptor.c)
 *     SeMakeSystemToken @ 0x1407BC9E0 (SeMakeSystemToken.c)
 *     BuildKnownDlls @ 0x1407BD39C (BuildKnownDlls.c)
 *     SepInitSystemDacls @ 0x1407BEE60 (SepInitSystemDacls.c)
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 *     ExpKeyedEventInitialization @ 0x1407E4030 (ExpKeyedEventInitialization.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN SaclPresent,
        PACL Sacl,
        BOOLEAN SaclDefaulted)
{
  __int16 v5; // cx
  __int16 v6; // cx
  __int16 v8; // cx
  PACL v9; // rax
  __int16 v10; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1);
  if ( v5 >= 0 )
  {
    if ( SaclPresent )
    {
      *((_QWORD *)SecurityDescriptor + 3) = 0LL;
      v8 = v5 | 0x10;
      v9 = (PACL)*((_QWORD *)SecurityDescriptor + 3);
      if ( Sacl )
        v9 = Sacl;
      *((_QWORD *)SecurityDescriptor + 3) = v9;
      v10 = v8 & 0xFFDF;
      *((_WORD *)SecurityDescriptor + 1) = v10;
      if ( !SaclDefaulted )
        return 0;
      v6 = v10 | 0x20;
    }
    else
    {
      v6 = v5 & 0xFFEF;
    }
    *((_WORD *)SecurityDescriptor + 1) = v6;
    return 0;
  }
  return -1073741703;
}

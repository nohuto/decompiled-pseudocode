/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x1403F5F04
 * Callers:
 *     ExpWnfLookupPermanentName @ 0x1403F50D0 (ExpWnfLookupPermanentName.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1403F7AE8 (CmpValidateHiveSecurityDescriptors.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1404D3FA4 (PipGetRegistrySecurityWithFallback.c)
 *     _PnpValidatePropertyData @ 0x140511B44 (_PnpValidatePropertyData.c)
 *     _CmSetDeviceRegPropWorker @ 0x140571A40 (_CmSetDeviceRegPropWorker.c)
 *     CmpVerifyCreateOrDeleteKeyLogRecord @ 0x140605B94 (CmpVerifyCreateOrDeleteKeyLogRecord.c)
 *     CmpVerifySetSecurityDescriptorLogRecord @ 0x140605D64 (CmpVerifySetSecurityDescriptorLogRecord.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1406D98C0 (_CmSetInstallerClassRegPropWorker.c)
 * Callees:
 *     RtlpValidateSDOffsetAndSize @ 0x1403F605C (RtlpValidateSDOffsetAndSize.c)
 *     RtlValidAcl @ 0x140420800 (RtlValidAcl.c)
 */

BOOLEAN __stdcall RtlValidRelativeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptorInput,
        ULONG SecurityDescriptorLength,
        SECURITY_INFORMATION RequiredInformation)
{
  char v3; // r10
  __int16 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int8 v10; // cl
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int8 v13; // cl
  __int64 v14; // rcx
  __int64 v15; // rcx
  ACL *v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  ACL *v20; // rcx
  unsigned int v21; // [rsp+38h] [rbp+10h] BYREF

  v3 = RequiredInformation;
  if ( SecurityDescriptorLength < 0x14 )
    return 0;
  if ( *(_BYTE *)SecurityDescriptorInput != 1 )
    return 0;
  v6 = *((_WORD *)SecurityDescriptorInput + 1);
  if ( v6 >= 0 )
    return 0;
  v7 = *((unsigned int *)SecurityDescriptorInput + 1);
  v8 = 12LL;
  if ( (_DWORD)v7 )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v7, SecurityDescriptorLength, 12LL, &v21) )
      return 0;
    if ( *((_BYTE *)SecurityDescriptorInput + v9) != 1 )
      return 0;
    v10 = *((_BYTE *)SecurityDescriptorInput + v9 + 1);
    if ( v10 > 0xFu || v21 < 4 * (unsigned int)v10 + 8 )
      return 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    return 0;
  }
  v11 = *((unsigned int *)SecurityDescriptorInput + 2);
  if ( (_DWORD)v11 )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v11, SecurityDescriptorLength, v8, &v21) )
      return 0;
    if ( *((_BYTE *)SecurityDescriptorInput + v12) != 1 )
      return 0;
    v13 = *((_BYTE *)SecurityDescriptorInput + v12 + 1);
    if ( v13 > 0xFu || v21 < 4 * (unsigned int)v13 + 8 )
      return 0;
  }
  else if ( (v3 & 2) != 0 )
  {
    return 0;
  }
  if ( (v6 & 4) == 0
    || (v14 = *((unsigned int *)SecurityDescriptorInput + 4), !(_DWORD)v14)
    || (unsigned __int8)RtlpValidateSDOffsetAndSize(v14, SecurityDescriptorLength, 8LL, &v21)
    && (v16 = (ACL *)((char *)SecurityDescriptorInput + v15), v21 >= v16->AclSize)
    && RtlValidAcl(v16) )
  {
    if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 0x10) == 0 )
      return 1;
    v18 = *((unsigned int *)SecurityDescriptorInput + 3);
    if ( !(_DWORD)v18 )
      return 1;
    if ( (unsigned __int8)RtlpValidateSDOffsetAndSize(v18, SecurityDescriptorLength, 8LL, &v21) )
    {
      v20 = (ACL *)((char *)SecurityDescriptorInput + v19);
      if ( v21 >= v20->AclSize )
      {
        if ( RtlValidAcl(v20) )
          return 1;
      }
    }
  }
  return 0;
}

/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x140467694
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x1404156FC (PspAllocateAndQueryNotificationChannel.c)
 *     CmpCheckWrpKeyAccess @ 0x140466E0C (CmpCheckWrpKeyAccess.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E47C4 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14056032C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     CmpCopySaclToVirtualKey @ 0x140659314 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x1406C9B90 (RtlReplaceSidInSd.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407097E4 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Owner,
        PBOOLEAN OwnerDefaulted)
{
  __int64 v4; // rdx
  char *v5; // rax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v5 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v4 = *((unsigned int *)SecurityDescriptor + 1);
    v5 = 0LL;
    if ( (_DWORD)v4 )
      v5 = (char *)SecurityDescriptor + v4;
  }
  *Owner = v5;
  *OwnerDefaulted = *((_BYTE *)SecurityDescriptor + 2) & 1;
  return 0;
}

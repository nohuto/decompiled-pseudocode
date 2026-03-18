/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x140489DD8
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x14048A7F4 (PspAllocateAndQueryNotificationChannel.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E1F74 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14052A01C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     CmpCheckExeOwnerForPca @ 0x140601DF0 (CmpCheckExeOwnerForPca.c)
 *     CmpCheckKeyOwnerForPca @ 0x140602154 (CmpCheckKeyOwnerForPca.c)
 *     CmpCopySaclToVirtualKey @ 0x1406021A4 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x140683A68 (RtlReplaceSidInSd.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAE68 (LocalConvertSDToStringSD_Rev1.c)
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

/*
 * XREFs of RtlGetGroupSecurityDescriptor @ 0x1405B5F04
 * Callers:
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E47C4 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     CmpCopySaclToVirtualKey @ 0x140659314 (CmpCopySaclToVirtualKey.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140686DE0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x1406C9B90 (RtlReplaceSidInSd.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407097E4 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetGroupSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Group,
        PBOOLEAN GroupDefaulted)
{
  __int64 v4; // rdx
  char *v5; // rax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v5 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    v4 = *((unsigned int *)SecurityDescriptor + 2);
    v5 = 0LL;
    if ( (_DWORD)v4 )
      v5 = (char *)SecurityDescriptor + v4;
  }
  *Group = v5;
  *GroupDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 2) != 0;
  return 0;
}

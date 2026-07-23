/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x18006F790
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18007FA84 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800BB3F0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlReplaceSidInSd @ 0x1800CEA20 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Owner,
        PBOOLEAN OwnerDefaulted)
{
  char *v3; // rax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v3 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v3 = 0LL;
    if ( *((_DWORD *)SecurityDescriptor + 1) )
      v3 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 1);
  }
  *Owner = v3;
  *OwnerDefaulted = *((_BYTE *)SecurityDescriptor + 2) & 1;
  return 0;
}

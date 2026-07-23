/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x18006CB40
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18007FA84 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlReplaceSidInSd @ 0x1800CEA20 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  bool v4; // zf
  ACL *v5; // rax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = (*((_BYTE *)SecurityDescriptor + 2) & 4) == 0;
  *DaclPresent = (*((_BYTE *)SecurityDescriptor + 2) & 4) != 0;
  if ( !v4 )
  {
    if ( (*((_BYTE *)SecurityDescriptor + 2) & 4) != 0 )
    {
      if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
      {
        v5 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v5 = 0LL;
        if ( *((_DWORD *)SecurityDescriptor + 4) )
          v5 = (ACL *)((char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 4));
      }
    }
    else
    {
      v5 = 0LL;
    }
    *Dacl = v5;
    *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  }
  return 0;
}

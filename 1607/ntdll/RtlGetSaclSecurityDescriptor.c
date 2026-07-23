/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x18007D6D0
 * Callers:
 *     RtlReplaceSidInSd @ 0x1800DFA10 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN SaclPresent,
        PACL *Sacl,
        PBOOLEAN SaclDefaulted)
{
  bool v4; // zf
  ACL *v5; // rax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = (*((_BYTE *)SecurityDescriptor + 2) & 0x10) == 0;
  *SaclPresent = (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0;
  if ( !v4 )
  {
    if ( (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0 )
    {
      if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
      {
        v5 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v5 = 0LL;
        if ( *((_DWORD *)SecurityDescriptor + 3) )
          v5 = (ACL *)((char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 3));
      }
    }
    else
    {
      v5 = 0LL;
    }
    *Sacl = v5;
    *SaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 0x20) != 0;
  }
  return 0;
}

/*
 * XREFs of SepSddlDaclFromSDDLString @ 0x1C00D6E9C
 * Callers:
 *     SepSddlSecurityDescriptorFromSDDLString @ 0x1C00D682C (SepSddlSecurityDescriptorFromSDDLString.c)
 * Callees:
 *     SepSddlGetAclForString @ 0x1C00D6F60 (SepSddlGetAclForString.c)
 */

__int64 __fastcall SepSddlDaclFromSDDLString(
        const wchar_t *SecurityDescriptorString,
        unsigned int SecurityDescriptorControlFlags,
        unsigned int *DiscretionaryAcl,
        _ACL **a4)
{
  wchar_t *v7; // rcx
  unsigned int v8; // edi
  unsigned int AclForString; // ebx
  wchar_t *i; // rax
  _ACL *Dacl; // [rsp+40h] [rbp+8h] BYREF
  wchar_t *End; // [rsp+50h] [rbp+18h] BYREF

  *a4 = 0LL;
  *DiscretionaryAcl = 0;
  while ( *SecurityDescriptorString == 32 )
    ++SecurityDescriptorString;
  if ( *SecurityDescriptorString != 68 || SecurityDescriptorString[1] != 58 )
    return 3221225485LL;
  v7 = (wchar_t *)(SecurityDescriptorString + 2);
  v8 = 8;
  if ( *v7 == 80 )
  {
    ++v7;
    v8 = 4104;
  }
  AclForString = SepSddlGetAclForString(v7, &Dacl, &End);
  if ( AclForString )
    goto LABEL_15;
  for ( i = End; *i == 32; ++i )
    ;
  if ( *i )
  {
    AclForString = -1073741811;
LABEL_15:
    if ( Dacl )
      ExFreePoolWithTag(Dacl, 0);
    return AclForString;
  }
  *a4 = Dacl;
  *DiscretionaryAcl = v8;
  return AclForString;
}

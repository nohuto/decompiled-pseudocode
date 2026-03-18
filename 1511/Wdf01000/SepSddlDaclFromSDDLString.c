/*
 * XREFs of SepSddlDaclFromSDDLString @ 0x1C00BC59C
 * Callers:
 *     SepSddlSecurityDescriptorFromSDDLString @ 0x1C00BC4D0 (SepSddlSecurityDescriptorFromSDDLString.c)
 * Callees:
 *     SepSddlGetAclForString @ 0x1C00BC640 (SepSddlGetAclForString.c)
 */

__int64 __fastcall SepSddlDaclFromSDDLString(
        const wchar_t *SecurityDescriptorString,
        unsigned int SecurityDescriptorControlFlags,
        unsigned int *DiscretionaryAcl,
        _ACL **a4)
{
  wchar_t *v6; // rcx
  unsigned int v7; // edi
  unsigned int AclForString; // ebx
  unsigned __int16 *i; // rax
  _ACL *Dacl; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int16 *End; // [rsp+50h] [rbp+18h] BYREF

  *a4 = 0LL;
  *DiscretionaryAcl = 0;
  while ( *SecurityDescriptorString != 68 )
  {
    if ( *SecurityDescriptorString != 32 )
      return 3221225485LL;
    ++SecurityDescriptorString;
  }
  if ( SecurityDescriptorString[1] == 58 )
  {
    v6 = (wchar_t *)(SecurityDescriptorString + 2);
    v7 = 8;
    if ( *v6 == 80 )
    {
      ++v6;
      v7 = 4104;
    }
    AclForString = SepSddlGetAclForString(v6, &Dacl, &End);
    if ( !AclForString )
    {
      for ( i = End; *i == 32; ++i )
        ;
      if ( !*i )
      {
        *a4 = Dacl;
        *DiscretionaryAcl = v7;
        return AclForString;
      }
      AclForString = -1073741811;
    }
    if ( Dacl )
      ExFreePoolWithTag(Dacl, 0);
    return AclForString;
  }
  return 3221225485LL;
}

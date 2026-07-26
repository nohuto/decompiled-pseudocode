/*
 * XREFs of SepSddlDaclFromSDDLString @ 0x1C009D3C4
 * Callers:
 *     SepSddlSecurityDescriptorFromSDDLString @ 0x1C009D2F8 (SepSddlSecurityDescriptorFromSDDLString.c)
 * Callees:
 *     SepSddlGetAclForString @ 0x1C009D468 (SepSddlGetAclForString.c)
 */

__int64 __fastcall SepSddlDaclFromSDDLString(_WORD *a1, __int64 a2, int *a3, _QWORD *a4)
{
  wchar_t *v6; // rcx
  int v7; // edi
  unsigned int AclForString; // ebx
  _WORD *i; // rax
  PVOID P; // [rsp+40h] [rbp+8h]
  _WORD *v12; // [rsp+50h] [rbp+18h]

  *a4 = 0LL;
  *a3 = 0;
  while ( *a1 != 68 )
  {
    if ( *a1 != 32 )
      return 3221225485LL;
    ++a1;
  }
  if ( a1[1] == 58 )
  {
    v6 = a1 + 2;
    v7 = 8;
    if ( *v6 == 80 )
    {
      ++v6;
      v7 = 4104;
    }
    AclForString = SepSddlGetAclForString(v6);
    if ( !AclForString )
    {
      for ( i = v12; *i == 32; ++i )
        ;
      if ( !*i )
      {
        *a4 = P;
        *a3 = v7;
        return AclForString;
      }
      AclForString = -1073741811;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    return AclForString;
  }
  return 3221225485LL;
}

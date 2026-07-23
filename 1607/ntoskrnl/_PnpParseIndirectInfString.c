/*
 * XREFs of _PnpParseIndirectInfString @ 0x1404AC370
 * Callers:
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1404DE698 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _PnpRegQueryValueIndirect @ 0x1404E2E64 (_PnpRegQueryValueIndirect.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406DDDA0 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x1400C1760 (RtlUnalignedStringCchLengthW.c)
 */

char PnpParseIndirectInfString(const wchar_t *a1, __int64 a2, __int64 a3, ...)
{
  _WORD *v3; // r11
  unsigned int v4; // ecx
  _WORD *i; // rax
  __int64 v6; // rcx
  __int64 j; // rcx
  __int16 v8; // dx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int16 v11; // cx
  __int64 v12; // r8
  size_t pcchLength; // [rsp+48h] [rbp+20h] BYREF
  va_list pcchLengtha; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(pcchLengtha, a3);
  pcchLength = va_arg(va1, _QWORD);
  if ( RtlUnalignedStringCchLengthW(a1, 0x7FFFuLL, (size_t *)pcchLengtha) < 0 || pcchLength < 5 || *v3 != 64 )
    return 0;
  v4 = 1;
  for ( i = v3 + 1; *i && *i != 44; i = &v3[++v4] )
    ;
  if ( v3[v4] != 44 )
    return 0;
  v6 = v4 + 1;
  if ( v3[v6] != 37 )
    return 0;
  for ( j = (unsigned int)(v6 + 1); ; j = (unsigned int)(j + 1) )
  {
    v8 = v3[j];
    if ( !v8 || v8 == 59 )
      break;
  }
  if ( v3[j] != 59 )
    LODWORD(j) = 0;
  if ( (_DWORD)j )
  {
    v9 = (unsigned int)(j - 1);
  }
  else
  {
    if ( pcchLength > 0xFFFFFFFF )
      return 0;
    v9 = (unsigned int)(pcchLength - 1);
  }
  if ( v3[v9] != 37 )
    return 0;
  if ( (_DWORD)j )
  {
    v10 = (unsigned int)(j + 1);
    v11 = v3[v10];
    if ( v11 )
    {
      v12 = (unsigned int)(v10 + 1);
      do
      {
        if ( v11 == 59 && v3[v12] == 40 && v3[(unsigned int)(pcchLength - 1)] == 41 )
          break;
        v10 = (unsigned int)(v10 + 1);
        v12 = (unsigned int)(v12 + 1);
        v11 = v3[v10];
      }
      while ( v11 );
    }
  }
  return 1;
}

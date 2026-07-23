/*
 * XREFs of _PnpParseIndirectResourceString @ 0x1404A3088
 * Callers:
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1404DE698 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _PnpRegQueryValueIndirect @ 0x1404E2E64 (_PnpRegQueryValueIndirect.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406DDDA0 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x1400C1760 (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     RtlUnicodeStringToInteger @ 0x1404A31F0 (RtlUnicodeStringToInteger.c)
 */

char PnpParseIndirectResourceString(const wchar_t *a1, __int64 a2, __int64 a3, ...)
{
  int v4; // ebp
  const wchar_t *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  wchar_t v9; // ax
  __int64 i; // rdi
  wchar_t v11; // cx
  __int64 v12; // rdi
  wchar_t v13; // cx
  __int64 v14; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  size_t Value; // [rsp+68h] [rbp+20h] BYREF
  va_list Valuea; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(Valuea, a3);
  Value = va_arg(va1, _QWORD);
  if ( RtlUnalignedStringCchLengthW(a1, 0x7FFFuLL, (size_t *)Valuea) < 0 )
    return 0;
  v4 = Value;
  if ( Value < 5 || *a1 != 64 )
    return 0;
  v6 = a1 + 1;
  LODWORD(v7) = 1;
  while ( *v6 && *v6 != 44 )
  {
    v7 = (unsigned int)(v7 + 1);
    v6 = &a1[v7];
  }
  if ( a1[(unsigned int)v7] != 44 )
    return 0;
  v8 = (unsigned int)(v7 + 1);
  v9 = a1[v8];
  if ( v9 != 45 && v9 != 35 )
    return 0;
  for ( i = (unsigned int)(v8 + 1); ; i = (unsigned int)(i + 1) )
  {
    v11 = a1[i];
    if ( !v11 || v11 == 59 )
      break;
  }
  if ( a1[i] != 59 )
    LODWORD(i) = 0;
  if ( RtlInitUnicodeStringEx(&DestinationString, &a1[v8 + 1]) < 0 )
    return 0;
  if ( (_DWORD)i )
  {
    DestinationString.Length = 2 * (i - v8 - 1);
    DestinationString.MaximumLength = DestinationString.Length;
  }
  if ( RtlUnicodeStringToInteger(&DestinationString, 0xAu, (PULONG)Valuea) < 0 )
    return 0;
  if ( (_DWORD)i )
  {
    v12 = (unsigned int)(i + 1);
    v13 = a1[v12];
    if ( v13 )
    {
      v14 = (unsigned int)(v12 + 1);
      do
      {
        if ( v13 == 59 && a1[v14] == 40 && a1[v4 - 1] == 41 )
          break;
        v12 = (unsigned int)(v12 + 1);
        v14 = (unsigned int)(v14 + 1);
        v13 = a1[v12];
      }
      while ( v13 );
    }
  }
  return 1;
}

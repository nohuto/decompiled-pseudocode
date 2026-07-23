/*
 * XREFs of _CmGetDeviceInterfaceName @ 0x140512634
 * Callers:
 *     IopRegisterDeviceInterface @ 0x14050FDE8 (IopRegisterDeviceInterface.c)
 *     IoGetDeviceInterfaceAlias @ 0x140529090 (IoGetDeviceInterfaceAlias.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     _CmValidateInstallerClassName @ 0x1404D9DEC (_CmValidateInstallerClassName.c)
 *     _CmValidateDeviceName @ 0x1404E0950 (_CmValidateDeviceName.c)
 */

int __fastcall CmGetDeviceInterfaceName(
        size_t a1,
        const WCHAR *a2,
        const wchar_t *a3,
        const wchar_t *a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _DWORD *a8)
{
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  NTSTRSAFE_PWSTR v16; // r14
  const wchar_t *v17; // r8
  int result; // eax
  _WORD *i; // rcx
  wchar_t v20; // ax
  const wchar_t *v21; // rdx
  NTSTRSAFE_PWSTR ppszDestEnd[2]; // [rsp+30h] [rbp-10h] BYREF
  size_t pcchRemaining; // [rsp+70h] [rbp+30h] BYREF

  pcchRemaining = a1;
  if ( (int)CmValidateInstallerClassName(a1, a2) < 0 || (int)CmValidateDeviceName(v11, a3) < 0 )
    return -1073741811;
  v12 = -1LL;
  if ( a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a4[v13] );
    if ( (unsigned __int64)(v13 - 1) <= 0x102 )
    {
      v20 = *a4;
      v21 = a4;
      while ( v20 )
      {
        if ( v20 == 92 || v20 == 47 )
          return -1073741773;
        v20 = *++v21;
      }
      goto LABEL_5;
    }
    return -1073741811;
  }
  v13 = 0LL;
  do
LABEL_5:
    ++v12;
  while ( a3[v12] );
  v14 = v12 + 43;
  if ( v13 )
    v14 = v13 + 1;
  v15 = v14 + 1;
  if ( v15 > 0xFFFFFFFF )
    return -1073741675;
  if ( a8 )
    *a8 = v15;
  if ( (unsigned int)v15 > (unsigned int)cchDest )
    return -1073741789;
  v16 = pszDest;
  v17 = L"\\??\\";
  if ( !a5 )
    v17 = L"\\\\?\\";
  result = RtlStringCchCopyExW(pszDest, (unsigned int)cchDest, v17, ppszDestEnd, &pcchRemaining, 0x900u);
  if ( result >= 0 )
  {
    result = RtlStringCchCopyExW(ppszDestEnd[0], pcchRemaining, a3, ppszDestEnd, &pcchRemaining, 0x900u);
    if ( result >= 0 )
    {
      result = RtlStringCchCopyExW(ppszDestEnd[0], pcchRemaining, L"#", ppszDestEnd, &pcchRemaining, 0x900u);
      if ( result >= 0 )
      {
        result = RtlStringCchCopyExW(ppszDestEnd[0], pcchRemaining, a2, ppszDestEnd, &pcchRemaining, 0x900u);
        if ( result >= 0 )
        {
          for ( i = v16 + 4; *i; ++i )
          {
            if ( *i == 92 || *i == 47 )
              *i = 35;
          }
          if ( v13 )
          {
            result = RtlStringCchCopyExW(ppszDestEnd[0], pcchRemaining, L"\\", ppszDestEnd, &pcchRemaining, 0x900u);
            if ( result >= 0 )
              return RtlStringCchCopyExW(ppszDestEnd[0], pcchRemaining, a4, ppszDestEnd, &pcchRemaining, 0x900u);
          }
        }
      }
    }
  }
  return result;
}

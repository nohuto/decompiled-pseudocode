/*
 * XREFs of InitializeDefaultFamilyFonts @ 0x1C037D90C
 * Callers:
 *     vInitMapper @ 0x1C037DA30 (vInitMapper.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0060C84 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C00BB29C (-bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00BBF64 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

int InitializeDefaultFamilyFonts()
{
  int result; // eax
  unsigned __int64 i; // rbx
  __int64 v2; // rax
  unsigned __int16 *v3; // rcx
  __int64 v4; // rdi
  char *v5; // rax
  __int64 v6; // rdx
  HANDLE Handle; // [rsp+20h] [rbp-88h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+30h] [rbp-78h] BYREF
  int v9; // [rsp+34h] [rbp-74h]
  char v10[84]; // [rsp+3Ch] [rbp-6Ch] BYREF

  result = GetGreRegKey(
             &Handle,
             0x20019u,
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\FontMapper\\FamilyDefaults");
  if ( result >= 0 )
  {
    for ( i = 0LL; i < 6; ++i )
    {
      if ( bQueryValueKey(*(PCWSTR *)((char *)&unk_1C02E52C0 + i * 8), Handle, KeyValueInformation, 0x54u) && v9 == 1 )
      {
        v2 = 33LL;
        v3 = (unsigned __int16 *)v10;
        do
        {
          if ( !*v3 )
            break;
          ++v3;
          --v2;
        }
        while ( v2 );
        if ( v2 )
        {
          v4 = 33 - v2;
          v5 = (char *)PALLOCMEM2((unsigned int)(2 * (33 - v2) + 2), 1717855815LL, 1);
          gpwszFamilyDefaultFonts[i] = v5;
          if ( v5 )
          {
            if ( (int)StringCchCopyW(v5, v4 + 1, v10) < 0 )
            {
              Win32FreePool(gpwszFamilyDefaultFonts[i], v6);
              gpwszFamilyDefaultFonts[i] = 0LL;
            }
          }
        }
      }
    }
    return ZwClose(Handle);
  }
  return result;
}

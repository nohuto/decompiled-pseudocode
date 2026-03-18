/*
 * XREFs of ACPIInitGetPlatformOverrides @ 0x1C008552C
 * Callers:
 *     DriverEntry @ 0x1C0084228 (DriverEntry.c)
 * Callees:
 *     OSOpenHandle @ 0x1C006592C (OSOpenHandle.c)
 *     OSCloseHandle @ 0x1C006665C (OSCloseHandle.c)
 *     OSGetRegistryValue @ 0x1C0068C40 (OSGetRegistryValue.c)
 *     ACPIIsSystemStartOptionPresent @ 0x1C0085A64 (ACPIIsSystemStartOptionPresent.c)
 */

__int64 ACPIInitGetPlatformOverrides()
{
  NTSTATUS v0; // ebx
  NTSTATUS v1; // eax
  wchar_t *v2; // rdi
  unsigned __int64 v3; // rax
  const wchar_t *v4; // rcx
  bool v5; // zf
  int v6; // eax
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  Handle = 0LL;
  P = 0LL;
  v0 = OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Control", 0LL, &Handle);
  if ( v0 >= 0 )
  {
    v1 = OSGetRegistryValue(Handle, L"SystemStartOptions", &P);
    v2 = (wchar_t *)P;
    v0 = v1;
    if ( v1 >= 0 )
    {
      v3 = *((unsigned int *)P + 1);
      if ( (_DWORD)v3 )
      {
        if ( *(_DWORD *)P == 1 && (unsigned int)v3 >= 2 )
        {
          v4 = (const wchar_t *)((char *)P + 8);
          *((_WORD *)P + (v3 >> 1) + 3) = 0;
          if ( wcsstr(v4, L"PCIEXPRESSPOLICY=FORCEDISABLE") )
            AcpiOverrideAttributes |= 0x2000u;
          if ( wcsstr(v2 + 4, L"SBOSCEVALPOLICY=FORCEDISABLE") )
            AcpiOverrideAttributes |= 0x4000u;
          v5 = (unsigned __int8)ACPIIsSystemStartOptionPresent(v2 + 4) == 0;
          v6 = AcpiOverrideAttributes;
          if ( !v5 )
          {
            v6 = AcpiOverrideAttributes | 0x10000;
            AcpiOverrideAttributes |= 0x10000u;
          }
          if ( (v6 & 0x10000) == 0 )
            AcpiOverrideAttributes = v6 & 0xFFFBFFFF;
        }
        else
        {
          v0 = -1073741788;
        }
      }
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  if ( Handle )
    OSCloseHandle(Handle);
  return (unsigned int)v0;
}

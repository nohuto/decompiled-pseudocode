/*
 * XREFs of PiDevCfgVerifyService @ 0x14068CD54
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x140587FA4 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PipOpenServiceEnumKeys @ 0x1404E6D00 (PipOpenServiceEnumKeys.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 */

__int64 __fastcall PiDevCfgVerifyService(PCWSTR SourceString, bool *a2, _DWORD *a3)
{
  int v3; // r12d
  unsigned int v6; // r15d
  int RegistryValue; // ebx
  PVOID v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+78h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF

  Handle = 0LL;
  LOBYTE(v3) = 0;
  P = 0LL;
  v6 = 4;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RegistryValue = PipOpenServiceEnumKeys(&DestinationString, 0x20019u, &Handle, 0LL, 0);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"Type", 0, &P);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
        v3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      else
        RegistryValue = -1073741823;
      ExFreePoolWithTag(P, 0);
      if ( RegistryValue >= 0 )
      {
        if ( (v3 & 0xB) == 0 )
        {
LABEL_13:
          RegistryValue = -1073741823;
          goto LABEL_29;
        }
        RegistryValue = IopGetRegistryValue(Handle, L"Start", 0, &P);
        if ( RegistryValue >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
            v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
          else
            RegistryValue = -1073741823;
          ExFreePoolWithTag(P, 0);
          if ( RegistryValue >= 0 )
          {
            if ( v6 > 4 )
              goto LABEL_13;
            if ( a2 )
              *a2 = v6 == 0;
            if ( a3 && IopGetRegistryValue(Handle, L"PnpFlags", 0, &P) >= 0 )
            {
              v8 = P;
              if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
                *a3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
              ExFreePoolWithTag(v8, 0);
            }
          }
        }
      }
    }
  }
LABEL_29:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegistryValue;
}

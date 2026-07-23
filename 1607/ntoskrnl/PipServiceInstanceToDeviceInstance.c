/*
 * XREFs of PipServiceInstanceToDeviceInstance @ 0x1405388F0
 * Callers:
 *     PnpIsAnyDeviceInstanceEnabled @ 0x140538B38 (PnpIsAnyDeviceInstanceEnabled.c)
 *     PnpDriverLoadingFailed @ 0x14057FD04 (PnpDriverLoadingFailed.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     PnpUnicodeStringToWstrFree @ 0x1404E3F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1404E3F44 (PnpUnicodeStringToWstr.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PnpConcatenateUnicodeStrings @ 0x140538AA8 (PnpConcatenateUnicodeStrings.c)
 *     PipOpenServiceEnumKeys @ 0x140539324 (PipOpenServiceEnumKeys.c)
 *     PnpRegSzToString @ 0x140539704 (PnpRegSzToString.c)
 */

NTSTATUS __fastcall PipServiceInstanceToDeviceInstance(
        void *a1,
        __int64 a2,
        unsigned int a3,
        UNICODE_STRING *a4,
        HANDLE *a5,
        int a6)
{
  NTSTATUS result; // eax
  int RegistryValue; // ebx
  _WORD *v10; // rdi
  HANDLE KeyHandle; // [rsp+40h] [rbp-79h] BYREF
  UNICODE_STRING SourceString; // [rsp+48h] [rbp-71h] BYREF
  PVOID P; // [rsp+58h] [rbp-61h] BYREF
  void *v14; // [rsp+60h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-51h] BYREF
  wchar_t pszDest[20]; // [rsp+98h] [rbp-21h] BYREF

  v14 = 0LL;
  if ( a1 )
  {
    ObjectAttributes.RootDirectory = a1;
    SourceString.Buffer = L"Enum";
    *(_DWORD *)&SourceString.Length = 655368;
    ObjectAttributes.ObjectName = &SourceString;
    KeyHandle = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  else
  {
    result = PipOpenServiceEnumKeys(a2, 131097LL, 0LL, &KeyHandle, 0);
  }
  if ( result >= 0 )
  {
    RtlStringCbPrintfW(pszDest, 0x28uLL, L"%u", a3);
    RegistryValue = IopGetRegistryValue(KeyHandle, pszDest, 100, &P);
    ZwClose(KeyHandle);
    if ( RegistryValue >= 0 )
    {
      v10 = P;
      if ( *((_DWORD *)P + 1) == 1 )
      {
        PnpRegSzToString((char *)P + *((unsigned int *)P + 2), *((unsigned int *)P + 3), &P);
        SourceString.Length = (unsigned __int16)P;
        SourceString.MaximumLength = v10[6];
        SourceString.Buffer = (_WORD *)((char *)v10 + *((unsigned int *)v10 + 2));
        if ( !(_WORD)P )
          RegistryValue = -1073741766;
      }
      else
      {
        RegistryValue = -1073741215;
      }
      if ( RegistryValue >= 0 )
      {
        if ( !a5
          || (RegistryValue = PnpUnicodeStringToWstr(&v14, 0LL, &SourceString.Length), RegistryValue >= 0)
          && (RegistryValue = CmOpenDeviceRegKey(
                                *(__int64 *)&PiPnpRtlCtx,
                                (__int64)v14,
                                0x10u,
                                0,
                                a6,
                                0,
                                (__int64)a5,
                                0LL),
              PnpUnicodeStringToWstrFree(v14, (__int64)&SourceString),
              RegistryValue >= 0) )
        {
          if ( a4 )
          {
            RegistryValue = PnpConcatenateUnicodeStrings(a4, &SourceString);
            if ( RegistryValue < 0 )
            {
              if ( a5 )
                ZwClose(*a5);
            }
          }
        }
      }
      ExFreePoolWithTag(v10, 0);
    }
    return RegistryValue;
  }
  return result;
}

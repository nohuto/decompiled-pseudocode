/*
 * XREFs of PipServiceInstanceToDeviceInstance @ 0x14050809C
 * Callers:
 *     PnpIsAnyDeviceInstanceEnabled @ 0x140507FA4 (PnpIsAnyDeviceInstanceEnabled.c)
 *     PnpDriverLoadingFailed @ 0x140549F80 (PnpDriverLoadingFailed.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PipOpenServiceEnumKeys @ 0x1403B9994 (PipOpenServiceEnumKeys.c)
 *     PnpRegSzToString @ 0x1403B9CD8 (PnpRegSzToString.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     PnpUnicodeStringToWstrFree @ 0x14043F59C (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043F5D0 (PnpUnicodeStringToWstr.c)
 *     PnpConcatenateUnicodeStrings @ 0x140508254 (PnpConcatenateUnicodeStrings.c)
 */

NTSTATUS __fastcall PipServiceInstanceToDeviceInstance(
        void *a1,
        UNICODE_STRING *a2,
        unsigned int a3,
        UNICODE_STRING *a4,
        HANDLE *a5,
        int a6)
{
  NTSTATUS result; // eax
  int RegistryValue; // ebx
  _WORD *v10; // rdi
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-79h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-69h] BYREF
  void *v13; // [rsp+58h] [rbp-61h] BYREF
  PVOID P; // [rsp+60h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-51h] BYREF
  wchar_t pszDest[20]; // [rsp+98h] [rbp-21h] BYREF

  v13 = 0LL;
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
    result = PipOpenServiceEnumKeys(a2, 0x20019u, 0LL, &KeyHandle, 0);
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
        PnpRegSzToString((char *)P + *((unsigned int *)P + 2), *((_DWORD *)P + 3), &P);
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
          || (RegistryValue = PnpUnicodeStringToWstr(&v13, 0LL, &SourceString.Length), RegistryValue >= 0)
          && (RegistryValue = CmOpenDeviceRegKey(
                                *(__int64 *)&PiPnpRtlCtx,
                                (__int64)v13,
                                0x10u,
                                0,
                                a6,
                                0,
                                (__int64)a5,
                                0LL),
              PnpUnicodeStringToWstrFree(v13, (__int64)&SourceString),
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

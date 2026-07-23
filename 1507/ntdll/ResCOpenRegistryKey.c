/*
 * XREFs of ResCOpenRegistryKey @ 0x18000EC0C
 * Callers:
 *     _ResCGetRegistryFlags @ 0x18000EB40 (_ResCGetRegistryFlags.c)
 *     ResCGetRegistryLatestIndex @ 0x1800F8FB0 (ResCGetRegistryLatestIndex.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18000F3AC (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall ResCOpenRegistryKey(PHANDLE KeyHandle, _DWORD *a2, const unsigned __int16 *a3)
{
  unsigned int v6; // ebx
  NTSTATUS v7; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-E0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR SourceString[264]; // [rsp+60h] [rbp-A0h] BYREF

  wcscpy(SourceString, L"\\Registry\\Machine\\");
  v6 = 0;
  memset(&SourceString[19], 0, 0x1E4uLL);
  if ( KeyHandle
    && a2
    && a3
    && StringCchCatW(SourceString, 0x105uLL, a3) >= 0
    && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *KeyHandle = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = NtOpenKey(KeyHandle, 0x20019u, &ObjectAttributes);
    *a2 = 2;
    return v7 >= 0;
  }
  return v6;
}

/*
 * XREFs of _ResCGetRegistryFlags @ 0x180059E10
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1E8 (LdrpGetMUIFromCMFSegment.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011900 (RtlInitUnicodeStringEx.c)
 *     ResCOpenRegistryKey @ 0x180059EDC (ResCOpenRegistryKey.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     _ResQueryValueKey @ 0x18005AA98 (_ResQueryValueKey.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

_BOOL8 __fastcall ResCGetRegistryFlags(__int64 a1, __int64 a2, __int64 a3)
{
  BOOL v3; // ebx
  NTSTATUS v4; // eax
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  ULONG v8; // [rsp+70h] [rbp+20h] BYREF
  int v9; // [rsp+74h] [rbp+24h]
  int v10; // [rsp+78h] [rbp+28h]
  int v11; // [rsp+7Ch] [rbp+2Ch]
  int v12; // [rsp+88h] [rbp+38h]

  v11 = HIDWORD(a2);
  v9 = HIDWORD(a1);
  Handle = 0LL;
  v3 = 0;
  v12 = 0;
  v10 = 0;
  v8 = 4;
  if ( L"System\\CurrentControlSet\\Control\\CMF\\Config" && a3 && (unsigned int)ResCOpenRegistryKey(&Handle) )
  {
    if ( v12 != 1
      && RtlInitUnicodeStringEx(&DestinationString, L"SYSTEM") >= 0
      && (int)ResQueryValueKey(Handle, &DestinationString, (ULONG)&v8) >= 0 )
    {
      v3 = v10 == 4;
    }
    if ( Handle )
    {
      v4 = NtClose(Handle);
      RtlNtStatusToDosError(v4);
    }
  }
  return v3;
}

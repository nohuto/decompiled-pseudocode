/*
 * XREFs of _ResCGetRegistryFlags @ 0x180059E20
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1F8 (LdrpGetMUIFromCMFSegment.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011910 (RtlInitUnicodeStringEx.c)
 *     ResCOpenRegistryKey @ 0x180059EEC (ResCOpenRegistryKey.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     _ResQueryValueKey @ 0x18005AAA8 (_ResQueryValueKey.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

_BOOL8 __fastcall ResCGetRegistryFlags(__int64 a1, __int64 a2, __int64 a3)
{
  BOOL v3; // ebx
  NTSTATUS v5; // eax
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v8[24]; // [rsp+38h] [rbp-18h] BYREF
  int v9; // [rsp+70h] [rbp+20h] BYREF
  int v10; // [rsp+74h] [rbp+24h]
  int v11; // [rsp+78h] [rbp+28h] BYREF
  int v12; // [rsp+7Ch] [rbp+2Ch]
  int v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = HIDWORD(a2);
  v10 = HIDWORD(a1);
  Handle = 0LL;
  v3 = 0;
  v13 = 0;
  v11 = 0;
  v9 = 4;
  if ( L"System\\CurrentControlSet\\Control\\CMF\\Config" && a3 && (unsigned int)ResCOpenRegistryKey(&Handle, &v13) )
  {
    if ( v13 != 1
      && (int)RtlInitUnicodeStringEx((__int64)v8, (__int64)L"SYSTEM") >= 0
      && (int)ResQueryValueKey(Handle, v8, &v11, a3, &v9) >= 0 )
    {
      v3 = v11 == 4;
    }
    if ( Handle )
    {
      v5 = NtClose(Handle);
      RtlNtStatusToDosError(v5);
    }
  }
  return v3;
}

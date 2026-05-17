/*
 * XREFs of ResCGetRegistryLatestIndex @ 0x18005D668
 * Callers:
 *     ResCKeGetCacheIndices @ 0x1800FF240 (ResCKeGetCacheIndices.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011910 (RtlInitUnicodeStringEx.c)
 *     ResCOpenRegistryKey @ 0x180059EEC (ResCOpenRegistryKey.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     _ResQueryValueKey @ 0x18005AAA8 (_ResQueryValueKey.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

__int64 __fastcall ResCGetRegistryLatestIndex(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  NTSTATUS v5; // eax
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v7[24]; // [rsp+38h] [rbp-18h] BYREF
  int v8; // [rsp+70h] [rbp+20h] BYREF
  int v9; // [rsp+74h] [rbp+24h]
  int v10; // [rsp+78h] [rbp+28h] BYREF
  int v11; // [rsp+80h] [rbp+30h] BYREF
  int v12; // [rsp+88h] [rbp+38h] BYREF

  v9 = HIDWORD(a1);
  Handle = 0LL;
  v2 = 0;
  v8 = 0;
  if ( a2 )
  {
    if ( (unsigned int)ResCOpenRegistryKey(&Handle, &v10, L"System\\CurrentControlSet\\Control\\CMF\\LatestIndex") )
    {
      if ( v10 != 1 && (int)RtlInitUnicodeStringEx((__int64)v7, (__int64)L"SYSTEM") >= 0 )
      {
        v11 = 4;
        if ( (int)ResQueryValueKey((__int64)Handle, (__int64)v7, &v12, &v8, &v11) >= 0 && v12 == 4 )
        {
          v2 = 1;
          *a2 = v8;
        }
      }
    }
    if ( Handle )
    {
      v5 = NtClose(Handle);
      RtlNtStatusToDosError(v5);
    }
    return v2;
  }
  else
  {
    RtlSetLastWin32Error(0x57u);
    return 0LL;
  }
}

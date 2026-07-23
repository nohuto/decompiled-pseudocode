/*
 * XREFs of ResCGetRegistryLatestIndex @ 0x18004BBEC
 * Callers:
 *     ResCKeGetCacheIndices @ 0x1800F70EC (ResCKeGetCacheIndices.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
 *     ResCOpenRegistryKey @ 0x18004875C (ResCOpenRegistryKey.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     _ResQueryValueKey @ 0x1800491D8 (_ResQueryValueKey.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 */

__int64 __fastcall ResCGetRegistryLatestIndex(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  NTSTATUS v5; // eax
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  int v8; // [rsp+70h] [rbp+20h] BYREF
  int v9; // [rsp+74h] [rbp+24h]
  int v10; // [rsp+78h] [rbp+28h] BYREF
  ULONG v11; // [rsp+80h] [rbp+30h] BYREF
  int v12; // [rsp+88h] [rbp+38h] BYREF

  v9 = HIDWORD(a1);
  Handle = 0LL;
  v2 = 0;
  v8 = 0;
  if ( a2 )
  {
    if ( (unsigned int)ResCOpenRegistryKey(&Handle, &v10, L"System\\CurrentControlSet\\Control\\CMF\\LatestIndex") )
    {
      if ( v10 != 1 && RtlInitUnicodeStringEx(&DestinationString, L"SYSTEM") >= 0 )
      {
        v11 = 4;
        if ( (int)ResQueryValueKey(Handle, &DestinationString, &v12, &v8, &v11) >= 0 && v12 == 4 )
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
    RtlSetLastWin32Error(87);
    return 0LL;
  }
}

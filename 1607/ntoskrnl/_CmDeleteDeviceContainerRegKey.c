/*
 * XREFs of _CmDeleteDeviceContainerRegKey @ 0x1406D9C64
 * Callers:
 *     _CmDeleteDeviceContainerWorker @ 0x1406D9F40 (_CmDeleteDeviceContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1406D9D7C (_CmDeleteDeviceContainerRegKeyWorker.c)
 */

__int64 __fastcall CmDeleteDeviceContainerRegKey(__int64 a1, __int64 a2, int a3)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v14; // [rsp+30h] [rbp-41h]
  _DWORD v15[20]; // [rsp+38h] [rbp-39h] BYREF

  v14 = 0;
  memset(v15, 0, sizeof(v15));
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 328);
  v15[3] = 0;
  v15[2] = a3;
  LOBYTE(v15[4]) = 1;
  if ( v6 )
  {
    v7 = v6(a1, a2, 5LL);
    if ( v7 == -1073741822 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v7 == -1073741536 )
        return v14;
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = CmDeleteDeviceContainerRegKeyWorker(a1, a2, v15[2]);
  v9 = v8;
  if ( !v6 )
    return v9;
  v14 = v8;
  v10 = v6(a1, a2, 5LL);
  v11 = v10;
  if ( v10 == -1073741822 )
    return v9;
  if ( v10 == -1073741536 )
    return v14;
  v12 = v9;
  if ( v11 )
    return (unsigned int)-1073741595;
  return v12;
}

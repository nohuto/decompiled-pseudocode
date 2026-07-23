/*
 * XREFs of _CmDeleteDeviceInterfaceRegKey @ 0x1406D8034
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x140646F54 (PiCMDeleteDeviceInterfaceKey.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x1406D8330 (_CmDeleteDeviceInterfaceWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406D815C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceRegKey(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rdi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  int v16; // [rsp+20h] [rbp-51h]
  unsigned int v17; // [rsp+30h] [rbp-41h]
  _DWORD v18[20]; // [rsp+38h] [rbp-39h] BYREF

  v17 = 0;
  memset(v18, 0, sizeof(v18));
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 328);
  v18[3] = 0;
  v18[5] = 0;
  LOBYTE(v18[4]) = a5;
  v18[2] = a3;
  if ( v8 )
  {
    v16 = 1;
    v9 = v8(a1, a2, 3LL);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        return v17;
      if ( v9 )
        return (unsigned int)-1073741595;
    }
  }
  LOBYTE(v16) = v18[4];
  v10 = CmDeleteDeviceInterfaceRegKeyWorker(a1, a2, v18[2], v18[3], v16);
  v11 = v10;
  if ( !v8 )
    return v11;
  v17 = v10;
  v12 = v8(a1, a2, 3LL);
  v13 = v12;
  if ( v12 == -1073741822 )
    return v11;
  if ( v12 == -1073741536 )
    return v17;
  v14 = v11;
  if ( v13 )
    return (unsigned int)-1073741595;
  return v14;
}

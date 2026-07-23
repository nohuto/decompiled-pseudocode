/*
 * XREFs of _CmDeleteDeviceContainer @ 0x1406D9B48
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x14051299C (_CmAddDeviceToContainerWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1406DAAF4 (_CmRemoveDeviceFromContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _CmDeleteDeviceContainerWorker @ 0x1406D9F40 (_CmDeleteDeviceContainerWorker.c)
 */

__int64 __fastcall CmDeleteDeviceContainer(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rdi
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int v12; // [rsp+30h] [rbp-88h]
  _DWORD v13[20]; // [rsp+38h] [rbp-80h] BYREF

  v12 = 0;
  memset(v13, 0, sizeof(v13));
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 328);
  v13[2] = 0;
  if ( v4 )
  {
    v5 = v4(a1, a2, 5LL);
    if ( v5 == -1073741822 )
    {
      v4 = 0LL;
    }
    else
    {
      if ( v5 == -1073741536 )
        return v12;
      if ( v5 )
        return (unsigned int)-1073741595;
    }
  }
  v6 = CmDeleteDeviceContainerWorker(a1, a2, v13[2]);
  v7 = v6;
  if ( !v4 )
    return v7;
  v12 = v6;
  v8 = v4(a1, a2, 5LL);
  v9 = v8;
  if ( v8 == -1073741822 )
    return v7;
  if ( v8 == -1073741536 )
    return v12;
  v10 = v7;
  if ( v9 )
    return (unsigned int)-1073741595;
  return v10;
}

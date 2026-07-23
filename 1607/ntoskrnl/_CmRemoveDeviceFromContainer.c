/*
 * XREFs of _CmRemoveDeviceFromContainer @ 0x1406DA9C4
 * Callers:
 *     PiDcUpdateDeviceContainerMembership @ 0x14050FABC (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcResetChildDeviceContainers @ 0x140630BAC (PiDcResetChildDeviceContainers.c)
 *     _CmDeleteDeviceWorker @ 0x1406D8A6C (_CmDeleteDeviceWorker.c)
 *     _CmMoveBaseContainer @ 0x1406DA8E8 (_CmMoveBaseContainer.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1406DAAF4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _PnpContainerRaiseDevicesChangedEvent @ 0x1406DC104 (_PnpContainerRaiseDevicesChangedEvent.c)
 */

__int64 __fastcall CmRemoveDeviceFromContainer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // r14
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v14; // [rsp+30h] [rbp-51h]
  _QWORD v15[11]; // [rsp+38h] [rbp-49h] BYREF

  v14 = 0;
  memset(v15, 0, 0x50uLL);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 328);
  v15[2] = a4;
  v15[1] = a3;
  if ( v8 )
  {
    v9 = v8(a1, a2, 5LL);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        return v14;
      if ( v9 )
        return (unsigned int)-1073741595;
    }
  }
  v10 = CmRemoveDeviceFromContainerWorker(a1, a2, v15[1], v15[2], (__int64)&v15[3]);
  v11 = v10;
  if ( v8 )
  {
    v14 = v10;
    v12 = v8(a1, a2, 5LL);
    if ( v12 != -1073741822 )
    {
      if ( v12 != -1073741536 )
      {
        if ( !v12 )
          goto LABEL_8;
        return (unsigned int)-1073741595;
      }
      return v14;
    }
  }
LABEL_8:
  if ( !LOBYTE(v15[3]) )
    PnpContainerRaiseDevicesChangedEvent(a1, a2);
  return v11;
}

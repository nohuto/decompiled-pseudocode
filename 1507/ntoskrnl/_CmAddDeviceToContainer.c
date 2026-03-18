/*
 * XREFs of _CmAddDeviceToContainer @ 0x1405376AC
 * Callers:
 *     PiDcUpdateDeviceContainerMembership @ 0x140537510 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmMoveBaseContainer @ 0x140715420 (_CmMoveBaseContainer.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     _CmAddDeviceToContainerWorker @ 0x1404DA910 (_CmAddDeviceToContainerWorker.c)
 *     _PnpContainerRaiseDevicesChangedEvent @ 0x14058D914 (_PnpContainerRaiseDevicesChangedEvent.c)
 */

__int64 __fastcall CmAddDeviceToContainer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 (__fastcall *v9)(__int64, __int64, __int64); // rsi
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v15; // [rsp+30h] [rbp-51h]
  _QWORD v16[11]; // [rsp+38h] [rbp-49h] BYREF

  v15 = 0;
  memset(v16, 0, 0x50uLL);
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 320);
  v16[2] = a4;
  v16[1] = a3;
  if ( v9 )
  {
    v10 = v9(a1, a2, 5LL);
    if ( v10 == -1073741822 )
    {
      v9 = 0LL;
    }
    else
    {
      if ( v10 == -1073741536 )
        goto LABEL_15;
      if ( v10 )
        return (unsigned int)-1073741595;
    }
  }
  v11 = CmAddDeviceToContainerWorker(a1, a2, v16[1], v16[2], &v16[3]);
  v12 = v11;
  if ( !v9 || (v15 = v11, v13 = v9(a1, a2, 5LL), v13 == -1073741822) )
  {
LABEL_9:
    if ( !LOBYTE(v16[3]) )
      PnpContainerRaiseDevicesChangedEvent(a1, a2);
    goto LABEL_11;
  }
  if ( v13 != -1073741536 )
  {
    if ( !v13 )
      goto LABEL_9;
    return (unsigned int)-1073741595;
  }
LABEL_15:
  v12 = v15;
LABEL_11:
  if ( v12 >= 0 && a5 )
    *a5 = v16[3];
  return (unsigned int)v12;
}

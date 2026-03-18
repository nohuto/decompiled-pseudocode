/*
 * XREFs of _PnpObjectRaisePropertyChangeEvent @ 0x140459F5C
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140456288 (IopProcessSetInterfaceState.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140459EF0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _PnpSetObjectPropertyWorker @ 0x14045C6A0 (_PnpSetObjectPropertyWorker.c)
 *     _CmSetDeviceMappedProperty @ 0x1404B126C (_CmSetDeviceMappedProperty.c)
 *     _CmAddDeviceToContainerWorker @ 0x1404ED090 (_CmAddDeviceToContainerWorker.c)
 *     _CmRaisePropertyChangeEvent @ 0x14053AD60 (_CmRaisePropertyChangeEvent.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140541A60 (_CmSetDeviceInterfaceMappedProperty.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140695A9C (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmSetInstallerClassMappedProperty @ 0x140698FBC (_CmSetInstallerClassMappedProperty.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x1406996A4 (_CmSetInterfaceClassMappedProperty.c)
 * Callees:
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x14045A014 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x1404C1858 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
 *     _PnpInstallerClassRaisePropertyChangeEventWorker @ 0x140696FCC (_PnpInstallerClassRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x140697064 (_PnpInterfaceClassRaisePropertyChangeEventWorker.c)
 */

__int64 __fastcall PnpObjectRaisePropertyChangeEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64, __int64, _QWORD *); // r11
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(a1 + 312);
  if ( v6 )
  {
    switch ( (_DWORD)a3 )
    {
      case 1:
        return PnpDeviceRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 312));
      case 2:
        return PnpInstallerClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 312));
      case 3:
        return PnpInterfaceRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 312));
      case 4:
        return PnpInterfaceClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 312));
      default:
        v8[1] = a5;
        v8[2] = a6;
        v8[0] = a4;
        return v6(a1, a2, a3, 4LL, v8);
    }
  }
  return result;
}

/*
 * XREFs of ndisGetPciDeviceCustomProperties @ 0x1C00AB254
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisGetPciDeviceCustomProperties(__int64 a1, _DWORD *a2)
{
  _DWORD *v4; // r14
  NTSTATUS DevicePropertyData; // eax
  unsigned int v6; // esi
  void *Data; // rax
  const DEVPROPKEY *v8; // rdx
  ULONG RequiredSize; // [rsp+78h] [rbp+38h] BYREF
  ULONG Type; // [rsp+80h] [rbp+40h] BYREF

  RequiredSize = 0;
  if ( (unsigned __int8)byte_1C008370E >= 4u )
    WPP_SF_q(0x24u, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, a1);
  if ( a2 && a1 )
  {
    memset(a2, 0, 0x34uLL);
    *a2 = 3408512;
    v4 = a2 + 1;
    DevicePropertyData = IoGetDevicePropertyData(
                           *(PDEVICE_OBJECT *)(a1 + 3888),
                           &DEVPKEY_PciDevice_DeviceType,
                           0,
                           0,
                           4u,
                           a2 + 1,
                           &RequiredSize,
                           &Type);
    v6 = DevicePropertyData;
    if ( DevicePropertyData >= 0 )
    {
      if ( *v4 <= 1u )
      {
        Data = a2 + 2;
        v8 = &DEVPKEY_PciDevice_CurrentSpeedAndMode;
      }
      else
      {
        if ( *v4 > 5u )
        {
LABEL_10:
          IoGetDevicePropertyData(
            *(PDEVICE_OBJECT *)(a1 + 3888),
            &DEVPKEY_PciDevice_InterruptSupport,
            0,
            0,
            4u,
            a2 + 11,
            &RequiredSize,
            &Type);
          IoGetDevicePropertyData(
            *(PDEVICE_OBJECT *)(a1 + 3888),
            &DEVPKEY_PciDevice_InterruptMessageMaximum,
            0,
            0,
            4u,
            a2 + 12,
            &RequiredSize,
            &Type);
          if ( IoGetDevicePropertyData(
                 *(PDEVICE_OBJECT *)(a1 + 3888),
                 &DEVPKEY_PciDevice_SriovSupport,
                 0,
                 0,
                 4u,
                 (PVOID)(a1 + 3720),
                 &RequiredSize,
                 &Type) < 0 )
            *(_DWORD *)(a1 + 3720) = -1;
          v6 = 0;
          goto LABEL_13;
        }
        IoGetDevicePropertyData(
          *(PDEVICE_OBJECT *)(a1 + 3888),
          &DEVPKEY_PciDevice_CurrentPayloadSize,
          0,
          0,
          4u,
          a2 + 3,
          &RequiredSize,
          &Type);
        IoGetDevicePropertyData(
          *(PDEVICE_OBJECT *)(a1 + 3888),
          &DEVPKEY_PciDevice_MaxPayloadSize,
          0,
          0,
          4u,
          a2 + 4,
          &RequiredSize,
          &Type);
        IoGetDevicePropertyData(
          *(PDEVICE_OBJECT *)(a1 + 3888),
          &DEVPKEY_PciDevice_MaxReadRequestSize,
          0,
          0,
          4u,
          a2 + 5,
          &RequiredSize,
          &Type);
        IoGetDevicePropertyData(
          *(PDEVICE_OBJECT *)(a1 + 3888),
          &DEVPKEY_PciDevice_CurrentLinkSpeed,
          0,
          0,
          4u,
          a2 + 6,
          &RequiredSize,
          &Type);
        IoGetDevicePropertyData(
          *(PDEVICE_OBJECT *)(a1 + 3888),
          &DEVPKEY_PciDevice_CurrentLinkWidth,
          0,
          0,
          4u,
          a2 + 7,
          &RequiredSize,
          &Type);
        IoGetDevicePropertyData(
          *(PDEVICE_OBJECT *)(a1 + 3888),
          &DEVPKEY_PciDevice_MaxLinkSpeed,
          0,
          0,
          4u,
          a2 + 8,
          &RequiredSize,
          &Type);
        IoGetDevicePropertyData(
          *(PDEVICE_OBJECT *)(a1 + 3888),
          &DEVPKEY_PciDevice_MaxLinkWidth,
          0,
          0,
          4u,
          a2 + 9,
          &RequiredSize,
          &Type);
        Data = a2 + 10;
        v8 = &DEVPKEY_PciDevice_ExpressSpecVersion;
      }
      IoGetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 3888), v8, 0, 0, 4u, Data, &RequiredSize, &Type);
      goto LABEL_10;
    }
    if ( (unsigned __int8)byte_1C008370E < 4u )
      return v6;
    WPP_SF_qD(0x25u, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, a1, DevicePropertyData);
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_13:
  if ( (unsigned __int8)byte_1C008370E >= 4u )
    WPP_SF_qD(0x26u, &WPP_6d008e340352ce512a7732a5bb09c858_Traceguids, a1, v6);
  return v6;
}

/*
 * XREFs of PiDcUpdateDeviceContainerMembership @ 0x140485DB8
 * Callers:
 *     PipProcessStartPhase3 @ 0x1403EEA60 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014D79C (_wcsicmp.c)
 *     wcscmp @ 0x14014EF64 (wcscmp.c)
 *     _CmAddDeviceToContainer @ 0x140485F54 (_CmAddDeviceToContainer.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140486454 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmSetDeviceRegProp @ 0x140489A34 (_CmSetDeviceRegProp.c)
 *     _CmGetDeviceRegProp @ 0x1404FCE4C (_CmGetDeviceRegProp.c)
 *     PiPnpRtlEndOperation @ 0x14050147C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x14050173C (PiPnpRtlBeginOperation.c)
 *     PiDcContainerRequiresConfiguration @ 0x14063077C (PiDcContainerRequiresConfiguration.c)
 *     PiDcResetChildDeviceContainers @ 0x140630AF8 (PiDcResetChildDeviceContainers.c)
 *     _CmRemoveDeviceFromContainer @ 0x1406DA88C (_CmRemoveDeviceFromContainer.c)
 */

__int64 __fastcall PiDcUpdateDeviceContainerMembership(__int64 a1, int a2, const wchar_t *a3)
{
  int DeviceRegProp; // ebx
  __int64 v7; // rax
  _BYTE v9[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+44h] [rbp-BCh] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v12[16]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Str2[40]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v14[80]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t v15[40]; // [rsp+100h] [rbp+0h] BYREF

  P = 0LL;
  DeviceRegProp = PiPnpRtlBeginOperation(&P);
  if ( DeviceRegProp >= 0 )
  {
    v10 = 78;
    DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, a1, a2, 37, (__int64)v12, (__int64)Str2, (__int64)&v10, 0);
    if ( DeviceRegProp >= 0 && wcsicmp(a3, Str2) )
    {
      DeviceRegProp = CmGetDeviceContainerIdFromBase(*(_QWORD *)&PiPnpRtlCtx, a1, Str2, v14);
      if ( DeviceRegProp < 0 )
        goto LABEL_15;
      DeviceRegProp = CmRemoveDeviceFromContainer(*(_QWORD *)&PiPnpRtlCtx, v14, Str2, a1);
      if ( DeviceRegProp < 0 )
        goto LABEL_15;
      PiDcResetChildDeviceContainers(a1, v14);
    }
    else if ( DeviceRegProp == -1073741275 )
    {
      DeviceRegProp = 0;
    }
    if ( DeviceRegProp >= 0 )
    {
      DeviceRegProp = CmGetDeviceContainerIdFromBase(*(_QWORD *)&PiPnpRtlCtx, a1, a3, v15);
      if ( DeviceRegProp >= 0 )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( a3[v7] );
        DeviceRegProp = CmSetDeviceRegProp(PiPnpRtlCtx, a1, a2, 37, 1, (__int64)a3, 2 * (int)v7 + 2, 0);
        if ( DeviceRegProp >= 0 )
        {
          if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
          {
            DeviceRegProp = CmAddDeviceToContainer(PiPnpRtlCtx, (unsigned int)v15, (_DWORD)a3, a1, (__int64)v9);
            if ( DeviceRegProp >= 0 && !v9[0] )
              PiDcContainerRequiresConfiguration(v15);
          }
        }
      }
    }
  }
LABEL_15:
  if ( P )
    PiPnpRtlEndOperation(P);
  return (unsigned int)DeviceRegProp;
}

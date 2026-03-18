/*
 * XREFs of _PnpOpenObjectRegKey @ 0x1404FC340
 * Callers:
 *     PiSwPropertySet @ 0x140487AA0 (PiSwPropertySet.c)
 *     _PnpSetObjectPropertyWorker @ 0x1404890F0 (_PnpSetObjectPropertyWorker.c)
 *     PiCMValidateDeviceInstance @ 0x1404F6E90 (PiCMValidateDeviceInstance.c)
 *     PiCMOpenObjectKey @ 0x1404F9B40 (PiCMOpenObjectKey.c)
 *     _PnpGetObjectPropertyWorker @ 0x1404FF58C (_PnpGetObjectPropertyWorker.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1404FF9A4 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057A954 (PiDevCfgQueryObjectProperties.c)
 *     PiDqOpenObjectRegKey @ 0x140631CFC (PiDqOpenObjectRegKey.c)
 *     PiDevCfgConfigureDevice @ 0x140633214 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x140636F9C (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgGetDriverPackageId @ 0x140638FE0 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgInitDeviceCallback @ 0x14063934C (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgQueryDriverNode @ 0x14063C23C (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CCDC (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14063D61C (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceClass @ 0x140641360 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140641D00 (PpDevCfgProcessDeviceReset.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1406DA104 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x1406DB360 (_PnpGetObjectPropertyKeysWorker.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x1406DB62C (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x1404FC440 (_PnpOpenObjectRegKeyDispatch.c)
 */

__int64 __fastcall PnpOpenObjectRegKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5,
        __int64 a6,
        _DWORD *a7,
        int a8)
{
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, __int64, int, __int64 *); // rdi
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  __int64 v20[10]; // [rsp+48h] [rbp-29h] BYREF

  LODWORD(v20[0]) = 0;
  memset(&v20[1], 0, 0x48uLL);
  v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, __int64 *))(a1 + 312);
  BYTE4(v20[2]) = a5;
  v20[3] = a6;
  HIDWORD(v20[4]) = a8;
  LODWORD(v20[2]) = a4;
  if ( v12 )
  {
    v13 = v12(a1, a2, a3, 2LL, 1, v20);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
      {
LABEL_12:
        v15 = v20[0];
        goto LABEL_5;
      }
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  v14 = PnpOpenObjectRegKeyDispatch(a1, a2, a3, v20[2], SBYTE4(v20[2]), v20[3], (__int64)&v20[4], HIDWORD(v20[4]));
  v15 = v14;
  if ( v12 )
  {
    LODWORD(v20[0]) = v14;
    v17 = v12(a1, a2, a3, 2LL, 2, v20);
    v18 = v17;
    if ( v17 != -1073741822 )
    {
      if ( v17 != -1073741536 )
      {
        v19 = v15;
        if ( v18 )
          v19 = -1073741595;
        v15 = v19;
        goto LABEL_5;
      }
      goto LABEL_12;
    }
  }
LABEL_5:
  if ( v15 >= 0 && a7 )
    *a7 = v20[4];
  return (unsigned int)v15;
}

/*
 * XREFs of _PnpOpenObjectRegKey @ 0x14043BAF4
 * Callers:
 *     PiDqOpenObjectRegKey @ 0x140415CA0 (PiDqOpenObjectRegKey.c)
 *     _PnpGetObjectPropertyWorker @ 0x14043A628 (_PnpGetObjectPropertyWorker.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14043AA00 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiSwPropertySet @ 0x1404D7440 (PiSwPropertySet.c)
 *     _PnpSetObjectPropertyWorker @ 0x1404D8C64 (_PnpSetObjectPropertyWorker.c)
 *     PiCMValidateDeviceInstance @ 0x1404DBCC4 (PiCMValidateDeviceInstance.c)
 *     PiCMOpenObjectKey @ 0x14054BB34 (PiCMOpenObjectKey.c)
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgQueryDriverNode @ 0x140588D38 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405893D8 (PiDevCfgGetDriverPackageId.c)
 *     PpDevCfgProcessDeviceClass @ 0x140589730 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140589A64 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140589C68 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405B3DCC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgCopyObjectProperties @ 0x140685538 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgInitDeviceCallback @ 0x140686FA0 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140688A94 (PiDevCfgQueryIncludedDriverNode.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140714D74 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x140715F70 (_PnpGetObjectPropertyKeysWorker.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x14071623C (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x14043BA14 (_PnpOpenObjectRegKeyDispatch.c)
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
  v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, __int64 *))(a1 + 304);
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
  v14 = PnpOpenObjectRegKeyDispatch(a1, a2, a3, v20[2], SBYTE4(v20[2]), v20[3], &v20[4], SWORD2(v20[4]));
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

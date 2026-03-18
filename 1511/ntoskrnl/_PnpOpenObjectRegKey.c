/*
 * XREFs of _PnpOpenObjectRegKey @ 0x14043E904
 * Callers:
 *     _PnpGetObjectPropertyWorker @ 0x14043DAD8 (_PnpGetObjectPropertyWorker.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14043DD68 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiCMOpenObjectKey @ 0x140442BB8 (PiCMOpenObjectKey.c)
 *     PiCMValidateDeviceInstance @ 0x14045BB10 (PiCMValidateDeviceInstance.c)
 *     _PnpSetObjectPropertyWorker @ 0x14045C6A0 (_PnpSetObjectPropertyWorker.c)
 *     PiSwPropertySet @ 0x1404E5C20 (PiSwPropertySet.c)
 *     PiDqOpenObjectRegKey @ 0x140507EBC (PiDqOpenObjectRegKey.c)
 *     PiDevCfgQueryDriverNode @ 0x140510B28 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405111D8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x140514894 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgInitDeviceCallback @ 0x140608D10 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1406096F0 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140609F54 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceClass @ 0x14060CF64 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14060D8F8 (PpDevCfgProcessDeviceReset.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1406951E4 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x1406963E0 (_PnpGetObjectPropertyKeysWorker.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x1406966AC (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x14043E824 (_PnpOpenObjectRegKeyDispatch.c)
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

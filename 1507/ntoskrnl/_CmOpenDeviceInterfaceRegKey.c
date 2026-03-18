/*
 * XREFs of _CmOpenDeviceInterfaceRegKey @ 0x14043F154
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x14043B3D4 (_PnpDispatchDeviceInterface.c)
 *     IopGetDeviceInterfaces @ 0x140457F6C (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140546BD0 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IoGetDeviceInterfaceAlias @ 0x14055E874 (IoGetDeviceInterfaceAlias.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x14058B644 (_CmCreateDeviceInterfaceWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x14058BF2C (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1405C43F4 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x1406833E4 (PiDevCfgConfigureDeviceInterface.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140692750 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1406932CC (PiCMOpenDeviceInterfaceKey.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1407171CC (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14043EF34 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKey(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 (__fastcall *v11)(__int64 *, __int64, __int64); // rsi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // [rsp+40h] [rbp-69h]
  _QWORD v20[11]; // [rsp+48h] [rbp-61h] BYREF

  v19 = 0;
  memset(v20, 0, 0x50uLL);
  v11 = (__int64 (__fastcall *)(__int64 *, __int64, __int64))a1[40];
  LODWORD(v20[2]) = a5;
  v20[1] = a3;
  BYTE4(v20[2]) = a6;
  v20[3] = a7;
  if ( v11 )
  {
    v12 = v11(a1, a2, 3LL);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
      {
LABEL_12:
        v14 = v19;
        goto LABEL_5;
      }
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = CmOpenDeviceInterfaceRegKeyWorker(
          a1,
          a2,
          v20[1],
          SHIDWORD(v20[1]),
          v20[2],
          SBYTE4(v20[2]),
          (HANDLE *)v20[3],
          &v20[4]);
  v14 = v13;
  if ( v11 )
  {
    v19 = v13;
    v16 = v11(a1, a2, 3LL);
    v17 = v16;
    if ( v16 != -1073741822 )
    {
      if ( v16 != -1073741536 )
      {
        v18 = v14;
        if ( v17 )
          v18 = -1073741595;
        v14 = v18;
        goto LABEL_5;
      }
      goto LABEL_12;
    }
  }
LABEL_5:
  if ( v14 >= 0 && a8 )
    *a8 = v20[4];
  return (unsigned int)v14;
}

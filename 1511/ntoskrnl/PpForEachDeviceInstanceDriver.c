/*
 * XREFs of PpForEachDeviceInstanceDriver @ 0x1403B940C
 * Callers:
 *     PiDeviceRegistration @ 0x1403B9274 (PiDeviceRegistration.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiForEachDriverQueryRoutine @ 0x1403B9670 (PiForEachDriverQueryRoutine.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     PnpUnicodeStringToWstrFree @ 0x14043F59C (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043F5D0 (PnpUnicodeStringToWstr.c)
 *     _CmGetInstallerClassRegProp @ 0x1404DDCC8 (_CmGetInstallerClassRegProp.c)
 *     _CmOpenInstallerClassRegKey @ 0x1404DE0A0 (_CmOpenInstallerClassRegKey.c)
 */

__int64 __fastcall PpForEachDeviceInstanceDriver(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID PoolWithTag; // rdi
  __int64 result; // rax
  int DeviceRegProp; // ebx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // r15d
  char *v11; // rsi
  char v12; // cl
  int v13; // r9d
  int InstallerClassRegProp; // eax
  int v15; // r9d
  int v16; // eax
  unsigned int v17; // [rsp+40h] [rbp-69h] BYREF
  unsigned int NumberOfBytes; // [rsp+44h] [rbp-65h] BYREF
  int NumberOfBytes_4; // [rsp+48h] [rbp-61h] BYREF
  __int64 v20; // [rsp+50h] [rbp-59h] BYREF
  HANDLE v21; // [rsp+58h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v23[3]; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v24[80]; // [rsp+80h] [rbp-29h] BYREF

  Handle = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  PoolWithTag = 0LL;
  result = PnpUnicodeStringToWstr(&v20, 0LL, a1);
  if ( (int)result >= 0 )
  {
    DeviceRegProp = CmOpenDeviceRegKey(PiPnpRtlCtx, v20, 16, 0, 131097, 0, (__int64)&v21, 0LL);
    if ( DeviceRegProp >= 0 )
    {
      NumberOfBytes_4 = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        PiPnpRtlCtx,
                        v20,
                        (_DWORD)v21,
                        9,
                        (__int64)&v17,
                        (__int64)v24,
                        (__int64)&NumberOfBytes_4);
      if ( DeviceRegProp >= 0 && v17 == 1 && NumberOfBytes_4 )
        DeviceRegProp = CmOpenInstallerClassRegKey(
                          PiPnpRtlCtx,
                          (unsigned int)v24,
                          v8,
                          v9,
                          131097,
                          0,
                          (__int64)&Handle,
                          0LL);
      v23[2] = a3;
      v23[1] = PiProcessDriverInstance;
      NumberOfBytes_4 = 170;
      v23[0] = a1;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xAAuLL, 0x20207050u);
      if ( PoolWithTag )
      {
        v10 = 0;
        v11 = (char *)&unk_140244EB0;
        while ( 1 )
        {
          v12 = v11[4];
          if ( !v12 || Handle )
          {
            v13 = *(_DWORD *)v11;
            NumberOfBytes = NumberOfBytes_4;
            if ( v12 )
              InstallerClassRegProp = CmGetInstallerClassRegProp(
                                        PiPnpRtlCtx,
                                        (unsigned int)v24,
                                        (_DWORD)Handle,
                                        v13,
                                        (__int64)&v17,
                                        (__int64)PoolWithTag,
                                        (__int64)&NumberOfBytes);
            else
              InstallerClassRegProp = CmGetDeviceRegProp(
                                        PiPnpRtlCtx,
                                        v20,
                                        (_DWORD)v21,
                                        v13,
                                        (__int64)&v17,
                                        (__int64)PoolWithTag,
                                        (__int64)&NumberOfBytes);
            DeviceRegProp = InstallerClassRegProp;
            if ( InstallerClassRegProp == -1073741789 )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
              NumberOfBytes_4 = NumberOfBytes;
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x20207050u);
              if ( !PoolWithTag )
                break;
              v15 = *(_DWORD *)v11;
              if ( v11[4] )
                v16 = CmGetInstallerClassRegProp(
                        PiPnpRtlCtx,
                        (unsigned int)v24,
                        (_DWORD)Handle,
                        v15,
                        (__int64)&v17,
                        (__int64)PoolWithTag,
                        (__int64)&NumberOfBytes);
              else
                v16 = CmGetDeviceRegProp(
                        PiPnpRtlCtx,
                        v20,
                        (_DWORD)v21,
                        v15,
                        (__int64)&v17,
                        (__int64)PoolWithTag,
                        (__int64)&NumberOfBytes);
              DeviceRegProp = v16;
            }
            if ( DeviceRegProp == -1073741275 )
            {
              DeviceRegProp = 0;
            }
            else
            {
              if ( DeviceRegProp < 0 )
                goto LABEL_16;
              DeviceRegProp = PiForEachDriverQueryRoutine(v17, PoolWithTag, NumberOfBytes, v23);
              if ( DeviceRegProp < 0 )
                goto LABEL_16;
            }
          }
          ++v10;
          v11 += 8;
          if ( v10 >= 5 )
            goto LABEL_16;
        }
      }
      DeviceRegProp = -1073741670;
    }
LABEL_16:
    if ( v20 )
      PnpUnicodeStringToWstrFree(v20, a1);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( Handle )
      ZwClose(Handle);
    if ( v21 )
      ZwClose(v21);
    return (unsigned int)DeviceRegProp;
  }
  return result;
}

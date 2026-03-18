/*
 * XREFs of _CmCreateDeviceInterface @ 0x14058B4E4
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x14043B3D4 (_PnpDispatchDeviceInterface.c)
 *     IopRegisterDeviceInterface @ 0x1404DED78 (IopRegisterDeviceInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x14058B644 (_CmCreateDeviceInterfaceWorker.c)
 */

__int64 __fastcall CmCreateDeviceInterface(__int64 a1, __int64 a2, int a3, HANDLE *a4, _BYTE *a5, int a6)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rsi
  int v11; // eax
  int DeviceInterfaceWorker; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v18; // [rsp+30h] [rbp-59h]
  HANDLE v19[11]; // [rsp+38h] [rbp-51h] BYREF

  v18 = 0;
  memset(v19, 0, 0x50uLL);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 320);
  if ( a3 || (LODWORD(v19[1]) = 1, a4) )
    LODWORD(v19[1]) = a3;
  HIDWORD(v19[3]) = a6;
  if ( v10 )
  {
    v11 = v10(a1, a2, 3LL);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        goto LABEL_20;
      if ( v11 )
      {
        v13 = -1073741595;
        goto LABEL_25;
      }
    }
  }
  DeviceInterfaceWorker = CmCreateDeviceInterfaceWorker(
                            a1,
                            a2,
                            v19[1],
                            (unsigned int)&v19[2],
                            (__int64)&v19[3],
                            SWORD2(v19[3]));
  v13 = DeviceInterfaceWorker;
  if ( !v10 )
    goto LABEL_13;
  v18 = DeviceInterfaceWorker;
  v14 = v10(a1, a2, 3LL);
  v15 = v14;
  if ( v14 == -1073741822 )
    goto LABEL_13;
  if ( v14 == -1073741536 )
  {
LABEL_20:
    v13 = v18;
    goto LABEL_13;
  }
  v16 = v13;
  if ( v15 )
    v16 = -1073741595;
  v13 = v16;
LABEL_13:
  if ( v13 >= 0 && a4 )
  {
    *a4 = v19[2];
    goto LABEL_16;
  }
LABEL_25:
  if ( v19[2] )
    ZwClose(v19[2]);
LABEL_16:
  if ( v13 >= 0 && a5 )
    *a5 = v19[3];
  return (unsigned int)v13;
}

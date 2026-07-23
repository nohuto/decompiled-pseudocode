/*
 * XREFs of _CmCreateDeviceContainer @ 0x140512EA4
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x14051299C (_CmAddDeviceToContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _CmCreateDeviceContainerWorker @ 0x140512FF8 (_CmCreateDeviceContainerWorker.c)
 */

__int64 __fastcall CmCreateDeviceContainer(__int64 a1, __int64 a2, __int64 a3, HANDLE *a4, _BYTE *a5)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rdi
  int v9; // eax
  int DeviceContainerWorker; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v16; // [rsp+30h] [rbp-59h]
  HANDLE v17[11]; // [rsp+38h] [rbp-51h] BYREF

  v16 = 0;
  memset(v17, 0, 0x50uLL);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 328);
  HIDWORD(v17[3]) = 0;
  LODWORD(v17[1]) = 4;
  if ( v8 )
  {
    v9 = v8(a1, a2, 5LL);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        goto LABEL_18;
      if ( v9 )
      {
        v11 = -1073741595;
        goto LABEL_21;
      }
    }
  }
  DeviceContainerWorker = CmCreateDeviceContainerWorker(
                            a1,
                            a2,
                            v17[1],
                            (unsigned int)&v17[2],
                            (__int64)&v17[3],
                            SWORD2(v17[3]));
  v11 = DeviceContainerWorker;
  if ( !v8 )
    goto LABEL_11;
  v16 = DeviceContainerWorker;
  v12 = v8(a1, a2, 5LL);
  v13 = v12;
  if ( v12 == -1073741822 )
    goto LABEL_11;
  if ( v12 == -1073741536 )
  {
LABEL_18:
    v11 = v16;
    goto LABEL_11;
  }
  v14 = v11;
  if ( v13 )
    v14 = -1073741595;
  v11 = v14;
LABEL_11:
  if ( v11 >= 0 && a4 )
  {
    *a4 = v17[2];
    goto LABEL_14;
  }
LABEL_21:
  if ( v17[2] )
    ZwClose(v17[2]);
LABEL_14:
  if ( v11 >= 0 && a5 )
    *a5 = v17[3];
  return (unsigned int)v11;
}

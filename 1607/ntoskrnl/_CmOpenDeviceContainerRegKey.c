/*
 * XREFs of _CmOpenDeviceContainerRegKey @ 0x1405134A8
 * Callers:
 *     _CmCreateDeviceContainerWorker @ 0x140512FF8 (_CmCreateDeviceContainerWorker.c)
 *     _PnpDispatchDeviceContainer @ 0x140513084 (_PnpDispatchDeviceContainer.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1405135B4 (_CmOpenDeviceContainerRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDeviceContainerRegKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 (__fastcall *v11)(__int64, __int64, __int64); // rsi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // [rsp+40h] [rbp-69h]
  _QWORD v20[10]; // [rsp+48h] [rbp-61h] BYREF

  v19 = 0;
  memset(v20, 0, sizeof(v20));
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 328);
  LODWORD(v20[2]) = a5;
  v20[1] = a3;
  BYTE4(v20[2]) = a6;
  v20[3] = a7;
  if ( v11 )
  {
    v12 = v11(a1, a2, 5LL);
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
  v13 = CmOpenDeviceContainerRegKeyWorker(a1, a2, LODWORD(v20[1]));
  v14 = v13;
  if ( v11 )
  {
    v19 = v13;
    v16 = v11(a1, a2, 5LL);
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

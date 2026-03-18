/*
 * XREFs of sub_1404F587C @ 0x1404F587C
 * Callers:
 *     sub_1404F0A48 @ 0x1404F0A48 (sub_1404F0A48.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExpHwidProcessInterface @ 0x1404DB0E4 (ExpHwidProcessInterface.c)
 *     ExpHwidProcessDevice @ 0x1404F59EC (ExpHwidProcessDevice.c)
 *     ExpHwidAuthenticateHardwareId @ 0x1404F61F0 (ExpHwidAuthenticateHardwareId.c)
 *     ExpHwidGetDeviceProperties @ 0x1404F63A4 (ExpHwidGetDeviceProperties.c)
 *     sub_14051D694 @ 0x14051D694 (sub_14051D694.c)
 *     sub_14051D71C @ 0x14051D71C (sub_14051D71C.c)
 *     sub_14051D780 @ 0x14051D780 (sub_14051D780.c)
 *     PiPnpFreePdoDeviceList @ 0x14051D8AC (PiPnpFreePdoDeviceList.c)
 */

__int64 __fastcall sub_1404F587C(_QWORD *a1, _DWORD *a2)
{
  int v4; // ebx
  _DWORD *v5; // rsi
  __int64 v6; // rdi
  unsigned int v7; // r14d
  int (__fastcall **v8)(__int64, UNICODE_STRING *, __int64); // rdi
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-59h] BYREF
  int v12; // [rsp+38h] [rbp-51h]
  _BYTE v13[12]; // [rsp+3Ch] [rbp-4Dh]
  PVOID v14; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v15[96]; // [rsp+50h] [rbp-39h] BYREF

  sub_14051D694(v15);
  v14 = 0LL;
  v12 = 0;
  v11 = 0LL;
  *(_DWORD *)&v13[8] = 0;
  *(_QWORD *)v13 = a1 == 0LL;
  v4 = sub_14051D780(&v14);
  if ( v4 >= 0 )
  {
    v5 = v14;
    v6 = 0LL;
    if ( *(_DWORD *)v14 )
    {
      while ( 1 )
      {
        if ( (int)ExpHwidGetDeviceProperties(*(PDEVICE_OBJECT *)&v5[2 * v6 + 2], (ULONG)v15) >= 0 )
        {
          v4 = ExpHwidAuthenticateHardwareId(*(PDEVICE_OBJECT *)&v5[2 * v6 + 2]);
          if ( v4 < 0 )
            break;
          v4 = ExpHwidProcessDevice(v15, 0LL, &v11);
          if ( v4 < 0 )
            break;
        }
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *v5 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v7 = 0;
      v8 = (int (__fastcall **)(__int64, UNICODE_STRING *, __int64))&off_1402F4140;
      while ( 1 )
      {
        v9 = *((_BYTE *)v8 - 16)
           ? ExpHwidProcessInterface((int)*(v8 - 1), *((_BYTE *)v8 - 15), *v8, (__int64)v5, (__int64)v15, (__int64)&v11)
           : (*v8)((__int64)&v11, 0LL, 0LL);
        v4 = v9;
        if ( v9 < 0 )
          break;
        ++v7;
        v8 += 3;
        if ( v7 >= 6 )
        {
          if ( a1 )
            *a1 = *(_QWORD *)&v13[4];
          *(_QWORD *)&v13[4] = 0LL;
          *a2 = HIDWORD(v11);
          break;
        }
      }
    }
    PiPnpFreePdoDeviceList(v5);
  }
  sub_14051D71C(v15);
  if ( *(_QWORD *)&v13[4] )
    ExFreePoolWithTag(*(PVOID *)&v13[4], 0);
  return (unsigned int)v4;
}

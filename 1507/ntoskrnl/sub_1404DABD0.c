/*
 * XREFs of sub_1404DABD0 @ 0x1404DABD0
 * Callers:
 *     sub_14051F670 @ 0x14051F670 (sub_14051F670.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     sub_14040A810 @ 0x14040A810 (sub_14040A810.c)
 *     sub_14040A898 @ 0x14040A898 (sub_14040A898.c)
 *     sub_14040A8FC @ 0x14040A8FC (sub_14040A8FC.c)
 *     PiPnpFreePdoDeviceList @ 0x14040AA28 (PiPnpFreePdoDeviceList.c)
 *     sub_140459D74 @ 0x140459D74 (sub_140459D74.c)
 *     sub_1404DAD40 @ 0x1404DAD40 (sub_1404DAD40.c)
 *     sub_1404DB260 @ 0x1404DB260 (sub_1404DB260.c)
 *     sub_1404DB414 @ 0x1404DB414 (sub_1404DB414.c)
 */

__int64 __fastcall sub_1404DABD0(_QWORD *a1, _DWORD *a2)
{
  int v4; // ebx
  PVOID *v5; // rsi
  __int64 v6; // rdi
  unsigned int v7; // r14d
  int (__fastcall **v8)(__int64, UNICODE_STRING *, __int64); // rdi
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-59h] BYREF
  int v12; // [rsp+38h] [rbp-51h]
  _BYTE v13[12]; // [rsp+3Ch] [rbp-4Dh]
  PVOID v14; // [rsp+48h] [rbp-41h] BYREF
  char v15[96]; // [rsp+50h] [rbp-39h] BYREF

  sub_14040A810(v15);
  v14 = 0LL;
  v12 = 0;
  v11 = 0LL;
  *(_DWORD *)&v13[8] = 0;
  *(_QWORD *)v13 = a1 == 0LL;
  v4 = sub_14040A8FC((__int64)&v14);
  if ( v4 >= 0 )
  {
    v5 = (PVOID *)v14;
    v6 = 0LL;
    if ( *(_DWORD *)v14 )
    {
      while ( 1 )
      {
        if ( (int)sub_1404DB414((PDEVICE_OBJECT)v5[v6 + 1], (ULONG)v15) >= 0 )
        {
          v4 = sub_1404DB260((PDEVICE_OBJECT)v5[v6 + 1]);
          if ( v4 < 0 )
            break;
          v4 = sub_1404DAD40(v15, 0LL, &v11);
          if ( v4 < 0 )
            break;
        }
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *(_DWORD *)v5 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v7 = 0;
      v8 = (int (__fastcall **)(__int64, UNICODE_STRING *, __int64))&off_1403216B0;
      while ( 1 )
      {
        v9 = *((_BYTE *)v8 - 16)
           ? sub_140459D74((int *)*(v8 - 1), *((_BYTE *)v8 - 15), *v8, (__int64)v5, (__int64)v15, (__int64)&v11)
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
  sub_14040A898(v15);
  if ( *(_QWORD *)&v13[4] )
    ExFreePoolWithTag(*(PVOID *)&v13[4], 0);
  return (unsigned int)v4;
}

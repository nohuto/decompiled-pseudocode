/*
 * XREFs of sub_14045751C @ 0x14045751C
 * Callers:
 *     sub_14048BE7C @ 0x14048BE7C (sub_14048BE7C.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     sub_14045768C @ 0x14045768C (sub_14045768C.c)
 *     sub_140458F88 @ 0x140458F88 (sub_140458F88.c)
 *     sub_14045913C @ 0x14045913C (sub_14045913C.c)
 *     sub_140495970 @ 0x140495970 (sub_140495970.c)
 *     PiPnpFreePdoDeviceList @ 0x140495A9C (PiPnpFreePdoDeviceList.c)
 *     sub_140495DD4 @ 0x140495DD4 (sub_140495DD4.c)
 *     sub_140496634 @ 0x140496634 (sub_140496634.c)
 *     sub_140496698 @ 0x140496698 (sub_140496698.c)
 */

__int64 __fastcall sub_14045751C(_QWORD *a1, _DWORD *a2)
{
  int v4; // edx
  int v5; // ebx
  _DWORD *v6; // rsi
  __int64 v7; // rdi
  unsigned int v8; // r14d
  __int64 (__fastcall **v9)(); // rdi
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-59h] BYREF
  int v13; // [rsp+38h] [rbp-51h]
  _BYTE v14[12]; // [rsp+3Ch] [rbp-4Dh]
  PVOID v15; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v16[96]; // [rsp+50h] [rbp-39h] BYREF

  sub_140496698(v16);
  v15 = 0LL;
  v13 = 0;
  v12 = 0LL;
  *(_DWORD *)&v14[8] = 0;
  *(_QWORD *)v14 = a1 == 0LL;
  v5 = sub_140495970(&v15);
  if ( v5 >= 0 )
  {
    v6 = v15;
    v7 = 0LL;
    if ( *(_DWORD *)v15 )
    {
      while ( 1 )
      {
        if ( (int)sub_14045913C(*(PDEVICE_OBJECT *)&v6[2 * v7 + 2], (ULONG)v16) >= 0 )
        {
          v5 = sub_140458F88(*(PDEVICE_OBJECT *)&v6[2 * v7 + 2]);
          if ( v5 < 0 )
            break;
          v5 = sub_14045768C(v16, 0LL, &v12);
          if ( v5 < 0 )
            break;
        }
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *v6 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v8 = 0;
      v9 = &off_1402D2560;
      while ( 1 )
      {
        if ( *((_BYTE *)v9 - 16) )
        {
          LOBYTE(v4) = *((_BYTE *)v9 - 15);
          v10 = sub_140495DD4((unsigned int)*(v9 - 1), v4, (unsigned int)*v9, (_DWORD)v6, (__int64)v16, (__int64)&v12);
        }
        else
        {
          v10 = ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD))*v9)(&v12, 0LL, 0LL);
        }
        v5 = v10;
        if ( v10 < 0 )
          break;
        ++v8;
        v9 += 3;
        if ( v8 >= 6 )
        {
          if ( a1 )
            *a1 = *(_QWORD *)&v14[4];
          *(_QWORD *)&v14[4] = 0LL;
          *a2 = HIDWORD(v12);
          break;
        }
      }
    }
    PiPnpFreePdoDeviceList(v6);
  }
  sub_140496634(v16);
  if ( *(_QWORD *)&v14[4] )
    ExFreePoolWithTag(*(PVOID *)&v14[4], 0);
  return (unsigned int)v5;
}

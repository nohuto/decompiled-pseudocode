/*
 * XREFs of FsRtlGetSectorSizeInformation @ 0x14052CD4C
 * Callers:
 *     RawQueryVolumeInformation @ 0x1403ED294 (RawQueryVolumeInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     FsRtlIssueDeviceIoControl @ 0x14052D0B8 (FsRtlIssueDeviceIoControl.c)
 */

__int64 __fastcall FsRtlGetSectorSizeInformation(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 result; // rax
  int v5; // eax
  int v6; // r10d
  unsigned int v7; // ecx
  unsigned int v8; // r9d
  int v9; // eax
  int v10; // esi
  unsigned int v11; // r8d
  int v12; // edx
  unsigned int v13; // eax
  __int64 v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v15[18]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+E0h] [rbp-20h]
  int v17; // [rsp+E8h] [rbp-18h]
  __int64 v18; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v19; // [rsp+F8h] [rbp-8h]
  __int64 v20; // [rsp+100h] [rbp+0h]
  unsigned int v21; // [rsp+108h] [rbp+8h]
  __int64 v22; // [rsp+110h] [rbp+10h] BYREF
  int v23; // [rsp+118h] [rbp+18h]
  __int64 v24; // [rsp+120h] [rbp+20h] BYREF
  int v25; // [rsp+128h] [rbp+28h]
  __int64 v26; // [rsp+130h] [rbp+30h] BYREF
  __int64 v27; // [rsp+138h] [rbp+38h]
  _BYTE v28[20]; // [rsp+140h] [rbp+40h] BYREF
  int v29; // [rsp+154h] [rbp+54h]

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 24) = 0;
  result = FsRtlIssueDeviceIoControl(DeviceObject, 0x70000u, 0, v28, 0x18u, 0LL);
  if ( (int)result >= 0 )
  {
    if ( !v29 || ((v29 - 1) & v29) != 0 )
    {
      return 3221225675LL;
    }
    else
    {
      v17 = 0;
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0;
      v16 = 6LL;
      v18 = 0x100000002LL;
      v5 = FsRtlIssueDeviceIoControl(DeviceObject, 0x2D1400u, 0xCu, &v18, 0x1Cu, (__int64)v14);
      v6 = v29;
      if ( v5 < 0
        || v14[0] < 0x1CuLL
        || (unsigned int)v18 < 0x1C
        || (unsigned __int64)HIDWORD(v18) < v14[0]
        || !(_DWORD)v20
        || (_DWORD)v20 != v29
        || (v7 = HIDWORD(v20), HIDWORD(v20) < (unsigned int)v20)
        || !HIDWORD(v20)
        || ((HIDWORD(v20) - 1) & HIDWORD(v20)) != 0
        || HIDWORD(v20) % (unsigned int)v20
        || (v8 = v21, v21 % (unsigned int)v20) )
      {
        v21 = -1;
        v7 = v29;
        LODWORD(v20) = v29;
        v8 = -1;
        HIDWORD(v20) = v29;
        v18 = 0LL;
        v19 = 0LL;
      }
      *(_DWORD *)a2 = v29;
      *(_DWORD *)(a2 + 4) = v7;
      *(_DWORD *)(a2 + 8) = v7;
      *(_DWORD *)(a2 + 16) = 3;
      *(_DWORD *)(a2 + 20) = v8;
      *(_DWORD *)(a2 + 24) = -1;
      *(_DWORD *)(a2 + 12) = v6;
      if ( v8 != -1 )
      {
        *(_DWORD *)(a2 + 20) = v8;
        v9 = *(_DWORD *)(a2 + 16);
        v10 = v8 % v7;
        if ( v8 % v7 )
          v9 = 2;
        *(_DWORD *)(a2 + 16) = v9;
        memset(v15, 0, sizeof(v15));
        if ( (int)FsRtlIssueDeviceIoControl(DeviceObject, 0x70048u, 0, v15, 0x90u, 0LL) >= 0 )
        {
          v11 = HIDWORD(v20);
          v12 = v15[1] % (__int64)HIDWORD(v20);
          v13 = HIDWORD(v20) - v12;
          *(_DWORD *)(a2 + 24) = v12;
          if ( v13 % v11 != v10 )
            *(_DWORD *)(a2 + 16) &= ~2u;
        }
      }
      v17 = 0;
      v22 = 0LL;
      v23 = 0;
      v16 = 7LL;
      if ( (int)FsRtlIssueDeviceIoControl(DeviceObject, 0x2D1400u, 0xCu, &v22, 0xCu, (__int64)v14) >= 0
        && v14[0] >= 0xCuLL
        && (unsigned int)v22 >= 0xC
        && !(_BYTE)v23
        && (unsigned __int64)HIDWORD(v22) >= v14[0] )
      {
        *(_DWORD *)(a2 + 16) |= 4u;
      }
      v17 = 0;
      v24 = 0LL;
      v25 = 0;
      v16 = 8LL;
      if ( (int)FsRtlIssueDeviceIoControl(DeviceObject, 0x2D1400u, 0xCu, &v24, 0xCu, (__int64)v14) >= 0
        && v14[0] >= 0xCuLL
        && (unsigned int)v24 >= 0xC
        && (_BYTE)v25
        && (unsigned __int64)HIDWORD(v24) >= v14[0] )
      {
        *(_DWORD *)(a2 + 16) |= 8u;
      }
      v17 = 0;
      v26 = 0LL;
      v27 = 0LL;
      v16 = 55LL;
      if ( (int)FsRtlIssueDeviceIoControl(DeviceObject, 0x2D1400u, 0xCu, &v26, 0x10u, (__int64)v14) >= 0
        && v14[0] == 16
        && (v27 & 1) != 0 )
      {
        *(_DWORD *)(a2 + 16) |= 0x10u;
      }
      return 0LL;
    }
  }
  return result;
}

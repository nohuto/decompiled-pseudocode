/*
 * XREFs of sub_1404A8518 @ 0x1404A8518
 * Callers:
 *     ExIsWindowsToGo @ 0x140409C88 (ExIsWindowsToGo.c)
 *     sub_1407DA410 @ 0x1407DA410 (sub_1407DA410.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     RtlCheckPortableOperatingSystem @ 0x140074C54 (RtlCheckPortableOperatingSystem.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     sub_14040C7E8 @ 0x14040C7E8 (sub_14040C7E8.c)
 *     IoGetDevicePropertyData @ 0x1404DB778 (IoGetDevicePropertyData.c)
 */

__int64 __fastcall sub_1404A8518(_DWORD *a1)
{
  unsigned int *v2; // rsi
  int DevicePropertyData; // ebx
  ULONG v5; // edi
  int i; // r14d
  unsigned int *PoolWithTag; // rax
  int v8; // eax
  unsigned int *v9; // rdi
  int v10; // eax
  void *v11; // r14
  char v12; // dl
  char *v13; // rcx
  char *v14; // r8
  char Data; // [rsp+40h] [rbp-C0h] BYREF
  BOOLEAN IsPortable[7]; // [rsp+41h] [rbp-BFh] BYREF
  ULONG_PTR v17; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v18[4]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG NumberOfBytes[3]; // [rsp+54h] [rbp-ACh] BYREF
  ULONG RequiredSize; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Type; // [rsp+64h] [rbp-9Ch] BYREF
  UNICODE_STRING v22; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+88h] [rbp-78h] BYREF
  int v25; // [rsp+90h] [rbp-70h]
  WCHAR SourceString[4]; // [rsp+98h] [rbp-68h] BYREF
  int v27; // [rsp+A0h] [rbp-60h]
  wchar_t v28; // [rsp+A4h] [rbp-5Ch]
  wchar_t pszDest[264]; // [rsp+B0h] [rbp-50h] BYREF

  *a1 = 0;
  v2 = 0LL;
  *(_QWORD *)&NumberOfBytes[1] = 0LL;
  DevicePropertyData = RtlCheckPortableOperatingSystem(IsPortable);
  if ( DevicePropertyData >= 0 && IsPortable[0] )
  {
    v27 = *(_DWORD *)L"x:";
    v28 = asc_1405D1DC0[6];
    *(_QWORD *)SourceString = *(_QWORD *)L"\\??\\x:";
    LOWORD(v27) = *NtSystemRoot.Buffer;
    RtlInitUnicodeString(&DestinationString, SourceString);
    v5 = 32;
    for ( i = 0; ; i = 1 )
    {
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v5, 0x20475457u);
      v2 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, v5);
      v8 = sub_14040C7E8(&DestinationString, 0x560000u, 0LL, 0, v2, v5, 0LL, 0LL);
      DevicePropertyData = v8;
      if ( v8 >= 0 )
      {
        if ( *v2 == 1 )
        {
          RtlStringCchPrintfW(pszDest, 0x104uLL, L"\\??\\PhysicalDrive%u", v2[2]);
          RtlInitUnicodeString(&v22, pszDest);
          v24 = 0LL;
          v25 = 0;
          DevicePropertyData = sub_14040C7E8(&v22, 0x2D1400u, &v24, 0xCu, v18, 8u, 0LL, 0LL);
          if ( DevicePropertyData >= 0 )
          {
            v9 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20475457u);
            if ( v9 )
            {
              v17 = 0LL;
              v10 = sub_14040C7E8(
                      &v22,
                      0x2D1400u,
                      &v24,
                      0xCu,
                      v9,
                      NumberOfBytes[0],
                      &v17,
                      (PDEVICE_OBJECT *)&NumberOfBytes[1]);
              v11 = *(void **)&NumberOfBytes[1];
              DevicePropertyData = v10;
              if ( v10 >= 0 )
              {
                if ( *(_QWORD *)&NumberOfBytes[1] && v17 >= 0x28 && v17 >= v9[1] )
                {
                  if ( v9[7] == 7 )
                  {
                    DevicePropertyData = IoGetDevicePropertyData(
                                           *(PDEVICE_OBJECT *)&NumberOfBytes[1],
                                           &DEVPKEY_Device_InLocalMachineContainer,
                                           0,
                                           0,
                                           1u,
                                           &Data,
                                           &RequiredSize,
                                           &Type);
                    if ( DevicePropertyData >= 0 && !Data )
                    {
                      *a1 = 2;
                      v12 = 0;
                      v13 = (char *)v9 + v9[6];
                      v14 = (char *)v9 + v9[1];
                      if ( v13 >= (char *)v9 + 36 )
                      {
                        if ( v13 >= v14 )
                          goto LABEL_31;
                        do
                        {
                          if ( !*v13 )
                            break;
                          if ( ((*v13 - 32) & 0xEF) != 0 )
                            v12 = 1;
                          ++v13;
                        }
                        while ( v13 < v14 );
                        if ( v13 >= v14 )
LABEL_31:
                          v12 = 0;
                        if ( v12 )
                        {
                          *a1 = 1;
                          DevicePropertyData = 0;
                        }
                      }
                    }
                  }
                }
                else
                {
                  DevicePropertyData = -1073741823;
                }
              }
              ExFreePoolWithTag(v9, 0);
              if ( v11 )
                ObfDereferenceObject(v11);
            }
            else
            {
              DevicePropertyData = -1073741801;
            }
          }
        }
        else
        {
          DevicePropertyData = 0;
        }
LABEL_37:
        ExFreePoolWithTag(v2, 0);
        return (unsigned int)DevicePropertyData;
      }
      if ( v8 != -2147483643 || i )
        goto LABEL_37;
      v5 += 24 * (*v2 - 1);
    }
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DevicePropertyData;
}

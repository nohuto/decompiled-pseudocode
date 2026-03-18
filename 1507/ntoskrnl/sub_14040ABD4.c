/*
 * XREFs of sub_14040ABD4 @ 0x14040ABD4
 * Callers:
 *     sub_14040A6E0 @ 0x14040A6E0 (sub_14040A6E0.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     sub_14040A810 @ 0x14040A810 (sub_14040A810.c)
 *     sub_14040A898 @ 0x14040A898 (sub_14040A898.c)
 *     sub_14040C7E8 @ 0x14040C7E8 (sub_14040C7E8.c)
 *     sub_1404DAE70 @ 0x1404DAE70 (sub_1404DAE70.c)
 *     sub_1404DB414 @ 0x1404DB414 (sub_1404DB414.c)
 */

__int64 __fastcall sub_14040ABD4(__int64 a1, unsigned int a2)
{
  NTSTATUS v4; // ebx
  PVOID PoolWithTag; // rsi
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v8[4]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD NumberOfBytes[5]; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  int v11; // [rsp+68h] [rbp-98h]
  _DWORD v12[8]; // [rsp+70h] [rbp-90h] BYREF
  char v13[32]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v14; // [rsp+B0h] [rbp-50h]
  char v15; // [rsp+B2h] [rbp-4Eh]
  int v16; // [rsp+B4h] [rbp-4Ch]
  wchar_t pszDest[264]; // [rsp+F0h] [rbp-10h] BYREF

  Object = 0LL;
  sub_14040A810(v13);
  v4 = RtlStringCchPrintfW(pszDest, 0x104uLL, L"\\??\\PhysicalDrive%u", a2);
  if ( v4 >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&NumberOfBytes[1], pszDest);
    v10 = 0LL;
    v11 = 0;
    v4 = sub_14040C7E8(&NumberOfBytes[1], 2954240LL, &v10, 12LL, v8, 8, 0LL, 0LL);
    if ( v4 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20534C53u);
      if ( !PoolWithTag )
      {
        v4 = -1073741670;
        goto LABEL_13;
      }
      v4 = sub_14040C7E8(&NumberOfBytes[1], 2954240LL, &v10, 12LL, PoolWithTag, NumberOfBytes[0], 0LL, &Object);
      if ( v4 < 0 )
        goto LABEL_10;
      if ( !Object )
      {
LABEL_12:
        ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_13;
      }
      if ( !*(_BYTE *)(a1 + 12) )
      {
        memset(v12, 0, sizeof(v12));
        LOBYTE(v12[1]) = 2;
        *(_OWORD *)&v12[3] = SL_HWID_IF_GUID_SYSTEM_VOLUME;
        v4 = sub_1404DB414((PDEVICE_OBJECT)Object, (ULONG)v13);
        if ( v4 < 0 )
          goto LABEL_10;
        HIWORD(v12[1]) = v14;
        BYTE1(v12[1]) = v15;
        v12[2] = v16;
      }
      v4 = sub_1404DAE70(a1, v12, PoolWithTag, NumberOfBytes[0]);
LABEL_10:
      if ( Object )
        ObfDereferenceObject(Object);
      goto LABEL_12;
    }
  }
LABEL_13:
  sub_14040A898(v13);
  return (unsigned int)v4;
}

/*
 * XREFs of sub_140496110 @ 0x140496110
 * Callers:
 *     sub_140495840 @ 0x140495840 (sub_140495840.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140003C28 (RtlStringCchPrintfW.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     sub_1404577BC @ 0x1404577BC (sub_1404577BC.c)
 *     sub_14045913C @ 0x14045913C (sub_14045913C.c)
 *     sub_1404964E4 @ 0x1404964E4 (sub_1404964E4.c)
 *     sub_140496634 @ 0x140496634 (sub_140496634.c)
 *     sub_140496698 @ 0x140496698 (sub_140496698.c)
 */

__int64 __fastcall sub_140496110(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  PVOID PoolWithTag; // rsi
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v8[4]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int NumberOfBytes[5]; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  int v11; // [rsp+68h] [rbp-98h]
  _DWORD v12[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v13[32]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v14; // [rsp+B0h] [rbp-50h]
  char v15; // [rsp+B2h] [rbp-4Eh]
  int v16; // [rsp+B4h] [rbp-4Ch]
  wchar_t pszDest[264]; // [rsp+F0h] [rbp-10h] BYREF

  Object = 0LL;
  sub_140496698(v13);
  v4 = RtlStringCchPrintfW(pszDest, 0x104uLL, L"\\??\\PhysicalDrive%u", a2);
  if ( v4 >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&NumberOfBytes[1], pszDest);
    v10 = 0LL;
    v11 = 0;
    v4 = sub_1404964E4(&NumberOfBytes[1], 2954240LL, &v10, 12LL, v8, 8, 0LL, 0LL);
    if ( v4 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20534C53u);
      if ( !PoolWithTag )
      {
        v4 = -1073741670;
        goto LABEL_13;
      }
      v4 = sub_1404964E4(&NumberOfBytes[1], 2954240LL, &v10, 12LL, PoolWithTag, NumberOfBytes[0], 0LL, &Object);
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
        v4 = sub_14045913C((PDEVICE_OBJECT)Object, (__int64)v13);
        if ( v4 < 0 )
          goto LABEL_10;
        HIWORD(v12[1]) = v14;
        BYTE1(v12[1]) = v15;
        v12[2] = v16;
      }
      v4 = sub_1404577BC(a1, (__int64)v12, PoolWithTag, NumberOfBytes[0]);
LABEL_10:
      if ( Object )
        ObfDereferenceObject(Object);
      goto LABEL_12;
    }
  }
LABEL_13:
  sub_140496634(v13);
  return (unsigned int)v4;
}

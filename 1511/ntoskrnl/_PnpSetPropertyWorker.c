/*
 * XREFs of _PnpSetPropertyWorker @ 0x14045CE24
 * Callers:
 *     _PnpSetGenericStoreProperty @ 0x14045CC44 (_PnpSetGenericStoreProperty.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14008FA28 (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x14008FB80 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     swprintf_s @ 0x1401485D0 (swprintf_s.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x14043F144 (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegCreateKey @ 0x14045D0B0 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegSetValue @ 0x14045D128 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegDeleteTree @ 0x140522444 (_PnpCtxRegDeleteTree.c)
 */

__int64 __fastcall PnpSetPropertyWorker(
        __int64 *a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  int v10; // ebx
  int v11; // r9d
  int Key; // eax
  int v13; // r9d
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-E8h]
  int v19; // [rsp+90h] [rbp-80h] BYREF
  HANDLE v20; // [rsp+98h] [rbp-78h] BYREF
  int v21; // [rsp+A0h] [rbp-70h] BYREF
  HANDLE v22; // [rsp+A8h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-58h]
  __int64 v25; // [rsp+C0h] [rbp-50h]
  size_t pcchLength; // [rsp+C8h] [rbp-48h] BYREF
  wchar_t Dst[16]; // [rsp+D0h] [rbp-40h] BYREF
  wchar_t pszDest[40]; // [rsp+F0h] [rbp-20h] BYREF

  v24 = a2;
  v25 = a6;
  v19 = 0;
  v21 = 0;
  v22 = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  if ( a7 > 0x7FFFFFFF )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    v10 = RtlUnalignedStringCchLengthW(a3, 0x55uLL, &pcchLength);
    if ( v10 < 0 )
      return (unsigned int)v10;
  }
  if ( a5 == 25 && a3 && *a3 )
    return (unsigned int)-1073741811;
  if ( RtlStringCchPrintfExW(pszDest, 0x27uLL, 0LL, 0LL, 0x800u, L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}") < 0 )
    goto LABEL_26;
  swprintf_s(Dst, 9uLL, L"%04lX", *(unsigned int *)(a4 + 16));
  v10 = PnpOpenPropertiesKey(a1, v24, 0LL, 4u, 1, (__int64)pszFormat, &v22);
  if ( v10 < 0 )
  {
    v22 = 0LL;
    goto LABEL_13;
  }
  Key = PnpCtxRegCreateKey((_DWORD)a1, (_DWORD)v22, (unsigned int)pszDest, v11, 4, 0LL, (__int64)&v20, (__int64)&v19);
  if ( Key == -1073741444 )
    goto LABEL_26;
  if ( Key < 0 )
  {
    v20 = 0LL;
    v10 = Key;
    goto LABEL_13;
  }
  v14 = PnpCtxRegCreateKey((_DWORD)a1, (_DWORD)v20, (unsigned int)Dst, v13, 65542, 0LL, (__int64)&Handle, (__int64)&v21);
  if ( v14 == -1073741444 )
  {
LABEL_26:
    v10 = -1073741595;
LABEL_13:
    if ( Handle )
    {
      ZwClose(Handle);
      if ( v10 < 0 && v21 == 1 )
        PnpCtxRegDeleteTree(a1, v20, Dst);
    }
    goto LABEL_15;
  }
  if ( v14 >= 0 )
  {
    v16 = PnpCtxRegSetValue(v15, Handle, a3, (unsigned __int16)a5 | 0xFFFF0000, v25, a7);
    if ( v16 != -1073741444 )
    {
      if ( v16 < 0 )
        v10 = v16;
      goto LABEL_13;
    }
    goto LABEL_26;
  }
  Handle = 0LL;
  v10 = v14;
LABEL_15:
  if ( v20 )
  {
    ZwClose(v20);
    if ( v10 < 0 && v19 == 1 )
      PnpCtxRegDeleteTree(a1, v22, pszDest);
  }
  if ( v22 )
    ZwClose(v22);
  return (unsigned int)v10;
}

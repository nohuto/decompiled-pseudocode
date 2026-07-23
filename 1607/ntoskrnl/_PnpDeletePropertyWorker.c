/*
 * XREFs of _PnpDeletePropertyWorker @ 0x1404D2D04
 * Callers:
 *     _PnpSetGenericStoreProperty @ 0x140512430 (_PnpSetGenericStoreProperty.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0D84 (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x1400C1760 (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpCtxRegDeleteValue @ 0x1404D2EA8 (_PnpCtxRegDeleteValue.c)
 *     _PnpOpenPropertiesKey @ 0x1404DDBBC (_PnpOpenPropertiesKey.c)
 */

__int64 __fastcall PnpDeletePropertyWorker(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  int v11; // eax
  __int64 v12; // rcx
  NTSTATUS v13; // ebx
  int v14; // edi
  ULONG dwFlags; // [rsp+20h] [rbp-138h]
  size_t pcchLength; // [rsp+98h] [rbp-C0h] BYREF
  wchar_t pszDest[48]; // [rsp+A0h] [rbp-B8h] BYREF

  if ( a5 || a7 )
    return (unsigned int)-1073741811;
  if ( !a3 || (v13 = RtlUnalignedStringCchLengthW(a3, 0x55uLL, &pcchLength), v13 >= 0) )
  {
    if ( RtlStringCchPrintfExW(
           pszDest,
           0x30uLL,
           0LL,
           0LL,
           0x800u,
           L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX",
           *(_DWORD *)a4,
           *(unsigned __int16 *)(a4 + 4),
           *(unsigned __int16 *)(a4 + 6),
           *(unsigned __int8 *)(a4 + 8),
           *(unsigned __int8 *)(a4 + 9),
           *(unsigned __int8 *)(a4 + 10),
           *(unsigned __int8 *)(a4 + 11),
           *(unsigned __int8 *)(a4 + 12),
           *(unsigned __int8 *)(a4 + 13),
           *(unsigned __int8 *)(a4 + 14),
           *(unsigned __int8 *)(a4 + 15),
           *(_DWORD *)(a4 + 16)) < 0 )
      return (unsigned int)-1073741595;
    LOBYTE(dwFlags) = 0;
    v11 = PnpOpenPropertiesKey(a1, a2, pszDest, 6LL, dwFlags);
    v13 = v11;
    if ( v11 == -1073741772 )
      return (unsigned int)-1073741275;
    if ( v11 < 0 )
      return (unsigned int)v13;
    v14 = PnpCtxRegDeleteValue(v12, 0LL, a3);
    ZwClose(0LL);
    if ( v14 == -1073741772 || v14 == -1073741444 )
      return (unsigned int)-1073741275;
    if ( v14 < 0 )
      return (unsigned int)v14;
  }
  return (unsigned int)v13;
}

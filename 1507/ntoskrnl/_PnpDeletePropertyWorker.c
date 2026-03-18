/*
 * XREFs of _PnpDeletePropertyWorker @ 0x140563ED4
 * Callers:
 *     _PnpSetGenericStoreProperty @ 0x140557FEC (_PnpSetGenericStoreProperty.c)
 *     DrvDbDeleteObjectSubKey @ 0x14071A84C (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14001988C (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x14043E2E0 (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegDeleteValue @ 0x140564078 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall PnpDeletePropertyWorker(
        __int64 *a1,
        char *a2,
        const wchar_t *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  int v10; // eax
  __int64 v11; // rcx
  NTSTATUS v12; // ebx
  int v13; // edi
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-130h]
  HANDLE Handle; // [rsp+90h] [rbp-C8h] BYREF
  size_t pcchLength; // [rsp+98h] [rbp-C0h] BYREF
  wchar_t pszDest[48]; // [rsp+A0h] [rbp-B8h] BYREF

  Handle = 0LL;
  if ( a5 || a7 )
    return (unsigned int)-1073741811;
  if ( !a3 || (v12 = RtlUnalignedStringCchLengthW(a3, 0x55uLL, &pcchLength), v12 >= 0) )
  {
    if ( RtlStringCchPrintfExW(
           pszDest,
           0x30uLL,
           0LL,
           0LL,
           0x800u,
           L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX") < 0 )
      return (unsigned int)-1073741595;
    v10 = PnpOpenPropertiesKey(a1, a2, pszDest, 6u, 0, (__int64)pszFormat, &Handle);
    v12 = v10;
    if ( v10 == -1073741772 )
      return (unsigned int)-1073741275;
    if ( v10 < 0 )
      return (unsigned int)v12;
    v13 = PnpCtxRegDeleteValue(v11, Handle, a3);
    ZwClose(Handle);
    if ( v13 == -1073741772 || v13 == -1073741444 )
      return (unsigned int)-1073741275;
    if ( v13 < 0 )
      return (unsigned int)v13;
  }
  return (unsigned int)v12;
}

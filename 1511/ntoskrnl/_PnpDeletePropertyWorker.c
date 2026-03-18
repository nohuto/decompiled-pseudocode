/*
 * XREFs of _PnpDeletePropertyWorker @ 0x1404EBCF8
 * Callers:
 *     _PnpSetGenericStoreProperty @ 0x14045CC44 (_PnpSetGenericStoreProperty.c)
 *     DrvDbDeleteObjectSubKey @ 0x14069A88C (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14008FA28 (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x14008FB80 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x14043F144 (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegDeleteValue @ 0x1404EBE98 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall PnpDeletePropertyWorker(
        __int64 *a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  int v10; // eax
  __int64 v11; // rcx
  NTSTATUS v12; // ebx
  int v14; // edi
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
    v14 = PnpCtxRegDeleteValue(v11, Handle, a3);
    ZwClose(Handle);
    if ( v14 == -1073741772 || v14 == -1073741444 )
    {
      return (unsigned int)-1073741275;
    }
    else if ( v14 < 0 )
    {
      return (unsigned int)v14;
    }
  }
  return (unsigned int)v12;
}

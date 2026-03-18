/*
 * XREFs of UsbhPropagateUxdState @ 0x1C0056ED0
 * Callers:
 *     UsbhQueryParentHubConfig @ 0x1C002615C (UsbhQueryParentHubConfig.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0006BC0 (RtlStringCbPrintfW.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     UsbhOpenUxdPortHandle @ 0x1C0056DF8 (UsbhOpenUxdPortHandle.c)
 */

__int64 __fastcall UsbhPropagateUxdState(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  unsigned int i; // edi
  PCWSTR Path; // [rsp+30h] [rbp-48h] BYREF
  wchar_t pszDest[16]; // [rsp+38h] [rbp-40h] BYREF

  Path = 0LL;
  wcscpy(pszDest, L"uxd_port_nnn");
  result = UsbhOpenUxdPortHandle(a1, (void **)&Path, a3, a4);
  v10 = result;
  if ( (int)result >= 0 )
  {
    for ( i = 1; i <= *((unsigned __int8 *)FdoExt(a1, v7, v8, v9) + 2938); ++i )
    {
      RtlStringCbPrintfW(pszDest, 0x1AuLL, L"uxd_port_%3.3d", i);
      v10 = RtlWriteRegistryValue(0x40000000u, Path, pszDest, 3u, a2, 0x44u);
    }
    ZwClose((HANDLE)Path);
    return v10;
  }
  return result;
}

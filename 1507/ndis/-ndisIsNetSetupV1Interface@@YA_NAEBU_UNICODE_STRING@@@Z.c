/*
 * XREFs of ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C00AF3E4
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00AEEAC (ndisPnPAddDevice.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001D6A4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00A55D4 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 */

bool __fastcall ndisIsNetSetupV1Interface(const struct _UNICODE_STRING *a1)
{
  bool v2; // bl
  HANDLE Handle; // [rsp+20h] [rbp-228h] BYREF
  HANDLE v5; // [rsp+28h] [rbp-220h] BYREF
  wchar_t Dest[256]; // [rsp+30h] [rbp-218h] BYREF

  if ( (int)RtlStringCchPrintfW(
              Dest,
              256LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup\\Interfaces\\%wZ",
              a1) < 0 )
    return 0;
  Handle = 0LL;
  if ( (int)KRegKey::Open((KRegKey *)&Handle, 1u, Dest, 0LL) < 0
    || (int)RtlStringCchPrintfW(
              Dest,
              256LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Interfaces\\%wZ",
              a1) < 0 )
  {
    v2 = 0;
  }
  else
  {
    v5 = 0LL;
    v2 = (unsigned int)KRegKey::Open((KRegKey *)&v5, 1u, Dest, 0LL) == -1073741772;
    if ( v5 )
      ZwClose(v5);
  }
  if ( Handle )
    ZwClose(Handle);
  return v2;
}

/*
 * XREFs of ?IsOobeDone@MagnifierTarget@@SAKXZ @ 0x180081F80
 * Callers:
 *     ?Initialize@MagnifierTarget@@IEAAJXZ @ 0x180081A7C (-Initialize@MagnifierTarget@@IEAAJXZ.c)
 *     ?OnTouchInfo@MagnifierTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x180082090 (-OnTouchInfo@MagnifierTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 *     ?MagnifierOobeConfirmCallback@MagnifierTarget@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800823D0 (-MagnifierOobeConfirmCallback@MagnifierTarget@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK.c)
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 MagnifierTarget::IsOobeDone(void)
{
  unsigned int v0; // ebx
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  DWORD Type; // [rsp+34h] [rbp-CCh] BYREF
  BYTE Data[8]; // [rsp+38h] [rbp-C8h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR SubKey[264]; // [rsp+50h] [rbp-B0h] BYREF

  wcscpy(SubKey, L"Software\\Microsoft\\Shell\\OOBE");
  v0 = 0;
  memset(&SubKey[30], 0, 0x1CCuLL);
  RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 1u, &hKey);
  if ( hKey )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"Done", 0LL, &Type, Data, &cbData) && Type == 4 )
      return *(unsigned int *)Data;
  }
  return v0;
}

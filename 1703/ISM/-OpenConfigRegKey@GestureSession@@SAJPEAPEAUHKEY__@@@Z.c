/*
 * XREFs of ?OpenConfigRegKey@GestureSession@@SAJPEAPEAUHKEY__@@@Z @ 0x180036D6C
 * Callers:
 *     ?RefreshMotionValues@GestureSession@@SAJXZ @ 0x180037180 (-RefreshMotionValues@GestureSession@@SAJXZ.c)
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x18003A698 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 * Callees:
 *     ?RefreshScreenSize@GestureSession@@SAJXZ @ 0x180036F1C (-RefreshScreenSize@GestureSession@@SAJXZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall GestureSession::OpenConfigRegKey(PHKEY phkResult)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  WCHAR SubKey[264]; // [rsp+30h] [rbp-D0h] BYREF

  if ( GestureSession::s_refreshScreenSize )
  {
    result = GestureSession::RefreshScreenSize();
    if ( (int)result < 0 )
      return result;
    GestureSession::s_refreshScreenSize = 0;
  }
  wcscpy(SubKey, L"Software\\Microsoft\\Shell\\Input");
  memset(&SubKey[31], 0, 0x1CAuLL);
  _o_wcscat_s(SubKey, 260LL, L"\\");
  v3 = -1LL;
  v4 = -1LL;
  do
    ++v4;
  while ( SubKey[v4] );
  _o__itow_s((unsigned int)GestureSession::s_horizontalResolution, &SubKey[v4], 260 - v4, 10LL);
  _o_wcscat_s(SubKey, 260LL, L"x");
  do
    ++v3;
  while ( SubKey[v3] );
  _o__itow_s((unsigned int)GestureSession::s_verticalResolution, &SubKey[v3], 260 - v3, 10LL);
  RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 1u, phkResult);
  if ( !*phkResult )
    RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Shell\\Input", 0, 1u, phkResult);
  return 0LL;
}

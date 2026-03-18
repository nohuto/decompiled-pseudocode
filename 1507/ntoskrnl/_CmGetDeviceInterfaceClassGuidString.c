/*
 * XREFs of _CmGetDeviceInterfaceClassGuidString @ 0x14043F264
 * Callers:
 *     _CmGetDeviceInterfaceClassGuid @ 0x14043F2AC (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x14058B644 (_CmCreateDeviceInterfaceWorker.c)
 * Callees:
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14043D720 (_CmGetDeviceInterfaceSubkeyPath.c)
 */

int __fastcall CmGetDeviceInterfaceClassGuidString(__int64 a1, const wchar_t *a2, wchar_t *a3)
{
  int result; // eax

  result = CmGetDeviceInterfaceSubkeyPath(a1, a2, 1, a3, 0LL, 0);
  if ( !result )
    return -1073741595;
  if ( result == -1073741789 )
  {
    a3[38] = 0;
    return 0;
  }
  return result;
}

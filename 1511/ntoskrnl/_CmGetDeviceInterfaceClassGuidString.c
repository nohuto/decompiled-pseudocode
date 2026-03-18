/*
 * XREFs of _CmGetDeviceInterfaceClassGuidString @ 0x140441D28
 * Callers:
 *     _CmGetDeviceInterfaceClassGuid @ 0x140441CC0 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140517AF0 (_CmCreateDeviceInterfaceWorker.c)
 * Callees:
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14043E634 (_CmGetDeviceInterfaceSubkeyPath.c)
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

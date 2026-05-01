/*
 * XREFs of ?GetAvailableMBCommit@Internal@ExecutionModel@@YAKXZ @ 0x180024DDC
 * Callers:
 *     ?RpsGetDeviceTierName@@YAJPEAGPEAI@Z @ 0x180025EEC (-RpsGetDeviceTierName@@YAJPEAGPEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

DWORDLONG __fastcall ExecutionModel::Internal::GetAvailableMBCommit(ExecutionModel::Internal *this)
{
  struct _MEMORYSTATUSEX Buffer; // [rsp+20h] [rbp-58h] BYREF

  memset_0(&Buffer.dwMemoryLoad, 0, 0x3CuLL);
  Buffer.dwLength = 64;
  GlobalMemoryStatusEx(&Buffer);
  return Buffer.ullTotalPhys >> 20;
}

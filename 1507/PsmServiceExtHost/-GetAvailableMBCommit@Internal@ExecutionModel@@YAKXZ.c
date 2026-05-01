/*
 * XREFs of ?GetAvailableMBCommit@Internal@ExecutionModel@@YAKXZ @ 0x1800223B4
 * Callers:
 *     ?RpsGetDeviceTierName@@YAJPEAGPEAI@Z @ 0x180022070 (-RpsGetDeviceTierName@@YAJPEAGPEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

DWORDLONG __fastcall ExecutionModel::Internal::GetAvailableMBCommit(ExecutionModel::Internal *this)
{
  struct _MEMORYSTATUSEX Buffer; // [rsp+20h] [rbp-58h] BYREF

  memset_0(&Buffer.dwMemoryLoad, 0, 0x3CuLL);
  Buffer.dwLength = 64;
  GlobalMemoryStatusEx(&Buffer);
  return Buffer.ullTotalPhys >> 20;
}

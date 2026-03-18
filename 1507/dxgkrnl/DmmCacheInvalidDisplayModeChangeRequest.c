/*
 * XREFs of DmmCacheInvalidDisplayModeChangeRequest @ 0x1C017546C
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C00B96F0 (DxgkSetDisplayMode.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     DmmCacheDisplayModeChangeRequest @ 0x1C00B8C08 (DmmCacheDisplayModeChangeRequest.c)
 */

__int64 __fastcall DmmCacheInvalidDisplayModeChangeRequest(
        DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  _DWORD v6[14]; // [rsp+40h] [rbp-38h] BYREF

  memset(v6, 0, 44);
  return DmmCacheDisplayModeChangeRequest(a1, a2, (__int64)v6, 2u, a5, 3, 0LL);
}

/*
 * XREFs of DmmCacheInvalidDisplayModeChangeRequest @ 0x1C01A3488
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0071D40 (DxgkSetDisplayMode.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     DmmCacheDisplayModeChangeRequest @ 0x1C00C5F78 (DmmCacheDisplayModeChangeRequest.c)
 */

__int64 __fastcall DmmCacheInvalidDisplayModeChangeRequest(
        DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  _BYTE v8[56]; // [rsp+40h] [rbp-38h] BYREF

  memset(v8, 0, 0x2CuLL);
  return DmmCacheDisplayModeChangeRequest(a1, a2, (__int64)v8, 2u, a5, 3, 0LL);
}

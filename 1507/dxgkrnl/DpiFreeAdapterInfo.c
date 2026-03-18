/*
 * XREFs of DpiFreeAdapterInfo @ 0x1C00B431C
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00B40C4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiGetAdapterInfo @ 0x1C00BAC70 (DpiGetAdapterInfo.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0123780 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DxgkFreeUnicodeString @ 0x1C00B4374 (DxgkFreeUnicodeString.c)
 */

__int64 __fastcall DpiFreeAdapterInfo(__int64 a1)
{
  DxgkFreeUnicodeString(a1);
  DxgkFreeUnicodeString(a1 + 16);
  DxgkFreeUnicodeString(a1 + 104);
  DxgkFreeUnicodeString(a1 + 120);
  DxgkFreeUnicodeString(a1 + 40);
  DxgkFreeUnicodeString(a1 + 64);
  DxgkFreeUnicodeString(a1 + 136);
  return DxgkFreeUnicodeString(a1 + 152);
}

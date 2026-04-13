/*
 * XREFs of sub_1800067B0 @ 0x1800067B0
 * Callers:
 *     sub_180008220 @ 0x180008220 (sub_180008220.c)
 *     sub_180008380 @ 0x180008380 (sub_180008380.c)
 *     sub_1800084F0 @ 0x1800084F0 (sub_1800084F0.c)
 *     sub_1800085D0 @ 0x1800085D0 (sub_1800085D0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_1800067B0(__int64 a1, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.ContentManagementService", 0x2Au, a2);
}

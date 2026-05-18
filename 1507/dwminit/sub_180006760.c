/*
 * XREFs of sub_180006760 @ 0x180006760
 * Callers:
 *     sub_180006740 @ 0x180006740 (sub_180006740.c)
 *     sub_180006880 @ 0x180006880 (sub_180006880.c)
 *     sub_1800068A0 @ 0x1800068A0 (sub_1800068A0.c)
 *     sub_1800068C0 @ 0x1800068C0 (sub_1800068C0.c)
 * Callees:
 *     sub_180006350 @ 0x180006350 (sub_180006350.c)
 */

__int64 __fastcall sub_180006760(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180006350((__int64)&dword_18000A298, v4);
  return v5(a1, a2, a3, a4);
}

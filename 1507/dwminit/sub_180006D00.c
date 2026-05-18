/*
 * XREFs of sub_180006D00 @ 0x180006D00
 * Callers:
 *     sub_180006CE0 @ 0x180006CE0 (sub_180006CE0.c)
 * Callees:
 *     sub_180006350 @ 0x180006350 (sub_180006350.c)
 */

__int64 __fastcall sub_180006D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180006350((__int64)&dword_18000A358, v4);
  return v5(a1, a2, a3, a4);
}

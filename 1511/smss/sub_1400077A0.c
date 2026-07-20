/*
 * XREFs of sub_1400077A0 @ 0x1400077A0
 * Callers:
 *     sub_1400064F8 @ 0x1400064F8 (sub_1400064F8.c)
 * Callees:
 *     sub_1400077E8 @ 0x1400077E8 (sub_1400077E8.c)
 */

__int64 __fastcall sub_1400077A0(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ecx
  int v4; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v5; // [rsp+28h] [rbp-10h]
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v4 = 2228256;
  v5 = L"CrashDumpEnabled";
  v1 = ((__int64 (__fastcall *)(__int64, int *, __int64, unsigned int *))sub_1400077E8)(a1, &v4, 4LL, &v6);
  v2 = v6;
  if ( v1 < 0 )
    return 4;
  return v2;
}

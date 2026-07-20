/*
 * XREFs of sub_140007750 @ 0x140007750
 * Callers:
 *     sub_1400064F8 @ 0x1400064F8 (sub_1400064F8.c)
 * Callees:
 *     sub_1400077E8 @ 0x1400077E8 (sub_1400077E8.c)
 */

bool __fastcall sub_140007750(__int64 a1)
{
  char v1; // bl
  int v3; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v3 = 1572886;
  v4 = L"FilterPages";
  v1 = 0;
  if ( (int)((__int64 (__fastcall *)(__int64, int *, _QWORD, int *))sub_1400077E8)(a1, &v3, 0LL, &v5) >= 0 )
    return v5 != 0;
  return v1;
}

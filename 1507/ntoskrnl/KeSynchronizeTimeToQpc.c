/*
 * XREFs of KeSynchronizeTimeToQpc @ 0x14014CA10
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateTimeAssist @ 0x1400A3B90 (KiUpdateTimeAssist.c)
 */

__int64 __fastcall KeSynchronizeTimeToQpc(LARGE_INTEGER a1)
{
  LARGE_INTEGER v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  return KiUpdateTimeAssist(&v2, (__int64)&v3, (__int64)&v3);
}

/*
 * XREFs of CmpCreateTemporaryHive @ 0x1405EA420
 * Callers:
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 *     CmSaveKey @ 0x1405E9ED0 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1405EA0F8 (CmSaveMergedKeys.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 */

ULONG_PTR __fastcall CmpCreateTemporaryHive(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  ULONG_PTR v5[2]; // [rsp+60h] [rbp-188h] BYREF
  ULONG_PTR v6[44]; // [rsp+70h] [rbp-178h] BYREF

  v3 = 0LL;
  memset(v6, 0, sizeof(v6));
  if ( (int)CmpInitializeHive(v5, 0, 1, 0, 0LL, 0LL, 0LL, 0x1000000, a2, a3, 0LL, v6) >= 0 )
    return v5[0];
  return v3;
}

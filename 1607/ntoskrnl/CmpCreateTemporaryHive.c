/*
 * XREFs of CmpCreateTemporaryHive @ 0x14060D1EC
 * Callers:
 *     CmpReorganizeHive @ 0x14047FA2C (CmpReorganizeHive.c)
 *     CmSaveKey @ 0x14060CC1C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14060CE74 (CmSaveMergedKeys.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     CmpInitializeHive @ 0x14047F184 (CmpInitializeHive.c)
 */

ULONG_PTR __fastcall CmpCreateTemporaryHive(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  ULONG_PTR v7[2]; // [rsp+60h] [rbp-188h] BYREF
  ULONG_PTR v8[44]; // [rsp+70h] [rbp-178h] BYREF

  memset(v8, 0, sizeof(v8));
  v5 = 0LL;
  if ( (int)CmpInitializeHive(v7, 0, 1, 0, 0LL, 0LL, 0LL, 16908288, a2, a3, 0LL, v8) >= 0 )
    return v7[0];
  return v5;
}

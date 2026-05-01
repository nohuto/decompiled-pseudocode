/*
 * XREFs of __tailMerge_CRYPTSP_dll @ 0x180024A60
 * Callers:
 *     __imp_load_CryptDestroyHash @ 0x180024A40 (__imp_load_CryptDestroyHash.c)
 *     __imp_load_CryptReleaseContext @ 0x180024AE0 (__imp_load_CryptReleaseContext.c)
 *     __imp_load_CryptAcquireContextW @ 0x180024B00 (__imp_load_CryptAcquireContextW.c)
 *     __imp_load_CryptCreateHash @ 0x180024B20 (__imp_load_CryptCreateHash.c)
 *     __imp_load_CryptHashData @ 0x180024B40 (__imp_load_CryptHashData.c)
 *     __imp_load_CryptGetHashParam @ 0x180024B60 (__imp_load_CryptGetHashParam.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180023C50 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_CRYPTSP_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_CRYPTSP_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}

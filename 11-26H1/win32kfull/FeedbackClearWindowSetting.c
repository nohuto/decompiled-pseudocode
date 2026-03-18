/*
 * XREFs of FeedbackClearWindowSetting @ 0x140288980
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x14000F930 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 *     _anonymous_namespace_::GetStore @ 0x140206F94 (_anonymous_namespace_--GetStore.c)
 */

__int64 __fastcall FeedbackClearWindowSetting(__int64 a1, char a2)
{
  __m128i v3; // xmm6
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 UserSessionState; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(__m128i *)anonymous_namespace_::GetStore(&v9, a1);
  v4 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v3, 8));
  v5 = (unsigned int)v4 & ~(65537 << a2);
  UserSessionState = W32GetUserSessionState(v4, v6);
  InternalSetProp(v3.m128i_i64[0], *(unsigned __int16 *)(UserSessionState + 41390), v5, 5u);
  return 1LL;
}

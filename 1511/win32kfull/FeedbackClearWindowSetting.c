/*
 * XREFs of FeedbackClearWindowSetting @ 0x1C01DBDD8
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x1C0079150 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     ?Save@Feedback@@YAXAEBUtagSTORE@1@@Z @ 0x1C00790BC (-Save@Feedback@@YAXAEBUtagSTORE@1@@Z.c)
 */

__int64 __fastcall FeedbackClearWindowSetting(__int64 a1)
{
  int Prop; // eax
  char v2; // r10
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v5; // [rsp+28h] [rbp-10h]

  v4 = a1;
  Prop = GetProp(a1, (unsigned __int16)gatomFeedbackSettings, 1LL);
  v5 = Prop & ~(65537 << v2);
  Feedback::Save((Feedback *)&v4, (const struct Feedback::tagSTORE *)v5);
  return 1LL;
}

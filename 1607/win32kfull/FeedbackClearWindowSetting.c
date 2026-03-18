/*
 * XREFs of FeedbackClearWindowSetting @ 0x1C01D37D8
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x1C00A7670 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     ?Save@Feedback@@YAXAEBUtagSTORE@1@@Z @ 0x1C00A7810 (-Save@Feedback@@YAXAEBUtagSTORE@1@@Z.c)
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

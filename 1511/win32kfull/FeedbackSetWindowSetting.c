/*
 * XREFs of FeedbackSetWindowSetting @ 0x1C00790D8
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x1C0079150 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     ?Save@Feedback@@YAXAEBUtagSTORE@1@@Z @ 0x1C00790BC (-Save@Feedback@@YAXAEBUtagSTORE@1@@Z.c)
 */

__int64 __fastcall FeedbackSetWindowSetting(__int64 a1)
{
  int v1; // r8d
  char v2; // r10
  int v3; // r8d
  const struct Feedback::tagSTORE *v4; // rdx
  int v5; // r11d
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int Prop; // [rsp+28h] [rbp-10h]

  v7 = a1;
  Prop = GetProp(a1, (unsigned __int16)gatomFeedbackSettings, 1LL);
  v3 = v1 << v2;
  v4 = (const struct Feedback::tagSTORE *)(~v3 & (Prop | (unsigned int)(0x10000 << v2)));
  Prop = ~v3 & (Prop | (0x10000 << v2));
  if ( v5 )
  {
    v4 = (const struct Feedback::tagSTORE *)(v3 | (unsigned int)v4);
    Prop = (int)v4;
  }
  Feedback::Save((Feedback *)&v7, v4);
  return 1LL;
}

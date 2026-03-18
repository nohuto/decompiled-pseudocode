/*
 * XREFs of ?Save@Feedback@@YAXAEBUtagSTORE@1@@Z @ 0x1C00A7810
 * Callers:
 *     FeedbackSetWindowSetting @ 0x1C00A77A4 (FeedbackSetWindowSetting.c)
 *     FeedbackClearWindowSetting @ 0x1C01D37D8 (FeedbackClearWindowSetting.c)
 * Callees:
 *     <none>
 */

void __fastcall Feedback::Save(Feedback *this, const struct Feedback::tagSTORE *a2)
{
  InternalSetProp(*(_QWORD *)this, (unsigned __int16)gatomFeedbackSettings, *((unsigned int *)this + 2), 5LL);
}

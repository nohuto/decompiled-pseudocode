/*
 * XREFs of BgkResumeFinished @ 0x1403EC37C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14014FED8 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x140564AB8 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x14075C000 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14075C764 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !Address )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  Address = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_1403538D0 = 0;
  return result;
}

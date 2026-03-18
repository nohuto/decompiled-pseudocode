/*
 * XREFs of BgkResumeFinished @ 0x14039DEA4
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14011BC4C (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x1404F59D4 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x1406D91C4 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1406D9748 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !Address )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  Address = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140305B50 = 0;
  return result;
}

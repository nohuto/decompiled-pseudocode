/*
 * XREFs of BgkResumeFinished @ 0x1403C9590
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1401273D8 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x14052EF94 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x140725010 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14072572C (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !Address )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  Address = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_1403289E0 = 0;
  return result;
}

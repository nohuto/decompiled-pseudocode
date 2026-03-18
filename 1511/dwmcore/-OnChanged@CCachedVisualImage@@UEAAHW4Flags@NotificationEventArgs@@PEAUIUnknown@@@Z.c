/*
 * XREFs of ?OnChanged@CCachedVisualImage@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18005AC50
 * Callers:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x18005B308 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::OnChanged(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*(_BYTE *)(a1 + 264) )
  {
    CCachedVisualImage::MarkAllTargetsDirty((CCachedVisualImage *)(a1 - 16));
    return 1LL;
  }
  return result;
}

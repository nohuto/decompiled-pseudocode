/*
 * XREFs of ?OnChanged@CCachedVisualImage@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800330F0
 * Callers:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x180033798 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::OnChanged(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*(_BYTE *)(a1 + 352) )
  {
    CCachedVisualImage::MarkAllTargetsDirty((CCachedVisualImage *)(a1 - 16));
    return 1LL;
  }
  return result;
}

/*
 * XREFs of ?OnChanged@CGeometry@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002C9B0
 * Callers:
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E180 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGeometry::OnChanged(__int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  *(_DWORD *)(a1 + 32) |= 1u;
  return result;
}

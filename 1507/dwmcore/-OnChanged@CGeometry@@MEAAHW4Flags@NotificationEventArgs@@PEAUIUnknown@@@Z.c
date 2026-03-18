/*
 * XREFs of ?OnChanged@CGeometry@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800177F0
 * Callers:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
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

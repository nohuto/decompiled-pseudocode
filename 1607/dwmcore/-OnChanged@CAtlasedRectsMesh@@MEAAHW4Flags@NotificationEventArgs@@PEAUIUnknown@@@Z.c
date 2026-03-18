/*
 * XREFs of ?OnChanged@CAtlasedRectsMesh@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009CB10
 * Callers:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x18009BCE4 (-FreeCaches@CAtlasedRects@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRectsMesh::OnChanged(CAtlasedRects *a1)
{
  *((_DWORD *)a1 + 48) |= 1u;
  CAtlasedRects::FreeCaches(a1);
  return 1LL;
}

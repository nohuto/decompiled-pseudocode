/*
 * XREFs of ?OnChanged@CAtlasedRectsMesh@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18006F470
 * Callers:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x180070308 (-FreeCaches@CAtlasedRects@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRectsMesh::OnChanged(CAtlasedRects *a1)
{
  *((_DWORD *)a1 + 30) |= 1u;
  CAtlasedRects::FreeCaches(a1);
  return 1LL;
}

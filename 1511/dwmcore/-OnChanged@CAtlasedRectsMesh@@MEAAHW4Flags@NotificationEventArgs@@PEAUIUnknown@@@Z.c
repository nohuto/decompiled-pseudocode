/*
 * XREFs of ?OnChanged@CAtlasedRectsMesh@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180026D40
 * Callers:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x1800254D4 (-FreeCaches@CAtlasedRects@@AEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRectsMesh::OnChanged(__int64 a1)
{
  *(_DWORD *)(a1 + 120) |= 1u;
  CAtlasedRects::FreeCaches((void **)a1);
  return 1LL;
}

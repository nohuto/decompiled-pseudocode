/*
 * XREFs of ?OnChanged@CGeometry2DGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180133420
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x180133440 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

__int64 __fastcall CGeometry2DGroup::OnChanged(CGeometry2D *a1)
{
  *((_DWORD *)a1 + 34) |= 0xFu;
  CGeometry2D::FreeCaches(a1);
  return 1LL;
}

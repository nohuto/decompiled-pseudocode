/*
 * XREFs of ?OnChanged@CGeometry2DGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18011C7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x18011C7F0 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

__int64 __fastcall CGeometry2DGroup::OnChanged(CGeometry2D *a1)
{
  *((_DWORD *)a1 + 34) |= 0xFu;
  CGeometry2D::FreeCaches(a1);
  return 1LL;
}

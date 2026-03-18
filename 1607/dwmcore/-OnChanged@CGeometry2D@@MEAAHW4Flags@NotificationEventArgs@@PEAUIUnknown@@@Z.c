/*
 * XREFs of ?OnChanged@CGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180155C10
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x180155BC0 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

__int64 __fastcall CGeometry2D::OnChanged(CGeometry2D *a1)
{
  CGeometry2D::FreeCaches(a1);
  return 1LL;
}

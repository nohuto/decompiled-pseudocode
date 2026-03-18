/*
 * XREFs of ?NotifyListenerOfChange@CComponentTransform2D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800207A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __fastcall CComponentTransform2D::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3)
{
  return CResource::NotifyOnChanged(a2, a3, a1);
}

/*
 * XREFs of ?NotifyListenerOfChange@CSurfaceBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180122350
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSurfaceBrush::NotifyListenerOfChange(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        CCompositionSurfaceBitmap *a4)
{
  unsigned int v6; // edx

  if ( a3 == 6 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    CResource::NotifyOnChanged((_DWORD *)a1, 5u, 0LL);
    v6 = 0;
  }
  else
  {
    v6 = a3;
  }
  return CResource::NotifyOnChanged(a2, v6, a4);
}

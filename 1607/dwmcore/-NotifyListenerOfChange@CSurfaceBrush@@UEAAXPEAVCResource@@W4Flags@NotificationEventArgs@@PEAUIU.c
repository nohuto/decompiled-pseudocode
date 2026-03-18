/*
 * XREFs of ?NotifyListenerOfChange@CSurfaceBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18013AC20
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSurfaceBrush::NotifyListenerOfChange(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        void (__fastcall ***a4)(void *, GUID *, __int64 *))
{
  void (__fastcall ***v7)(void *, GUID *, __int64 *); // r8
  unsigned int v8; // edx

  if ( a3 == 6 || a4 == *(void (__fastcall ****)(void *, GUID *, __int64 *))(a1 + 168) )
  {
    CResource::NotifyOnChanged(a2, 0, a4);
    *(_QWORD *)(a1 + 112) = 0LL;
    v7 = 0LL;
    v8 = 5;
  }
  else
  {
    v7 = a4;
    v8 = a3;
  }
  return CResource::NotifyOnChanged(a2, v8, v7);
}

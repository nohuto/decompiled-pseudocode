/*
 * XREFs of ?NotifyListenerOfChange@CPrimitive@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801175F0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CPrimitive::NotifyListenerOfChange(__int64 a1, _DWORD *a2, unsigned int a3, CPrimitiveGroup *a4)
{
  bool v6; // zf
  CPrimitiveGroup *v8; // r8
  unsigned int v9; // edx

  v6 = a3 == 6;
  v8 = a4;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    CResource::NotifyOnChanged(a2, 5u, a4);
    v8 = a4;
    v9 = 0;
  }
  else
  {
    v9 = a3;
  }
  return CResource::NotifyOnChanged(a2, v9, v8);
}

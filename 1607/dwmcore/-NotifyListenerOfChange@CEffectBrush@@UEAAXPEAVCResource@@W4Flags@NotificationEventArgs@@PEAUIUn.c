/*
 * XREFs of ?NotifyListenerOfChange@CEffectBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18013C3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::NotifyListenerOfChange(__int64 a1, _DWORD *a2, unsigned int a3)
{
  if ( a3 == 1
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 136) + 128LL) + 56LL))(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 128LL)) > 1 )
  {
    *(_QWORD *)(a1 + 112) = 0LL;
    CResource::NotifyOnChanged(a2, a3 + 4, 0LL);
  }
  return CResource::NotifyOnChanged(a2, a3, (void (__fastcall ***)(void *, GUID *, __int64 *))a1);
}

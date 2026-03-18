/*
 * XREFs of ?BreakLinksForCycles@CCyclicResourceListEntry@@UEAAXXZ @ 0x180021A40
 * Callers:
 *     ?BreakLinksForCycles@CTransformGroup@@MEAAXXZ @ 0x1800219E0 (-BreakLinksForCycles@CTransformGroup@@MEAAXXZ.c)
 *     ?BreakLinksForCycles@CTransform3DGroup@@MEAAXXZ @ 0x180157B20 (-BreakLinksForCycles@CTransform3DGroup@@MEAAXXZ.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCyclicResourceListEntry::BreakLinksForCycles(CCyclicResourceListEntry *this)
{
  __int64 v1; // rbx

  v1 = (**(__int64 (__fastcall ***)(CCyclicResourceListEntry *))this)(this);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1);
  CResource::NotifyOnChanged(v1, 0LL, 0LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}

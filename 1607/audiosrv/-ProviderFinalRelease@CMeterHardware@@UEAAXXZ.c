/*
 * XREFs of ?ProviderFinalRelease@CMeterHardware@@UEAAXXZ @ 0x180055710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x18004FFB4 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CMeterHardware::ProviderFinalRelease(CMeterHardware *this)
{
  __int64 v2; // rcx

  ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 5);
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}

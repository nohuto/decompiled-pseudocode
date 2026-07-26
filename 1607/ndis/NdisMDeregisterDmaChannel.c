/*
 * XREFs of NdisMDeregisterDmaChannel @ 0x1C00F4B50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ndisDereferenceDmaAdapter @ 0x1C005F880 (ndisDereferenceDmaAdapter.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 */

void __stdcall NdisMDeregisterDmaChannel(NDIS_HANDLE MiniportDmaHandle)
{
  __int64 v1; // rdi
  KIRQL v3; // si

  v1 = *((_QWORD *)MiniportDmaHandle + 5);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x27u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids);
  ndisReferencePackage((__int64)&ndisPkgs);
  v3 = KfRaiseIrql(2u);
  (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)MiniportDmaHandle + 4) + 8LL) + 48LL))();
  if ( v3 != 2 )
    KeLowerIrql(v3);
  ndisDereferenceDmaAdapter(*(PVOID *)(v1 + 504));
  ndisDereferencePackage((__int64)&ndisPkgs);
  ExFreePoolWithTag(MiniportDmaHandle, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x28u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids);
}

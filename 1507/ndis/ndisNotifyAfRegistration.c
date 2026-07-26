/*
 * XREFs of ndisNotifyAfRegistration @ 0x1C00F3430
 * Callers:
 *     ndisMFinishQueuedPendingOpen @ 0x1C00F4650 (ndisMFinishQueuedPendingOpen.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0003024 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisDereferenceAfNotification @ 0x1C004CAE4 (ndisDereferenceAfNotification.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 */

void __fastcall ndisNotifyAfRegistration(_QWORD *P)
{
  __int64 v1; // rsi
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // rbp

  v1 = P[5];
  v2 = P;
  if ( (unsigned __int8)byte_1C008531A >= 4u )
    WPP_SF_q(0x10u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, v1);
  ndisReferencePackage((__int64)&ndisPkgs);
  do
  {
    v3 = v2[6];
    v4 = (_QWORD *)*v2;
    if ( (*(_DWORD *)(v3 + 224) & 0x18000) == 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v3 + 24) + 200LL))(*(_QWORD *)(v3 + 32), v2 + 7);
    ExFreePoolWithTag(v2, 0);
    ndisDereferenceAfNotification(v3);
    ndisMDereferenceOpenUnlocked(v3);
    v2 = v4;
  }
  while ( v4 );
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C008531A >= 4u )
    WPP_SF_q(0x11u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, v1);
}

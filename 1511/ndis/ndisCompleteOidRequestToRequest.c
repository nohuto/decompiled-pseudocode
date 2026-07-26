/*
 * XREFs of ndisCompleteOidRequestToRequest @ 0x1C0041380
 * Callers:
 *     ndisLegacyRequest @ 0x1C0041EA0 (ndisLegacyRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisCompleteOidRequestToRequest(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v3; // rdi
  unsigned int v4; // esi
  bool v6; // zf
  KIRQL v7; // bl

  v3 = *(_DWORD **)(a2 + 96);
  v4 = a3;
  v6 = v3[8] == 1;
  v3[15] = *(_DWORD *)(a2 + 52);
  v3[16] = *(_DWORD *)(a2 + 56);
  if ( v6 && a3 == -1071448017 )
    v4 = 0;
  ExFreePoolWithTag((PVOID)a2, 0);
  v7 = KfRaiseIrql(2u);
  (*(void (__fastcall **)(_QWORD, _DWORD *, _QWORD))(a1 + 152))(*(_QWORD *)(a1 + 32), v3, v4);
  KeLowerIrql(v7);
}

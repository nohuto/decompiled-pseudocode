/*
 * XREFs of ndisCoCompleteOidRequestToRequest @ 0x1C00F9780
 * Callers:
 *     NdisCoRequest @ 0x1C00F8720 (NdisCoRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisCoCompleteOidRequestToRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  _DWORD *v6; // r9
  __int64 v7; // r11

  v6 = *(_DWORD **)(a4 + 96);
  v7 = *(_QWORD *)(a4 + 104);
  if ( v6[8] != 12 )
  {
    v6[15] = *(_DWORD *)(a4 + 52);
    v6[16] = *(_DWORD *)(a4 + 56);
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, _DWORD *))(v7 + 1072))(a5, a1, a2, a3, v6);
  ExFreePoolWithTag((PVOID)a4, 0);
}

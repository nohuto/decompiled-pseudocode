/*
 * XREFs of DpiMiracastDdiMiracastQueryCaps @ 0x1C016918C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     Template_pqqq @ 0x1C001B894 (Template_pqqq.c)
 */

__int64 __fastcall DpiMiracastDdiMiracastQueryCaps(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v5; // edi
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+30h] [rbp-18h]

  v5 = -1073741637;
  if ( *(_QWORD *)(a1 + 1808) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    {
      v14 = 0;
      v12 = 0;
      v10 = 0;
      Template_pqqq(0LL, &EventEnterDxgkDdiMiracastQueryCaps, (__int64)a3, *(_QWORD *)(a1 + 48), v10, v12, v14);
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *))(a1 + 1808))(*(_QWORD *)(a1 + 48), 8LL, a3);
    v5 = v6;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    {
      LODWORD(v13) = v6;
      LODWORD(v11) = a3[1];
      LODWORD(v9) = *a3;
      Template_pqqq(*a3, &EventLeaveDxgkDdiMiracastQueryCaps, v7, *(_QWORD *)(a1 + 48), v9, v11, v13);
    }
  }
  return v5;
}

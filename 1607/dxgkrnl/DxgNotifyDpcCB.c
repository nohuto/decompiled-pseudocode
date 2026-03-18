/*
 * XREFs of DxgNotifyDpcCB @ 0x1C000BFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0028178 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgNotifyDpcCB(__int64 a1)
{
  struct DXGADAPTER *v2; // rdx
  __int64 v3; // rax
  __int64 v5; // rax
  DXGDODPRESENT *v6; // rcx

  if ( KeGetCurrentIrql() != 2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 90LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 64) + 3708LL), 0, 0) & 1) != 0 )
  {
    v2 = *(struct DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3688LL);
    if ( v2 )
    {
      v3 = *((_QWORD *)v2 + 267);
      if ( v3 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v3 + 376) + 8LL) + 16LL))(a1);
      }
      else
      {
        v6 = *(DXGDODPRESENT **)(*((_QWORD *)v2 + 266) + 256LL);
        if ( v6 )
          DXGDODPRESENT::NotifyDpc(v6, v2);
      }
    }
  }
  return DpiProcessMiracastNotifyDpc(a1);
}

/*
 * XREFs of DxgNotifyInterruptCB @ 0x1C000B460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z @ 0x1C00216F4 (-NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z.c)
 *     DpiProcessMiracastNotifyInterrupt @ 0x1C0025DB0 (DpiProcessMiracastNotifyInterrupt.c)
 */

void __fastcall DxgNotifyInterruptCB(__int64 a1, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2)
{
  struct DXGADAPTER *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  DXGDODPRESENT *v7; // rcx

  if ( KeGetCurrentIrql() <= 2u )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v6 + 24) = 37LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( a2->InterruptType == DXGK_INTERRUPT_MICACAST_CHUNK_PROCESSING_COMPLETE )
  {
    DpiProcessMiracastNotifyInterrupt(a1, a2);
  }
  else if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 64) + 2560LL), 0, 0) & 2) != 0 )
  {
    v4 = *(struct DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 2544LL);
    if ( v4 )
    {
      v5 = *((_QWORD *)v4 + 249);
      if ( v5 )
      {
        (*(void (__fastcall **)(__int64, struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *))(*(_QWORD *)(*(_QWORD *)(v5 + 400)
                                                                                               + 8LL)
                                                                                   + 8LL))(
          a1,
          a2);
      }
      else
      {
        v7 = *(DXGDODPRESENT **)(*((_QWORD *)v4 + 248) + 320LL);
        if ( v7 )
          DXGDODPRESENT::NotifyInterrupt(v7, v4, a2);
      }
    }
  }
}

/*
 * XREFs of ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C00C898C
 * Callers:
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C00C84BC (DxgkReleaseAdapterOpmI2CSync.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::ReleaseOpmI2CSync(struct _KTHREAD **this)
{
  DXGFASTMUTEX *v1; // rbx
  __int64 v2; // rax

  v1 = (DXGFASTMUTEX *)(this + 31);
  if ( this[31] != KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 14313LL;
    WdLogEvent5_WdAssertion(v2);
  }
  DXGFASTMUTEX::Release(v1);
}

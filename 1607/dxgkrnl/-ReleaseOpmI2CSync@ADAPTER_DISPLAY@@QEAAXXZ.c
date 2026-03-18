/*
 * XREFs of ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C00DDEA8
 * Callers:
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C00DD5B8 (DxgkReleaseAdapterOpmI2CSync.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::ReleaseOpmI2CSync(struct _KTHREAD **this)
{
  __int64 v2; // rax

  if ( this[26] != KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 3037LL;
    WdLogEvent5_WdAssertion(v2);
  }
  DXGFASTMUTEX::Release(this + 25);
}

/*
 * XREFs of ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C00B3208
 * Callers:
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C00B2C84 (DxgkReleaseAdapterOpmI2CSync.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::ReleaseOpmI2CSync(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  if ( this[26] != KeGetCurrentThread() )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 13947LL;
    WdLogEvent5_WdAssertion(v5);
  }
  DXGFASTMUTEX::Release(this + 25);
}

/*
 * XREFs of ?PushWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXPEAU_ETHREAD@@@Z @ 0x1C0003374
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C009AF4C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z.c)
 *     ?DxgkCddPushWorkerThreadOfOwner@@YAXQEAX0PEAU_ETHREAD@@@Z @ 0x1C00C6A30 (-DxgkCddPushWorkerThreadOfOwner@@YAXQEAX0PEAU_ETHREAD@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGADAPTER::PushWorkerThreadOfExclusiveOwner(PERESOURCE *this, struct _ERESOURCE *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v4 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v4 + 24) = 1935LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( this[19] )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v5[3] = 275LL;
    v5[4] = 17LL;
    v5[5] = this;
    v5[6] = 0LL;
    v5[7] = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  this[19] = this[18];
  this[18] = a2;
}

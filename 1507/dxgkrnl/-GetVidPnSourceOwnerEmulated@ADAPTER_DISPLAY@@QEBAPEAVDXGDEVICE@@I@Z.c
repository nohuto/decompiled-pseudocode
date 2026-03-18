/*
 * XREFs of ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0019400
 * Callers:
 *     ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0127B00 (-QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C01299D0 (DxgkAdjustFullscreenGamma.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

struct DXGDEVICE *__fastcall ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v4 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v4 + 24) = 4024LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
  {
    v5 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v5 + 24) = 4025LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return (struct DXGDEVICE *)*((_QWORD *)this[14] + 126 * v3 + 86);
}

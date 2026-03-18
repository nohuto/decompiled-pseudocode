/*
 * XREFs of ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001ABD8
 * Callers:
 *     ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C012DCD0 (-QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C0130060 (DxgkAdjustFullscreenGamma.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

struct DXGDEVICE *__fastcall ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 4163LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 26) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 4164LL;
    WdLogEvent5_WdAssertion(v6);
  }
  return (struct DXGDEVICE *)*((_QWORD *)this[17] + 127 * v3 + 86);
}

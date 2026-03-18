/*
 * XREFs of ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C0123F00
 * Callers:
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C0123E58 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C0133CB4 (DxgkDestroyClientAllocation.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000AE48 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z @ 0x1C0123D30 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationFromList(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  struct DXGALLOCATION **v9; // r8
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 88) == 1
    && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 7090LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)a2 + 5);
  if ( v8 )
  {
    v9 = (struct DXGALLOCATION **)(v8 + 24);
LABEL_8:
    DXGDEVICE::RemoveAllocationFromList(this, a2, v9);
    return;
  }
  if ( a3 )
  {
    v9 = (struct DXGALLOCATION **)((char *)this + 48);
    goto LABEL_8;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v10, (struct _KTHREAD **)this + 17);
  DXGDEVICE::RemoveAllocationFromList(this, a2, (struct DXGALLOCATION **)this + 6);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
}

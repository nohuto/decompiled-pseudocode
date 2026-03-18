/*
 * XREFs of ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C006E120
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00742C4 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0002258 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGDEVICE::RemovePrimaryAllocation(DXGADAPTER **this, const struct DXGALLOCATION *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  struct DXGALLOCATION *v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  if ( (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 1) == 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 2985LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this[2] + 2)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v9 + 24) = 2986LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v5 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[354]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v10 + 24) = 2990LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( v5 >= *((_DWORD *)this + 710) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v11 + 24) = 2991LL;
    WdLogEvent5_WdAssertion(v11);
  }
  DXGDEVICE::TestAndSetDisplayedPrimary((DXGDEVICE *)this, v5, a2, v7);
  DXGDEVICE::RemovePrimaryAllocation((DXGDEVICE *)this, v5, a2);
}

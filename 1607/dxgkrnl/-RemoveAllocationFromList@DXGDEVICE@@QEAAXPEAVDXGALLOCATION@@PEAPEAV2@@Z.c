/*
 * XREFs of ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z @ 0x1C0143B74
 * Callers:
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C0096B84 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationFromList(
        DXGDEVICE *this,
        struct DXGALLOCATION *a2,
        struct DXGALLOCATION **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct DXGALLOCATION *v9; // rax

  if ( *((_DWORD *)this + 94) == 1
    && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 7377LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_QWORD *)a2 + 8);
  if ( v7 )
    *(_QWORD *)(v7 + 56) = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 7);
  v9 = (struct DXGALLOCATION *)*((_QWORD *)a2 + 8);
  if ( v8 )
    *(_QWORD *)(v8 + 64) = v9;
  else
    *a3 = v9;
  *((_QWORD *)a2 + 8) = 0LL;
  *((_QWORD *)a2 + 7) = 0LL;
}

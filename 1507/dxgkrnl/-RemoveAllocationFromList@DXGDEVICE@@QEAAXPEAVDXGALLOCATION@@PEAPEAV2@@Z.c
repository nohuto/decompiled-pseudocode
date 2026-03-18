/*
 * XREFs of ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z @ 0x1C011E430
 * Callers:
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C007B454 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationFromList(
        DXGDEVICE *this,
        struct DXGALLOCATION *a2,
        struct DXGALLOCATION **a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct DXGALLOCATION *v12; // rax

  if ( *((_DWORD *)this + 88) == 1
    && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v9 + 24) = 7048LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)a2 + 8);
  if ( v10 )
    *(_QWORD *)(v10 + 56) = *((_QWORD *)a2 + 7);
  v11 = *((_QWORD *)a2 + 7);
  v12 = (struct DXGALLOCATION *)*((_QWORD *)a2 + 8);
  if ( v11 )
    *(_QWORD *)(v11 + 64) = v12;
  else
    *a3 = v12;
  *((_QWORD *)a2 + 8) = 0LL;
  *((_QWORD *)a2 + 7) = 0LL;
}

/*
 * XREFs of DxgkDestroyClientAllocation @ 0x1C012E524
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C005C690 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C005E330 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 * Callees:
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C007B454 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C012C900 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C012C9AC (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DxgkDestroyClientAllocation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct DXGALLOCATION **a4,
        struct DXGRESOURCE *a5)
{
  __int64 v6; // rbx
  __int64 v8; // rsi
  struct DXGALLOCATION *v9; // rbx

  v6 = a3;
  if ( !*(_DWORD *)(a2 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(a2 + 80));
  if ( a5 )
  {
    DXGDEVICE::DestroyClientResource((PERESOURCE *)a2, a5);
  }
  else if ( (_DWORD)v6 )
  {
    v8 = v6;
    do
    {
      v9 = *a4;
      DXGDEVICE::RemoveAllocationFromList((DXGDEVICE *)a2, *a4, 0);
      DXGDEVICE::DestroyClientAllocations((PERESOURCE *)a2, (struct _EX_RUNDOWN_REF *)v9);
      ++a4;
      --v8;
    }
    while ( v8 );
  }
}

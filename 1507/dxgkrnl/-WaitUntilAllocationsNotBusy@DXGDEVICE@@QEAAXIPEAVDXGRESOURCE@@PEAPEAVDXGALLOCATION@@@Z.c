/*
 * XREFs of ?WaitUntilAllocationsNotBusy@DXGDEVICE@@QEAAXIPEAVDXGRESOURCE@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C012DFCC
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C005C690 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::WaitUntilAllocationsNotBusy(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGRESOURCE *a3,
        struct DXGALLOCATION **a4)
{
  __int64 i; // rbx
  __int64 v7; // rdi

  if ( a3 )
  {
    for ( i = *((_QWORD *)a3 + 3); i; i = *(_QWORD *)(i + 64) )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL)
                                                                          + 8LL)
                                                              + 592LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
        *(_QWORD *)(i + 24),
        0LL,
        4LL);
  }
  else if ( a2 )
  {
    v7 = a2;
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL)
                                                                          + 8LL)
                                                              + 592LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
        *((_QWORD *)*a4++ + 3),
        0LL,
        4LL);
      --v7;
    }
    while ( v7 );
  }
}

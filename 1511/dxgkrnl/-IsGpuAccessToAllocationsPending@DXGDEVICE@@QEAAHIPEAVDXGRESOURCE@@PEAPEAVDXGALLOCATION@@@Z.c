/*
 * XREFs of ?IsGpuAccessToAllocationsPending@DXGDEVICE@@QEAAHIPEAVDXGRESOURCE@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01332E8
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C0063440 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::IsGpuAccessToAllocationsPending(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGRESOURCE *a3,
        struct DXGALLOCATION **a4)
{
  __int64 i; // rbx
  unsigned int v9; // ebx

  if ( a3 )
  {
    for ( i = *((_QWORD *)a3 + 3); i; i = *(_QWORD *)(i + 64) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL)
                                                                         + 8LL)
                                                             + 584LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 432LL),
             *(_QWORD *)(i + 24)) )
      {
        return 1LL;
      }
    }
    return 0LL;
  }
  v9 = 0;
  if ( !a2 )
    return 0LL;
  while ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL)
                                                                         + 8LL)
                                                             + 584LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 432LL),
             *((_QWORD *)*a4 + 3)) )
  {
    ++v9;
    ++a4;
    if ( v9 >= a2 )
      return 0LL;
  }
  return 1LL;
}

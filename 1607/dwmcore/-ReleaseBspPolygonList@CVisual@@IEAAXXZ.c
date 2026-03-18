/*
 * XREFs of ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x180050A40
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180054360 (--1CVisual@@MEAA@XZ.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18004FD80 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x180138CB4 (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 */

void __fastcall CVisual::ReleaseBspPolygonList(CVisual *this)
{
  __int64 BspPolygonList; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8

  BspPolygonList = CVisual::GetBspPolygonList((__int64)this);
  v3 = BspPolygonList;
  if ( BspPolygonList )
  {
    LODWORD(v4) = *(_DWORD *)(BspPolygonList + 24);
    while ( (_DWORD)v4 )
    {
      v4 = (unsigned int)(v4 - 1);
      v5 = *(_QWORD *)(*(_QWORD *)v3 + 8 * v4);
      if ( v5 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        *(_QWORD *)(*(_QWORD *)v3 + 8 * v4) = 0LL;
      }
    }
    *(_DWORD *)(v3 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(v3, 8LL);
    DynArrayImpl<1>::~DynArrayImpl<1>(v3, v6, v7);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v3);
    CVisual::SetBspPolygonList(this, 0LL);
  }
}

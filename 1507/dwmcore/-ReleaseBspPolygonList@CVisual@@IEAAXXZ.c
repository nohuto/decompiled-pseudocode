/*
 * XREFs of ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x180035DBC
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180039240 (--1CVisual@@MEAA@XZ.c)
 *     ?PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x18014CA14 (-PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x18014D19C (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CVisual::ReleaseBspPolygonList(CVisual *this)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rbp

  v1 = *((_QWORD *)this + 53);
  if ( v1 )
  {
    LODWORD(v3) = *(_DWORD *)(v1 + 24);
    while ( (_DWORD)v3 )
    {
      v3 = (unsigned int)(v3 - 1);
      v4 = *(_QWORD *)(**((_QWORD **)this + 53) + 8 * v3);
      if ( v4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        *(_QWORD *)(**((_QWORD **)this + 53) + 8 * v3) = 0LL;
      }
    }
    v5 = *((_QWORD *)this + 53);
    *(_DWORD *)(v5 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(v5, 8LL);
    v6 = *((_QWORD *)this + 53);
    if ( v6 )
    {
      DynArrayImpl<1>::~DynArrayImpl<1>(*((_QWORD *)this + 53));
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v6);
      *((_QWORD *)this + 53) = 0LL;
    }
  }
}

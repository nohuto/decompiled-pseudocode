/*
 * XREFs of ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x1800487D8
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004C96C (--1CVisual@@MEAA@XZ.c)
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004F330 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CVisual::ReleaseBspPolygonList(CVisual *this)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rbp

  v1 = *((_QWORD *)this + 51);
  if ( v1 )
  {
    LODWORD(v3) = *(_DWORD *)(v1 + 24);
    while ( (_DWORD)v3 )
    {
      v3 = (unsigned int)(v3 - 1);
      v4 = *(_QWORD *)(**((_QWORD **)this + 51) + 8 * v3);
      if ( v4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        *(_QWORD *)(**((_QWORD **)this + 51) + 8 * v3) = 0LL;
      }
    }
    v5 = *((_QWORD *)this + 51);
    *(_DWORD *)(v5 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(v5, 8LL);
    v6 = *((_QWORD *)this + 51);
    if ( v6 )
    {
      DynArrayImpl<1>::~DynArrayImpl<1>(*((_QWORD *)this + 51));
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v6);
      *((_QWORD *)this + 51) = 0LL;
    }
  }
}

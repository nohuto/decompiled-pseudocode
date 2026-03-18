/*
 * XREFs of ?HasAntialiasedContent@CVisual@@MEBA_NXZ @ 0x18004EB40
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062110 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ @ 0x180138F40 (-HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CVisual::HasAntialiasedContent(CVisual *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 38);
  return v1 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 160LL))(v1);
}

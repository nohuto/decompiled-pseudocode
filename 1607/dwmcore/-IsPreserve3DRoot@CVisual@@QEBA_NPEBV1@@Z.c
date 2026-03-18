/*
 * XREFs of ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x18000C018
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AB10 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AE20 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062110 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004ED08 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::IsPreserve3DRoot(CVisual *this, const struct CVisual *a2)
{
  char v2; // bl
  bool v4; // bp
  bool v5; // si
  bool v6; // al
  struct CEffect *EffectInternal; // rax
  __int64 v9; // rax
  bool v10; // zf

  v2 = 1;
  v4 = *((_DWORD *)this + 40) == 1;
  v5 = a2 && *((_DWORD *)a2 + 40) == 1;
  v6 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 34) + 4LL) & 0x8000000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
           EffectInternal,
           9LL) )
    {
      v6 = 1;
    }
  }
  if ( !v4 )
    return 0;
  if ( v5 )
  {
    v10 = !v6;
  }
  else
  {
    v9 = *((_QWORD *)this + 17);
    if ( (v9 & 2) != 0 )
      v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v9) = v9 & 1;
    v10 = (_DWORD)v9 == 0;
  }
  if ( v10 )
    return 0;
  return v2;
}

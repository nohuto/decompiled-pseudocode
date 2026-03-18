/*
 * XREFs of ?PostRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075010
 * Callers:
 *     ?PostRender@CCrossThreadComposition@@MEAAJXZ @ 0x1800826E0 (-PostRender@CCrossThreadComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004DA50 (-Release@CVisual@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180105CE0 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x180120A40 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::PostRender(CDesktopRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 i; // r15
  __int64 v5; // rbp
  int v6; // eax
  __int64 j; // rdi
  int v8; // eax
  __int64 m; // r14
  void (__fastcall ***v11)(_QWORD, __int64); // r14
  __int64 v12; // r14
  _QWORD *k; // rbx
  CVisual *v14; // rdi

  v2 = 0LL;
  if ( *((_DWORD *)this + 8) )
  {
    while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8 * v2) + 557LL) )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 8) )
        goto LABEL_4;
    }
    *((_BYTE *)this + 214) = 1;
  }
LABEL_4:
  v3 = *((_QWORD *)this + 27);
  if ( v3 )
  {
    v11 = *(void (__fastcall ****)(_QWORD, __int64))(v3 + 16);
    if ( v11 )
    {
      (**v11)(*(_QWORD *)(v3 + 16), 1LL);
      *(_QWORD *)(v3 + 16) = 0LL;
    }
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * i);
    v6 = *(_DWORD *)(v5 + 424) - 1;
    for ( j = v6; j >= 0; --j )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v5 + 400) + 8 * j);
      *(_WORD *)(v12 + 1236) = 0;
      for ( k = *(_QWORD **)(v12 + 312); k != (_QWORD *)(v12 + 312); k = (_QWORD *)*k )
        CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(k - 11));
      CVisual::Release((CVisual *)v12);
    }
    v8 = *(_DWORD *)(v5 + 496) - 1;
    for ( m = v8; m >= 0; --m )
    {
      v14 = *(CVisual **)(*(_QWORD *)(v5 + 472) + 8 * m);
      CVisual::PurgeOldRenderPassInfos(v14);
      (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    *(_DWORD *)(v5 + 424) = 0;
    DynArrayImpl<0>::ShrinkToSize(v5 + 400, 8LL);
    *(_DWORD *)(v5 + 496) = 0;
  }
  return 0LL;
}

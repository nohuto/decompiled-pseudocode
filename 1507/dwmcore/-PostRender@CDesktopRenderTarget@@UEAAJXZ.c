/*
 * XREFs of ?PostRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800492E0
 * Callers:
 *     ?PostRender@CCrossThreadComposition@@MEAAJXZ @ 0x180045CB0 (-PostRender@CCrossThreadComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CVisual@@UEAAKXZ @ 0x180035490 (-Release@CVisual@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x1800E9E04 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x180104678 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
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
    while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8 * v2) + 564LL) )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 8) )
        goto LABEL_4;
    }
    *((_BYTE *)this + 166) = 1;
  }
LABEL_4:
  v3 = *((_QWORD *)this + 21);
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
    v6 = *(_DWORD *)(v5 + 432) - 1;
    for ( j = v6; j >= 0; --j )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v5 + 408) + 8 * j);
      *(_WORD *)(v12 + 1284) = 0;
      for ( k = *(_QWORD **)(v12 + 328); k != (_QWORD *)(v12 + 328); k = (_QWORD *)*k )
        CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(k - 11));
      CVisual::Release((CVisual *)v12);
    }
    v8 = *(_DWORD *)(v5 + 504) - 1;
    for ( m = v8; m >= 0; --m )
    {
      v14 = *(CVisual **)(*(_QWORD *)(v5 + 480) + 8 * m);
      CVisual::PurgeOldRenderPassInfos(v14);
      (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    *(_DWORD *)(v5 + 432) = 0;
    DynArrayImpl<0>::ShrinkToSize((_QWORD *)(v5 + 408), 8u);
    *(_DWORD *)(v5 + 504) = 0;
  }
  return 0LL;
}

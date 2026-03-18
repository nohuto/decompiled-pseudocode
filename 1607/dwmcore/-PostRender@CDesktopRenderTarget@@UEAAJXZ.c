/*
 * XREFs of ?PostRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075EC0
 * Callers:
 *     ?PostRender@CCrossThreadComposition@@MEAAJXZ @ 0x1800390D0 (-PostRender@CCrossThreadComposition@@MEAAJXZ.c)
 * Callees:
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004ED60 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004ED80 (-Release@CVisual@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x18011C1A0 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x180138A38 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::PostRender(CDesktopRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 i; // r15
  __int64 v5; // rsi
  int v6; // eax
  __int64 j; // rbp
  int v8; // eax
  __int64 k; // rbp
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  CVisual *v12; // r13
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v14; // r14
  struct _LIST_ENTRY *Flink; // rbx
  CVisual *v16; // rbx

  v2 = 0LL;
  if ( *((_DWORD *)this + 8) )
  {
    while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8 * v2) + 750LL) )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 8) )
        goto LABEL_4;
    }
    *((_BYTE *)this + 262) = 1;
  }
LABEL_4:
  v3 = *((_QWORD *)this + 33);
  if ( v3 )
  {
    v11 = *(void (__fastcall ****)(_QWORD, __int64))(v3 + 16);
    if ( v11 )
    {
      (**v11)(v11, 1LL);
      *(_QWORD *)(v3 + 16) = 0LL;
    }
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * i);
    v6 = *(_DWORD *)(v5 + 616) - 1;
    for ( j = v6; j >= 0; --j )
    {
      v12 = *(CVisual **)(*(_QWORD *)(v5 + 592) + 8 * j);
      *((_WORD *)v12 + 522) = 0;
      RenderPassInfoList = CVisual::GetRenderPassInfoList(v12);
      v14 = RenderPassInfoList;
      if ( RenderPassInfoList )
      {
        Flink = RenderPassInfoList->Flink;
        if ( RenderPassInfoList->Flink != RenderPassInfoList )
        {
          do
          {
            CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&Flink[-6].Blink);
            Flink = Flink->Flink;
          }
          while ( Flink != v14 );
        }
      }
      CVisual::Release(v12);
    }
    v8 = *(_DWORD *)(v5 + 688) - 1;
    for ( k = v8; k >= 0; --k )
    {
      v16 = *(CVisual **)(*(_QWORD *)(v5 + 664) + 8 * k);
      CVisual::PurgeOldRenderPassInfos(v16);
      (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    *(_DWORD *)(v5 + 616) = 0;
    DynArrayImpl<0>::ShrinkToSize(v5 + 592, 8LL);
    *(_DWORD *)(v5 + 688) = 0;
  }
  return 0LL;
}

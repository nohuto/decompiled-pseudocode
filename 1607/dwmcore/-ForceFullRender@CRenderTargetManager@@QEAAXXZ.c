/*
 * XREFs of ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x180072CD0
 * Callers:
 *     ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x18003B388 (-ForceFullRender@CComposition@@QEAAX_N@Z.c)
 *     ?Partition_RenderBlack@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_RENDERBLACK@@@Z @ 0x180110030 (-Partition_RenderBlack@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x180117140 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::ForceFullRender(CRenderTargetManager *this)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = 0LL;
  if ( *((_DWORD *)this + 14) && *((_DWORD *)this + 12) )
  {
    do
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v1);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 168LL))(v3);
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < *((_DWORD *)this + 12) );
  }
}

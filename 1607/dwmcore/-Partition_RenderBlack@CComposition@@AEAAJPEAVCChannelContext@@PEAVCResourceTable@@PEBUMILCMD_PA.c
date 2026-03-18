/*
 * XREFs of ?Partition_RenderBlack@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_RENDERBLACK@@@Z @ 0x180110030
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x180072CD0 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 */

__int64 __fastcall CComposition::Partition_RenderBlack(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_RENDERBLACK *a4)
{
  CRenderTargetManager *v4; // rcx
  char v5; // al

  v4 = (CRenderTargetManager *)*((_QWORD *)this + 4);
  v5 = *((_DWORD *)a4 + 1) != 0;
  if ( *((_BYTE *)v4 + 111) != v5 )
  {
    *((_BYTE *)v4 + 111) = v5;
    *((_BYTE *)v4 + 110) = 1;
    CRenderTargetManager::ForceFullRender(v4);
  }
  return 0LL;
}

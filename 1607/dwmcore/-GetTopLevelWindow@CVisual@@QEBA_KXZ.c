/*
 * XREFs of ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x18004F8E0
 * Callers:
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180051E9C (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180051F00 (-CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062110 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RemoveRemoteAppVisual@CWindowManager@@QEAAJPEAVCVisual@@@Z @ 0x1800AE154 (-RemoveRemoteAppVisual@CWindowManager@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CVisual::GetTopLevelWindow(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 34);
  if ( *(int *)(v1 + 4) >= 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x1000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(_QWORD *)(i + 4);
}

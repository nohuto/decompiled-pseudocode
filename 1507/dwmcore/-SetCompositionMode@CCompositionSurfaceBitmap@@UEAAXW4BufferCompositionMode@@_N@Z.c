/*
 * XREFs of ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z @ 0x1800DC5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddCompSurfInfoModeUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180005BBC (-AddCompSurfInfoModeUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z @ 0x1800E9018 (-SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z.c)
 */

void __fastcall CCompositionSurfaceBitmap::SetCompositionMode(__int64 a1, int a2, char a3)
{
  __int64 v5; // rdx
  __int64 v7; // rax

  v5 = *(_QWORD *)(a1 + 392);
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 69) )
      CRenderTargetManager::SetIndependentFlipNotifyMode(
        *(CRenderTargetManager **)(*(_QWORD *)(a1 - 24) + 32LL),
        *(struct _LUID *)(v5 + 40));
    if ( a3 )
    {
      v7 = *(_QWORD *)(a1 + 392);
      if ( a2 != *(_DWORD *)(v7 + 144) )
      {
        *(_DWORD *)(v7 + 144) = a2;
        CComposition::AddCompSurfInfoModeUpdate(
          *(CComposition **)(a1 - 24),
          *(struct CCompositionSurfaceInfo **)(a1 + 392));
      }
    }
  }
}

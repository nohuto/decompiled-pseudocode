/*
 * XREFs of ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C001EEB4
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C001E494 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z.c)
 *     ?Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z @ 0x1C001EE10 (-Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C001FEF0 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?Initialize@CBufferRealization@@IEAAJXZ @ 0x1C004B44C (-Initialize@CBufferRealization@@IEAAJXZ.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C004B520 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1C00F3B50 (-Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 */

__int64 __fastcall CRegion::Create(struct CRegion **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  *a1 = 0LL;
  v2 = -1073741801;
  v3 = Win32AllocPool(16LL, 1852273223LL);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 4) = 0;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_DWORD *)v3 = 1;
    *a1 = (struct CRegion *)v3;
    return 0;
  }
  return v2;
}

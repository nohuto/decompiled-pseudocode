/*
 * XREFs of ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C003DA74
 * Callers:
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N111W4TokenState@CTokenBase@@@Z @ 0x1C003C264 (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N111W4TokenState@CToken.c)
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C003E2F0 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C003EFA8 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?Initialize@CBufferRealization@@IEAAJXZ @ 0x1C004D5F4 (-Initialize@CBufferRealization@@IEAAJXZ.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C004D6D0 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z @ 0x1C00A8CE0 (-Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z.c)
 *     ?Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1C00E15EC (-Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BE8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BF0 (Win32AllocPoolImpl_0.c)
 */

__int64 __fastcall CRegion::Create(struct CRegion **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  *a1 = 0LL;
  v2 = -1073741801;
  if ( (int)IsWin32AllocPoolImplSupported_0() < 0 )
    v3 = 0LL;
  else
    v3 = Win32AllocPoolImpl_0();
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

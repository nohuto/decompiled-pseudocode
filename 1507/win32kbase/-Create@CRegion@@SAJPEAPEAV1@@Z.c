/*
 * XREFs of ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C0047AD0
 * Callers:
 *     ?Initialize@CBufferRealization@@IEAAJXZ @ 0x1C001FE14 (-Initialize@CBufferRealization@@IEAAJXZ.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C001FEF0 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenBase@@@Z @ 0x1C0047FEC (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenB.c)
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C0049BDC (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C004CBB8 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z @ 0x1C00A4160 (-Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z.c)
 *     ?Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1C00DF7C8 (-Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BB8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BC0 (Win32AllocPoolImpl_0.c)
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

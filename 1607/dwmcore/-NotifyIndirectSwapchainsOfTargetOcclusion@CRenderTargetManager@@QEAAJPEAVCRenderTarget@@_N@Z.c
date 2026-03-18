/*
 * XREFs of ?NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x180072D1C
 * Callers:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x180072E9C (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?CheckDeviceState@CRenderTargetManager@@QEAAJXZ @ 0x180073820 (-CheckDeviceState@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x18011F8BC (-SetTargetOcclusion@CIndirectSwapchainRenderTarget@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 */

__int64 __fastcall CRenderTargetManager::NotifyIndirectSwapchainsOfTargetOcclusion(
        CRenderTargetManager *this,
        struct CRenderTarget *a2,
        bool a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  __int64 v9; // rcx
  int v10; // eax

  v3 = *((_DWORD *)this + 14);
  v4 = 0;
  if ( v3 < *((_DWORD *)this + 12) )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v3);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, 55LL) )
      {
        v10 = CIndirectSwapchainRenderTarget::SetTargetOcclusion(
                *(CIndirectSwapchainRenderTarget **)(*((_QWORD *)this + 3) + 8LL * v3),
                a2,
                a3);
        v4 = v10;
        if ( v10 < 0 )
          break;
      }
      if ( ++v3 >= *((_DWORD *)this + 12) )
        return v4;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x369u);
  }
  return v4;
}

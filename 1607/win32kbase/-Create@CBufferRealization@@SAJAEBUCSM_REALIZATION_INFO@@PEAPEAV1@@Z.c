/*
 * XREFs of ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z @ 0x1C004B2E4
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C001E494 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z.c)
 *     ?Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1C00F3B50 (-Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     ?Initialize@CBufferRealization@@IEAAJXZ @ 0x1C004B44C (-Initialize@CBufferRealization@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBufferRealization::Create(const struct CSM_REALIZATION_INFO *a1, struct CBufferRealization **a2)
{
  int v2; // eax
  int v5; // ebx
  __int64 v6; // rdi
  __int128 v7; // xmm1

  v2 = *(_DWORD *)a1;
  *a2 = 0LL;
  v5 = -1073741811;
  if ( v2 == 1 )
  {
    if ( *((_QWORD *)a1 + 1) )
      v5 = 0;
  }
  else if ( (unsigned int)(v2 - 2) <= 2 && *((_QWORD *)a1 + 1) )
  {
    v5 = 0;
  }
  if ( v5 >= 0 )
  {
    v6 = Win32AllocPool();
    if ( v6 )
    {
      *(_QWORD *)v6 = &CBufferRealization::`vftable';
      *(_OWORD *)(v6 + 24) = *(_OWORD *)a1;
      v7 = *((_OWORD *)a1 + 1);
      *(_QWORD *)(v6 + 56) = 0LL;
      *(_QWORD *)(v6 + 64) = 0LL;
      *(_OWORD *)(v6 + 40) = v7;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      v5 = CBufferRealization::Initialize((CBufferRealization *)v6);
      if ( v5 < 0 )
        (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
      else
        *a2 = (struct CBufferRealization *)v6;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v5;
}

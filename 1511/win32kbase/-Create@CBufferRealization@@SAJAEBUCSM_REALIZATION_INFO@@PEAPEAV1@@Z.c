/*
 * XREFs of ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z @ 0x1C004D4A4
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C003E2F0 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z.c)
 *     ?Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1C00E15EC (-Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ?Initialize@CBufferRealization@@IEAAJXZ @ 0x1C004D5F4 (-Initialize@CBufferRealization@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBufferRealization::Create(const struct CSM_REALIZATION_INFO *a1, struct CBufferRealization **a2)
{
  int v2; // r8d
  int v5; // ebx
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // rdi
  __int128 v9; // xmm1

  v2 = *(_DWORD *)a1;
  *a2 = 0LL;
  v5 = -1073741811;
  v6 = v2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( (!v7 || v7 == 1) && *((_QWORD *)a1 + 1) )
      v5 = 0;
  }
  else if ( *((_QWORD *)a1 + 1) )
  {
    v5 = 0;
  }
  if ( v5 >= 0 )
  {
    v8 = Win32AllocPool();
    if ( v8 )
    {
      *(_QWORD *)v8 = &CBufferRealization::`vftable';
      *(_OWORD *)(v8 + 24) = *(_OWORD *)a1;
      v9 = *((_OWORD *)a1 + 1);
      *(_QWORD *)(v8 + 56) = 0LL;
      *(_QWORD *)(v8 + 64) = 0LL;
      *(_OWORD *)(v8 + 40) = v9;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      v5 = CBufferRealization::Initialize((CBufferRealization *)v8);
      if ( v5 < 0 )
        (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
      else
        *a2 = (struct CBufferRealization *)v8;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v5;
}

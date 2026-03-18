/*
 * XREFs of ?SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z @ 0x1C003D404
 * Callers:
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C003BE34 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 * Callees:
 *     ?EnsureRenderFenceWait@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C003D384 (-EnsureRenderFenceWait@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::SignalGpuFenceInternal(CTokenManager *this, struct _LUID a2, void *a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v7; // r10d
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 result; // rax

  v4 = 0;
  v7 = *((_DWORD *)g_pTokenManager + 20);
  if ( !v7 )
    return 3221226021LL;
  v8 = *((_QWORD *)g_pTokenManager + 9);
  while ( 1 )
  {
    v9 = v8 + 32LL * v4;
    if ( *(_QWORD *)v9 == a2 )
      break;
    if ( ++v4 >= v7 )
      return 3221226021LL;
  }
  if ( !v9 || !*(_DWORD *)(v9 + 12) )
    return 3221226021LL;
  result = CTokenManager::EnsureRenderFenceWait(g_pTokenManager, (struct CSM_TOKEN_ADAPTER_INFO *)(v8 + 32LL * v4));
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(void *, __int64, _QWORD))qword_1C0104580)(a3, a4, *(unsigned int *)(v9 + 12));
  return result;
}

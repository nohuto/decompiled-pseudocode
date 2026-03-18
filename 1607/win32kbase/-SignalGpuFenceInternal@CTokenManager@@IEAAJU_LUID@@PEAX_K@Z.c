/*
 * XREFs of ?SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z @ 0x1C001A79C
 * Callers:
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C001C5B4 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 * Callees:
 *     GreDxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C0016FE0 (GreDxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?EnsureRenderFenceWait@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C001A724 (-EnsureRenderFenceWait@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 */

__int64 __fastcall CTokenManager::SignalGpuFenceInternal(CTokenManager *this, struct _LUID a2, void *a3)
{
  unsigned int v3; // eax
  unsigned int v4; // r10d
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 result; // rax

  v3 = 0;
  v4 = *((_DWORD *)g_pTokenManager + 20);
  if ( !v4 )
    return 3221226021LL;
  v5 = *((_QWORD *)g_pTokenManager + 9);
  while ( 1 )
  {
    v6 = v5 + 32LL * v3;
    if ( *(_QWORD *)v6 == a2 )
      break;
    if ( ++v3 >= v4 )
      return 3221226021LL;
  }
  if ( !v6 || !*(_DWORD *)(v6 + 12) )
    return 3221226021LL;
  result = CTokenManager::EnsureRenderFenceWait(g_pTokenManager, (struct CSM_TOKEN_ADAPTER_INFO *)(v5 + 32LL * v3));
  if ( (int)result >= 0 )
    return GreDxgkSignalSynchronizationObjectFromGpuByReference();
  return result;
}

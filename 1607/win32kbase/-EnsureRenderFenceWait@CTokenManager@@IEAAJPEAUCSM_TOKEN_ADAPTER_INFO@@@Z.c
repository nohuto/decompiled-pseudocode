/*
 * XREFs of ?EnsureRenderFenceWait@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C001A724
 * Callers:
 *     ?SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z @ 0x1C001A79C (-SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z.c)
 * Callees:
 *     GreDxgkWaitForSynchronizationObjectFromGpu @ 0x1C0016FD0 (GreDxgkWaitForSynchronizationObjectFromGpu.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall CTokenManager::EnsureRenderFenceWait(CTokenManager *this, struct CSM_TOKEN_ADAPTER_INFO *a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  _DWORD v6[19]; // [rsp+24h] [rbp-54h] BYREF

  v2 = *((_QWORD *)this + 11);
  result = 0LL;
  if ( *((_QWORD *)a2 + 3) != v2 )
  {
    memset(v6, 0, sizeof(v6));
    *(_QWORD *)&v6[1] = (char *)a2 + 16;
    v6[0] = 1;
    *(_QWORD *)&v6[3] = v2;
    result = GreDxgkWaitForSynchronizationObjectFromGpu();
    if ( (int)result >= 0 )
      *((_QWORD *)a2 + 3) = *((_QWORD *)this + 11);
  }
  return result;
}

/*
 * XREFs of ?EnsureRenderFenceWait@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C003D384
 * Callers:
 *     ?SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z @ 0x1C003D404 (-SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall CTokenManager::EnsureRenderFenceWait(CTokenManager *this, struct CSM_TOKEN_ADAPTER_INFO *a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  _QWORD v6[10]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *((_QWORD *)this + 11);
  result = 0LL;
  if ( *((_QWORD *)a2 + 3) != v2 )
  {
    memset((char *)v6 + 4, 0, 0x4CuLL);
    LODWORD(v6[0]) = *((_DWORD *)a2 + 3);
    v6[1] = (char *)a2 + 16;
    HIDWORD(v6[0]) = 1;
    v6[2] = v2;
    result = ((__int64 (__fastcall *)(_QWORD *))qword_1C0104588)(v6);
    if ( (int)result >= 0 )
      *((_QWORD *)a2 + 3) = *((_QWORD *)this + 11);
  }
  return result;
}

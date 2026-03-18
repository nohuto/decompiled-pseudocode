/*
 * XREFs of DxgkAbandonSwapChain @ 0x1C0167610
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z @ 0x1C0167348 (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z.c)
 */

__int64 __fastcall DxgkAbandonSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  HANDLE *v3; // rbp
  HANDLE *v4; // rbx
  HANDLE v5; // rbx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r8
  struct DXGSWAPCHAIN **v15; // rbx
  HANDLE Handle; // [rsp+70h] [rbp+0h] BYREF

  v3 = (HANDLE *)((unsigned __int64)&Handle & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (HANDLE *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2113);
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (HANDLE *)MmUserProbeAddress;
  *v3 = *v4;
  v5 = *v3;
  v6 = ObReferenceObjectByHandle(*v3, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, v3 + 1, 0LL);
  v11 = v6;
  if ( v6 >= 0 )
  {
    v15 = *(struct DXGSWAPCHAIN ***)(((unsigned __int64)&Handle & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    LODWORD(v11) = SwapChainAbandonInternal(*v15);
    ObfDereferenceObject(v15);
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = v5;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdWarning(v12);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v13, 2113);
  return (unsigned int)v11;
}

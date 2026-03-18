/*
 * XREFs of DxgkReleaseSwapChain @ 0x1C01640E0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0162FF0 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

__int64 __fastcall DxgkReleaseSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v4; // rbx
  void *v5; // rsi
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  void *v15; // r8
  struct DXGSWAPCHAIN **v16; // rbx
  unsigned int v17; // esi
  __int64 v18; // r8
  PVOID v19; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2112);
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_OWORD *)v4;
  *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_QWORD *)(v4 + 16);
  v5 = *(void **)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v6 = ObReferenceObjectByHandle(
         v5,
         0x20000u,
         g_pDxgkSharedSwapChainObjectType,
         1,
         (PVOID *)((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL),
         0LL);
  v11 = v6;
  if ( v6 >= 0 )
  {
    v15 = *(void **)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
    LOBYTE(v10) = 1;
    v16 = *(struct DXGSWAPCHAIN ***)v3;
    v17 = SwapChainReleaseInternal(**(struct DXGSWAPCHAIN ***)v3, (struct _D3DKMT_RELEASESWAPCHAIN *)(v3 + 8), v15, v10);
    ObfDereferenceObject(v16);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v18, 2112);
    return v17;
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = v5;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdWarning(v12);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v13, 2112);
    return (unsigned int)v11;
  }
}

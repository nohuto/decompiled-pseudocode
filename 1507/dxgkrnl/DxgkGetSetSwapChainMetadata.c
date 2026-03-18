/*
 * XREFs of DxgkGetSetSwapChainMetadata @ 0x1C0163A00
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C0162E68 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall DxgkGetSetSwapChainMetadata(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v5; // rax
  void *v6; // rsi
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  bool v16; // zf
  struct DXGSWAPCHAIN **v18; // rsi
  _DWORD *v19; // r8
  _BYTE v20[48]; // [rsp+A0h] [rbp+A0h] BYREF

  v3 = (unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2121);
  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_OWORD *)v5;
  *(_OWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_OWORD *)(v5 + 16);
  *(_QWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *(_QWORD *)(v5 + 32);
  v6 = *(void **)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v7 = ObReferenceObjectByHandle(
         v6,
         0x20000u,
         g_pDxgkSharedSwapChainObjectType,
         1,
         (PVOID *)((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL),
         0LL);
  v12 = v7;
  if ( v7 >= 0 )
  {
    v18 = *(struct DXGSWAPCHAIN ***)v3;
    LODWORD(v12) = SwapChainGetSetMetaDataInternal(
                     **(struct DXGSWAPCHAIN ***)v3,
                     (struct _D3DKMT_GETSETSWAPCHAINMETADATA *)(v3 + 8),
                     0,
                     1);
    if ( (int)v12 >= 0 )
    {
      v19 = (_DWORD *)(a1 + 32);
      if ( a1 + 32 >= MmUserProbeAddress )
        v19 = (_DWORD *)MmUserProbeAddress;
      *v19 = *(_DWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    }
    ObfDereferenceObject(v18);
    v16 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = v6;
    *(_QWORD *)(v13 + 32) = v12;
    WdLogEvent5_WdWarning(v13);
    v15 = qword_1C00467F0;
    v16 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v15, &EventProfilerExit, v14, 2121);
  return (unsigned int)v12;
}

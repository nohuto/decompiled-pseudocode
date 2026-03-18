/*
 * XREFs of DxgkAcquireSwapChain @ 0x1C018F5F0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C018D308 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C018D364 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C018D390 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z @ 0x1C018D720 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z.c)
 */

__int64 __fastcall DxgkAcquireSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  void *v10; // rsi
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  bool v20; // zf
  struct DXGSWAPCHAIN **v21; // rsi
  int v22; // eax
  _QWORD *v23; // rdx
  _DWORD *v24; // rdx
  PVOID v25; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2111);
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v5;
  *(_OWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v5[1];
  *(_OWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v5[2];
  if ( !*(_DWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)
    || *(_DWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) == *(_DWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x20) )
  {
    v10 = *(void **)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v11 = ObReferenceObjectByHandle(
            v10,
            0x20000u,
            g_pDxgkSharedSwapChainObjectType,
            1,
            (PVOID *)((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL),
            0LL);
    v16 = v11;
    if ( v11 >= 0 )
    {
      v21 = *(struct DXGSWAPCHAIN ***)v3;
      DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE(
        (DXGSWAPCHAINLOCKWITHDEVICE *)(v3 + 64),
        **(struct DXGSWAPCHAIN ***)v3,
        *(_DWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) != 0,
        1);
      LODWORD(v16) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
                       (DXGSWAPCHAINLOCKWITHDEVICE *)(v3 + 64),
                       (struct DXGDEVICE **)(v3 + 56),
                       1);
      if ( (int)v16 >= 0 )
      {
        v22 = DXGSWAPCHAIN::AcquireBuffer((struct _KTHREAD **)*v21, (struct _D3DKMT_ACQUIRESWAPCHAIN *)(v3 + 8));
        LODWORD(v16) = v22;
        if ( v22 >= 0 && v22 != 259 )
        {
          v23 = (_QWORD *)(a1 + 40);
          if ( a1 + 40 >= MmUserProbeAddress )
            v23 = (_QWORD *)MmUserProbeAddress;
          *v23 = *(_QWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
          v24 = (_DWORD *)(a1 + 44);
          if ( a1 + 44 >= MmUserProbeAddress )
            v24 = (_DWORD *)MmUserProbeAddress;
          *v24 = *(_DWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34);
        }
      }
      ObfDereferenceObject(v21);
      DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)(v3 + 64));
      v20 = (qword_1C0056840 & 2) == 0;
    }
    else
    {
      v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = v10;
      *(_QWORD *)(v17 + 32) = v16;
      WdLogEvent5_WdWarning(v17);
      v19 = qword_1C0056840;
      v20 = (qword_1C0056840 & 2) == 0;
    }
    if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v19, &EventProfilerExit, v18, 2111);
    return (unsigned int)v16;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v6 + 24) = 800LL;
    WdLogEvent5_WdError(v6);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v7, &EventProfilerExit, v8, 2111);
    return 3221225485LL;
  }
}

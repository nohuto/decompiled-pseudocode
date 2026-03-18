/*
 * XREFs of ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C0162BEC
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C0161DE4 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C016291C (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     RtlUIntAdd @ 0x1C000A2D0 (RtlUIntAdd.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00D2128 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C016241C (-MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::SetMetaDataInternal(
        struct _KTHREAD **this,
        struct AUTOEXPANDALLOCATION *a2,
        int *a3,
        __int64 a4,
        UINT uAddend,
        char *Src,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a7,
        char a8)
{
  __int64 v8; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // edi
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // ebx
  char *Buffer; // rax
  __int64 v30; // rcx
  char *v31; // rbx
  __int64 v32; // rax
  char *v33; // rbx
  size_t v34; // rdi
  UINT puResult[10]; // [rsp+20h] [rbp-28h] BYREF

  v8 = (unsigned int)a4;
  if ( this[1] != KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 2141LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !uAddend )
  {
    v13 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v13 + 24) = PsGetCurrentProcess(v14);
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  if ( RtlUIntAdd(v8, uAddend, puResult) < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v17 + 24) = PsGetCurrentProcess(v18);
    WdLogEvent5_WdError(v17);
    DXGSWAPCHAIN::MarkAbandoned(this, v19, v20, v21);
    return 3221225485LL;
  }
  v22 = *((_DWORD *)a2 + 2);
  if ( puResult[0] > v22 )
    v22 = puResult[0];
  if ( v22 > 0x2000 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v23[3] = PsGetCurrentProcess(v24);
    v23[4] = v22;
    v23[5] = 0x2000LL;
    WdLogEvent5_WdError(v23);
    v28 = -1073741811;
LABEL_14:
    DXGSWAPCHAIN::MarkAbandoned(this, v25, v26, v27);
    return v28;
  }
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer((void **)a2, v22, *a3);
  v31 = Buffer;
  if ( !Buffer )
  {
    v32 = WdLogNewEntry5_WdLowResource(v30);
    *(_QWORD *)(v32 + 24) = v22;
    WdLogEvent5_WdLowResource(v32);
    v28 = -1073741801;
    goto LABEL_14;
  }
  if ( !*a3 && (_DWORD)v8 )
    memset(Buffer, 0, v22);
  v33 = &v31[v8];
  if ( a8 == 1 )
  {
    v34 = uAddend;
    if ( &Src[uAddend] < Src || (unsigned __int64)&Src[uAddend] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v33, Src, uAddend);
  }
  else
  {
    v34 = uAddend;
    memmove(v33, Src, uAddend);
  }
  *a3 = 1;
  *((_DWORD *)a7 + 2) = uAddend;
  if ( uAddend > 0x10 )
    v34 = 16LL;
  memmove((char *)a7 + 12, v33, v34);
  return 0LL;
}

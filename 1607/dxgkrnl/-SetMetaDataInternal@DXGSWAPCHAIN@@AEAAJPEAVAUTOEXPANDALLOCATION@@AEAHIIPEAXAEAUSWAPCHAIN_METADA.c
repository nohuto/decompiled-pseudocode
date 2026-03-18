/*
 * XREFs of ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C018EFB8
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C018E15C (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C018ECE8 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     RtlUIntAdd @ 0x1C000CCE8 (RtlUIntAdd.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00DB4F8 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C018E7CC (-MarkAbandoned@DXGSWAPCHAIN@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::SetMetaDataInternal(
        struct _KTHREAD **this,
        struct AUTOEXPANDALLOCATION *a2,
        int *a3,
        unsigned int a4,
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
  unsigned int v21; // edi
  _QWORD *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned int v26; // ebx
  char *Buffer; // rax
  __int64 v28; // rcx
  char *v29; // rbx
  __int64 v30; // rax
  char *v31; // rbx
  size_t v32; // rdi
  UINT puResult[10]; // [rsp+20h] [rbp-28h] BYREF

  v8 = a4;
  if ( this[1] != KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 2185LL;
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
    DXGSWAPCHAIN::MarkAbandoned(this, v19, v20);
    return 3221225485LL;
  }
  v21 = *((_DWORD *)a2 + 2);
  if ( puResult[0] > v21 )
    v21 = puResult[0];
  if ( v21 > 0x2000 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v22[3] = PsGetCurrentProcess(v23);
    v22[4] = v21;
    v22[5] = 0x2000LL;
    WdLogEvent5_WdError(v22);
    v26 = -1073741811;
LABEL_14:
    DXGSWAPCHAIN::MarkAbandoned(this, v24, v25);
    return v26;
  }
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer((void **)a2, v21, *a3);
  v29 = Buffer;
  if ( !Buffer )
  {
    v30 = WdLogNewEntry5_WdLowResource(v28);
    *(_QWORD *)(v30 + 24) = v21;
    WdLogEvent5_WdLowResource(v30);
    v26 = -1073741801;
    goto LABEL_14;
  }
  if ( !*a3 && (_DWORD)v8 )
    memset(Buffer, 0, v21);
  v31 = &v29[v8];
  if ( a8 == 1 )
  {
    v32 = uAddend;
    if ( &Src[uAddend] < Src || (unsigned __int64)&Src[uAddend] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v31, Src, uAddend);
  }
  else
  {
    v32 = uAddend;
    memmove(v31, Src, uAddend);
  }
  *a3 = 1;
  *((_DWORD *)a7 + 2) = uAddend;
  if ( uAddend > 0x10 )
    v32 = 16LL;
  memmove((char *)a7 + 12, v31, v32);
  return 0LL;
}

/*
 * XREFs of ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1C0161C7C
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C0161DE4 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetMetaDataInternal(
        struct _KTHREAD **this,
        struct AUTOEXPANDALLOCATION *a2,
        __int64 a3,
        char *a4,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a5,
        char a6,
        unsigned int *a7)
{
  __int64 v8; // rbx
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // rcx
  const void *v15; // r15
  size_t v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rcx

  v8 = (unsigned int)a3;
  if ( this[1] != KeGetCurrentThread() )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 2052LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_DWORD *)a2 + 2);
  if ( (_DWORD)v8 )
  {
    if ( (unsigned int)v8 > v11 )
      v8 = v11;
    v15 = *(const void **)a2;
    v16 = 16LL;
    if ( v11 <= 0x10 )
      v16 = *((unsigned int *)a2 + 2);
    memmove((char *)a5 + 12, *(const void **)a2, v16);
    if ( a6 == 1 )
    {
      v17 = (unsigned int)v8;
      if ( (unsigned __int64)&a4[v8] > MmUserProbeAddress || &a4[v8] <= a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a4, v15, (unsigned int)v8);
    }
    else
    {
      v17 = (unsigned int)v8;
      memmove(a4, v15, (unsigned int)v8);
    }
    *((_DWORD *)a5 + 2) = v8;
    *a7 = v8;
    if ( v11 > (unsigned int)v8 )
    {
      v22 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
      *(_QWORD *)(v22 + 24) = PsGetCurrentProcess(v23);
      *(_QWORD *)(v22 + 32) = v17;
      WdLogEvent5_WdWarning(v22);
      return 2147483653LL;
    }
  }
  else
  {
    if ( a4 )
    {
      v12 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v12 + 24) = PsGetCurrentProcess(v13);
      WdLogEvent5_WdError(v12);
      return 3221225485LL;
    }
    *a7 = v11;
  }
  return 0LL;
}

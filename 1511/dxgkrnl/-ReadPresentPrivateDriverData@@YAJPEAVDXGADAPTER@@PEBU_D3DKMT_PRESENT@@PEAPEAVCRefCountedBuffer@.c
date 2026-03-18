/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C00898CC
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007E190 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0085F40 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00187E0 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        const struct _D3DKMT_PRESENT *a2,
        struct CRefCountedBuffer **a3)
{
  UINT PrivateDriverDataSize; // eax
  SIZE_T v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *PoolWithTag; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  size_t v12; // r8
  char *pPrivateDriverData; // rdx
  __int64 v15; // rax

  *a3 = 0LL;
  if ( *((int *)a1 + 414) < 0x2000 && !*((_BYTE *)a1 + 1940) )
    return 0LL;
  if ( *((_DWORD *)a1 + 316) < 0x5007u )
    return 0LL;
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  if ( !PrivateDriverDataSize )
    return 0LL;
  v6 = PrivateDriverDataSize + 8;
  if ( PrivateDriverDataSize == -8 )
    v6 = 1LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v6, 0x4B677844u);
  if ( PoolWithTag )
  {
    *PoolWithTag = a2->PrivateDriverDataSize;
    PoolWithTag[1] = 1;
    v12 = a2->PrivateDriverDataSize;
    pPrivateDriverData = (char *)a2->pPrivateDriverData;
    if ( &pPrivateDriverData[v12] < pPrivateDriverData
      || (unsigned __int64)&pPrivateDriverData[v12] > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(PoolWithTag + 2, pPrivateDriverData, v12);
    *a3 = (struct CRefCountedBuffer *)PoolWithTag;
    return 0LL;
  }
  v15 = WdLogNewEntry5_WdLowResource(v8, v7, v10, v11);
  *(_QWORD *)(v15 + 24) = 1698LL;
  WdLogEvent5_WdLowResource(v15);
  return 3221225495LL;
}

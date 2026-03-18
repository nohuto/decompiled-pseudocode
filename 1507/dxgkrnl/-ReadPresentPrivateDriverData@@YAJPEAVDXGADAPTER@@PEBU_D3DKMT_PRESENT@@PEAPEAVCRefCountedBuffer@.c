/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C006991C
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006B8B0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0073E60 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0017194 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     AllocateRefCountedBuffer @ 0x1C014726C (AllocateRefCountedBuffer.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(struct DXGADAPTER *a1, const struct _D3DKMT_PRESENT *a2, UINT **a3)
{
  __int64 v5; // rcx
  UINT *RefCountedBuffer; // rbx
  __int64 v7; // rax
  size_t PrivateDriverDataSize; // r8
  char *pPrivateDriverData; // rdx

  *a3 = 0LL;
  if ( (*((int *)a1 + 412) >= 0x2000 || *((_BYTE *)a1 + 1932))
    && *((_DWORD *)a1 + 314) >= 0x5007u
    && a2->PrivateDriverDataSize )
  {
    RefCountedBuffer = (UINT *)AllocateRefCountedBuffer();
    if ( !RefCountedBuffer )
    {
      v7 = WdLogNewEntry5_WdLowResource(v5);
      *(_QWORD *)(v7 + 24) = 1691LL;
      WdLogEvent5_WdLowResource(v7);
      return 3221225495LL;
    }
    *RefCountedBuffer = a2->PrivateDriverDataSize;
    RefCountedBuffer[1] = 1;
    PrivateDriverDataSize = a2->PrivateDriverDataSize;
    pPrivateDriverData = (char *)a2->pPrivateDriverData;
    if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
      || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(RefCountedBuffer + 2, pPrivateDriverData, PrivateDriverDataSize);
    *a3 = RefCountedBuffer;
  }
  return 0LL;
}

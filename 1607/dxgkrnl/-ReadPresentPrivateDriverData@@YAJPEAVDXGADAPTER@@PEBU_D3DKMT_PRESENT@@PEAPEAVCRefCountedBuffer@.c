/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C00B3F40
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A8790 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B27C0 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001C8F0 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z @ 0x1C0025D4C (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        const struct _D3DKMT_PRESENT *a2,
        struct CRefCountedBuffer **a3,
        __int64 a4)
{
  __int64 PrivateDriverDataSize; // rcx
  __int64 v7; // rcx
  struct CRefCountedBuffer *RefCountedBuffer; // rbx
  __int64 v9; // rax
  size_t v11; // r8
  char *pPrivateDriverData; // rdx

  *a3 = 0LL;
  if ( (*((int *)a1 + 448) >= 0x2000 || *((_BYTE *)a1 + 2076)) && *((_DWORD *)a1 + 338) >= 0x5007u )
  {
    PrivateDriverDataSize = a2->PrivateDriverDataSize;
    if ( (_DWORD)PrivateDriverDataSize )
    {
      RefCountedBuffer = CRefCountedBuffer::AllocateRefCountedBuffer(
                           PrivateDriverDataSize,
                           (__int64)a2,
                           (__int64)a3,
                           a4);
      if ( !RefCountedBuffer )
      {
        v9 = WdLogNewEntry5_WdLowResource(v7);
        *(_QWORD *)(v9 + 24) = 1695LL;
        WdLogEvent5_WdLowResource(v9);
        return 3221225495LL;
      }
      *(_DWORD *)RefCountedBuffer = a2->PrivateDriverDataSize;
      *((_DWORD *)RefCountedBuffer + 1) = 1;
      v11 = a2->PrivateDriverDataSize;
      pPrivateDriverData = (char *)a2->pPrivateDriverData;
      if ( &pPrivateDriverData[v11] < pPrivateDriverData
        || (unsigned __int64)&pPrivateDriverData[v11] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove((char *)RefCountedBuffer + 8, pPrivateDriverData, v11);
      *a3 = RefCountedBuffer;
    }
  }
  return 0LL;
}

/*
 * XREFs of MiUnlockMdlWritePages @ 0x14004D030
 * Callers:
 *     MiUnlockFlushMdl @ 0x14008E75C (MiUnlockFlushMdl.c)
 *     MiFlushComplete @ 0x1401EAB6C (MiFlushComplete.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiWriteCompletePfn @ 0x14004E120 (MiWriteCompletePfn.c)
 */

void __fastcall MiUnlockMdlWritePages(_QWORD *a1, unsigned __int64 a2, int *a3)
{
  _QWORD *v4; // r14
  BOOL v5; // ebx
  __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // r12
  unsigned __int16 v8; // ax
  int *v9; // rbp
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v11; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v13; // zf
  signed __int32 v14; // eax
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1;
  v5 = *a3 < 0;
  while ( (unsigned __int64)v4 < a2 )
  {
    v6 = 48LL * *v4 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v15);
      while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0 );
    }
    v8 = ((unsigned int)HIDWORD(*(_QWORD *)(v6 + 40)) >> 8) & 0x3FF;
    if ( v8 == 1023 )
      v9 = MiSystemPartition;
    else
      v9 = *(int **)(qword_140327038 + 8LL * v8);
    MiReturnCommit(v9, 1LL);
    if ( v9 == MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = 1LL;
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v14 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v13 = (_DWORD)CachedResidentAvailable == v14;
            LODWORD(CachedResidentAvailable) = v14;
            if ( v13 )
              goto LABEL_19;
          }
          while ( v14 != -1 && (unsigned __int64)(v14 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v11 = (int)CachedResidentAvailable - 192 + 1LL;
        }
      }
      _InterlockedExchangeAdd64(&qword_140324F00, v11);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 816, 1uLL);
    }
LABEL_19:
    MiWriteCompletePfn(v6, v5);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    ++v4;
  }
}

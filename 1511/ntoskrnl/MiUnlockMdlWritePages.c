/*
 * XREFs of MiUnlockMdlWritePages @ 0x1400661D0
 * Callers:
 *     MiUnlockFlushMdl @ 0x1400E3A38 (MiUnlockFlushMdl.c)
 *     MiFlushComplete @ 0x1401DA128 (MiFlushComplete.c)
 * Callees:
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiWriteCompletePfn @ 0x1400673F0 (MiWriteCompletePfn.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

void __fastcall MiUnlockMdlWritePages(_QWORD *a1, unsigned __int64 a2, int *a3)
{
  _QWORD *v4; // r14
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int16 v7; // ax
  int *v8; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v10; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v12; // zf
  signed __int32 v13; // eax
  BOOL v14; // ebx
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1;
  v14 = *a3 < 0;
  while ( (unsigned __int64)v4 < a2 )
  {
    v5 = 48LL * *v4 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v15 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v15);
      while ( (*(_QWORD *)(v5 + 24) & 0x8000000000000000uLL) != 0 );
    }
    v7 = ((unsigned int)HIDWORD(*(_QWORD *)(v5 + 40)) >> 8) & 0x3FF;
    if ( v7 == 1023 )
      v8 = &MiSystemPartition;
    else
      v8 = *(int **)(qword_1402FEC28 + 8LL * v7);
    MiReturnCommit(v8, 1LL);
    if ( v8 != &MiSystemPartition )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 744, 1uLL);
      goto LABEL_10;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = 1LL;
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v13 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v12 = (_DWORD)CachedResidentAvailable == v13;
          LODWORD(CachedResidentAvailable) = v13;
          if ( v12 )
            goto LABEL_9;
        }
        while ( v13 != -1 && (unsigned __int64)(v13 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v10 = (int)CachedResidentAvailable - 192 + 1LL;
      }
    }
    _InterlockedExchangeAdd64(&qword_140301480, v10);
LABEL_9:
    _InterlockedExchangeAdd64(&qword_1402FF680, 1uLL);
LABEL_10:
    MiWriteCompletePfn(v5, v14);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    ++v4;
  }
}

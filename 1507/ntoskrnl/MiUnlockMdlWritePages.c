/*
 * XREFs of MiUnlockMdlWritePages @ 0x1400B55B0
 * Callers:
 *     MiUnlockFlushMdl @ 0x140085148 (MiUnlockFlushMdl.c)
 *     MiFlushComplete @ 0x14021E5B8 (MiFlushComplete.c)
 * Callees:
 *     MiWriteCompletePfn @ 0x1400B51B0 (MiWriteCompletePfn.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

void __fastcall MiUnlockMdlWritePages(_QWORD *a1, unsigned __int64 a2, int *a3)
{
  _QWORD *v4; // r14
  char v5; // bl
  __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v8; // edi
  unsigned __int16 v9; // ax
  __int16 *v10; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v12; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v14; // zf
  signed __int32 v15; // eax

  if ( (unsigned __int64)a1 < a2 )
  {
    v4 = a1;
    v5 = *a3 < 0;
    do
    {
      v6 = 48LL * *v4 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v8 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v8);
        }
        while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) );
      }
      v9 = ((unsigned int)HIDWORD(*(_QWORD *)(v6 + 40)) >> 8) & 0x3FF;
      if ( v9 == 1023 )
        v10 = MiSystemPartition;
      else
        v10 = *(__int16 **)(qword_14034F0E8 + 8LL * v9);
      MiReturnCommit(v10, 1LL);
      if ( v10 != MiSystemPartition )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 696, 1uLL);
        goto LABEL_25;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = 1LL;
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v15 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v14 = (_DWORD)CachedResidentAvailable == v15;
            LODWORD(CachedResidentAvailable) = v15;
            if ( v14 )
              goto LABEL_23;
          }
          while ( v15 != -1 && (unsigned __int64)(v15 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v12 = (int)CachedResidentAvailable - 192 + 1LL;
        }
      }
      _InterlockedExchangeAdd64(&qword_1403552C0, v12);
LABEL_23:
      _InterlockedExchangeAdd64(&qword_14034FB40, 1uLL);
LABEL_25:
      MiWriteCompletePfn(v6, v5);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      ++v4;
    }
    while ( (unsigned __int64)v4 < a2 );
  }
}

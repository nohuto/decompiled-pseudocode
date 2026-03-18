/*
 * XREFs of MiUnlockCodePage @ 0x1400113B0
 * Callers:
 *     MiUnlockImageSection @ 0x140010874 (MiUnlockImageSection.c)
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MmUnlockPreChargedPagedPool @ 0x140147EA4 (MmUnlockPreChargedPagedPool.c)
 *     MiUnlockDriverCode @ 0x1404532D8 (MiUnlockDriverCode.c)
 *     MiHandleDriverNonPagedSections @ 0x14057516C (MiHandleDriverNonPagedSections.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiUnlockCodePage(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  __int64 Process; // rcx
  __int64 v5; // r10
  __int16 v6; // r9
  int v7; // r11d
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v15; // ebx
  __int16 v16; // ax
  __int16 v17; // ax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // esi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r11
  __int64 v26; // rbx
  int v27; // r8d
  unsigned __int64 v28; // [rsp+78h] [rbp+10h] BYREF

  if ( (unsigned __int64)a1 <= a2 )
  {
    v2 = (unsigned __int64)a1;
    Process = 0x90482413000LL;
    v5 = 0x58000000000LL;
    v6 = -1;
    v7 = 1;
    do
    {
      v8 = *(_QWORD *)v2;
      if ( v2 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, v8)
        && (v8 & 1) != 0
        && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v9 = *(_QWORD *)(Process + 1520);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 8 * ((v2 >> 3) & 0x1FF));
          if ( (v10 & 0x20) != 0 )
            v8 |= 0x20uLL;
          if ( (v10 & 0x42) != 0 )
            v8 |= 0x42uLL;
        }
      }
      v28 = v8;
      if ( (unsigned __int64)&STACK[0x90482413078] <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v8)
        && (v8 & 1) != 0
        && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
      {
        v11 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 8 * (((unsigned __int64)&v28 >> 3) & 0x1FF));
          if ( (v12 & 0x20) != 0 )
            v8 |= 0x20uLL;
          if ( (v12 & 0x42) != 0 )
            v8 |= 0x42uLL;
        }
      }
      v13 = 48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - v5;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v15 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v15);
        }
        while ( (*(_QWORD *)(v13 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
        v7 = 1;
        v5 = 0x58000000000LL;
        v6 = -1;
      }
      v16 = *(_WORD *)(v13 + 32);
      if ( !v16 )
        KeBugCheckEx(0x4Eu, 0x9AuLL, (v13 + v5) / 48, *(_BYTE *)(v13 + 34) & 7, *(unsigned __int16 *)(v13 + 32));
      v17 = v6 + v16;
      v18 = *(_QWORD *)(v13 + 24);
      *(_WORD *)(v13 + 32) = v17;
      v19 = v18 & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v17 )
      {
        v20 = v7;
        goto LABEL_41;
      }
      if ( v17 == 1 )
      {
        if ( v19 )
          goto LABEL_39;
      }
      else if ( v17 != 2 || !v19 )
      {
        goto LABEL_53;
      }
      if ( (*(_BYTE *)(v13 + 34) & 8) != 0 )
      {
LABEL_39:
        v20 = 0;
LABEL_41:
        v21 = *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL;
        v22 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( (v21 > v22 || v21 < 0xFFFFF68000000000uLL) && ((*(unsigned __int8 *)(v13 + 35) >> 5) & 1) != 0 )
        {
          *(_BYTE *)(v13 + 35) &= ~0x20u;
        }
        else
        {
          v23 = *(_QWORD *)(v13 + 40) >> 40;
          LOWORD(v23) = v23 & 0x3FF;
          v24 = MiPartitionIdToPointer(v23);
          v26 = v24;
          if ( v27 == 1 )
            MiReturnCommit(v24, v25);
          if ( (__int16 *)v26 == &MiSystemPartition )
          {
            MiReturnResidentAvailable(1LL);
            _InterlockedExchangeAdd64(&qword_14034FB00, 1uLL);
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 5568), 1uLL);
          }
        }
        if ( v20 )
          MiPfnReferenceCountIsZero(v13, (v13 + 0x58000000000LL) / 48);
        v6 = -1;
      }
LABEL_53:
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      v2 += 8LL;
      Process = 0x90482413000LL;
      v7 = 1;
      v5 = 0x58000000000LL;
    }
    while ( v2 <= a2 );
  }
}

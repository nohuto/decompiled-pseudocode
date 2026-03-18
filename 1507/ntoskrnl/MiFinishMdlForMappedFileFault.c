/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x140036BC0
 * Callers:
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiReferenceControlAreaPfn @ 0x140035604 (MiReferenceControlAreaPfn.c)
 *     MiObtainProtoReference @ 0x140036AF4 (MiObtainProtoReference.c)
 *     MiEndingOffsetWithLock @ 0x140055090 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiFlowThroughInsertNode @ 0x14012F998 (MiFlowThroughInsertNode.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 *v5; // r15
  __int64 v7; // r12
  __int64 v11; // rdi
  unsigned int v12; // ebx
  unsigned __int64 v13; // r14
  __int64 *v14; // rbx
  __int64 PteShadow; // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // rax
  char v18; // cl
  char v19; // r15
  unsigned __int64 v20; // rax
  char v21; // cl
  struct _KTHREAD *CurrentThread; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int16 v25; // ax
  __int64 result; // rax
  __int64 v27; // [rsp+50h] [rbp+8h]

  v5 = *(__int64 **)(a1 + 200);
  v7 = *(unsigned int *)(a1 + 180);
  v27 = *v5;
  MiReferenceControlAreaPfn(*v5, (__int64)v5, a3);
  v11 = *(_QWORD *)(a1 + 160);
  MiObtainProtoReference(v11, 0);
  v12 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
    }
    while ( (*(_QWORD *)(v11 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
  }
  *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + a3)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v13 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 304) - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( a4 )
    MiFlowThroughInsertNode(a1, a4, 0x8000000000000000uLL);
  v14 = *(__int64 **)(a1 + 224);
  PteShadow = *v14;
  if ( (unsigned __int64)(v14 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(*(_QWORD *)(a1 + 224), *v14);
  *(_QWORD *)(a1 + 168) = PteShadow;
  v16 = MiStartingOffset(v5, v13, a5);
  v17 = MiEndingOffsetWithLock(v5);
  v18 = *(_BYTE *)(a1 + 191);
  if ( (v18 & 1) != 0 )
  {
    v19 = 1;
    *(_BYTE *)(a1 + 191) = v18 & 0xFE;
  }
  else
  {
    v19 = 0;
  }
  if ( (*(_DWORD *)(v27 + 56) & 0x20) != 0 && v7 + v16 > v17 )
  {
    LODWORD(v7) = (v17 - v16 + 511) & 0xFFFFFE00;
    *(_BYTE *)(a1 + 191) |= 1u;
  }
  if ( (a2 & 1) != 0 && (v20 = a2 & 0xFFFFFFFFFFFFFFFEuLL, v21 = *(_BYTE *)(a2 & 0xFFFFFFFFFFFFFFFEuLL), v21 == 1)
    || (a2 & 1) != 0 && (v20 = a2 & 0xFFFFFFFFFFFFFFFEuLL, v21 = *(_BYTE *)(a2 & 0xFFFFFFFFFFFFFFFEuLL), v21 == 2) )
  {
    if ( v20 && v21 != 2 )
      *(_BYTE *)(a1 + 189) |= 4u;
  }
  CurrentThread = KeGetCurrentThread();
  if ( ((CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0
     || ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7u) < 2)
    && (CurrentThread != KeGetCurrentThread() || !HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink)) )
  {
    *(_BYTE *)(a1 + 189) |= 0x40u;
  }
  v23 = (unsigned int)v7;
  *(_DWORD *)(a1 + 296) = v7;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_WORD *)(a1 + 266) = 0;
  *(_QWORD *)(a1 + 288) = 0LL;
  LOBYTE(v23) = 17;
  *(_DWORD *)(a1 + 300) = 0;
  *(_WORD *)(a1 + 264) = 8 * ((((unsigned __int64)(unsigned int)v7 + 4095) >> 12) + 6);
  MiUnlockProtoPoolPage(v11, v23);
  v24 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)((__int64)v14 - v13) >> 3) + 304) - 0x58000000000LL;
  v25 = *(_WORD *)(a1 + 266) | 0x42;
  *(_WORD *)(a1 + 266) = v25;
  if ( !v19 )
    *(_WORD *)(a1 + 266) = v25 | 0x4000;
  result = v27;
  *(_QWORD *)(a1 + 96) = v16;
  *(_QWORD *)(a1 + 200) = v27;
  *(_QWORD *)(a1 + 232) = v13;
  *(_QWORD *)(a1 + 240) = v24;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}

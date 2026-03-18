/*
 * XREFs of MiCountSystemImageCommitment @ 0x140155F9C
 * Callers:
 *     MiSessionUpdateImageCharges @ 0x140155F24 (MiSessionUpdateImageCharges.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x140156304 (MiFreePrivateFixupEntryForSystemImage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiCountSystemImageCommitment(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r8
  __int64 v3; // rcx
  ULONG_PTR v4; // r8
  _QWORD *v5; // r14
  __int64 v6; // rbp
  unsigned __int64 *v7; // r15
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rbx
  int v10; // r12d
  __int64 v11; // rsi
  __int64 CurrentIrql; // r13
  unsigned int v13; // esi
  signed __int32 i; // edx
  _QWORD *v15; // r9
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r11
  unsigned __int64 v19; // r10
  unsigned __int64 PteShadow; // rdx
  __int64 v21; // rcx
  __int16 v22; // dx
  __int64 v24; // [rsp+60h] [rbp+8h]
  unsigned __int64 v25; // [rsp+68h] [rbp+10h] BYREF
  __int64 v26; // [rsp+70h] [rbp+18h]

  v1 = a1;
  if ( (*(_DWORD *)(a1 + 196) & 7) != 0 )
    return (unsigned __int64)*(unsigned int *)(v1 + 64) >> 12;
  v2 = *(_QWORD *)(a1 + 48);
  if ( (*(_BYTE *)(8 * ((v2 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((v2 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)(((v2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81 )
  {
    return (unsigned __int64)*(unsigned int *)(v1 + 64) >> 12;
  }
  v3 = *(_QWORD *)(a1 + 112);
  if ( !v3 )
    return (unsigned __int64)*(unsigned int *)(v1 + 64) >> 12;
  v5 = (_QWORD *)MiSectionControlArea(v3);
  if ( !v5[17] )
    return (unsigned __int64)*(unsigned int *)(v1 + 64) >> 12;
  v6 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (unsigned __int64 *)v6;
  if ( v4 + 0x70000000000LL > 0x7FFFFFFFFFLL )
    v8 = dword_14034FF40;
  else
    v8 = (volatile signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968);
  v9 = 0LL;
  v10 = *(_BYTE *)(*v5 + 14LL) & 1;
  v11 = MiFreePrivateFixupEntryForSystemImage(v4);
  v24 = v11;
  CurrentIrql = KeGetCurrentIrql();
  v26 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8);
  }
  else
  {
    v13 = 0;
    if ( _interlockedbittestandset(v8, 0x1Fu) )
      v13 = ExpWaitForSpinLockExclusiveAndAcquire(v8);
    for ( i = *v8; (*v8 & 0xBFFFFFFF) != 0x80000000; i = *v8 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v8, i | 0x40000000, i);
      if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v13);
    }
    v11 = v24;
  }
  v15 = v5 + 15;
  if ( v5 != (_QWORD *)-120LL )
  {
    v16 = 0x12090482600LL;
    while ( 1 )
    {
      v17 = *((unsigned int *)v15 + 11);
      if ( ((_BYTE)v15[4] & 0x3Eu) >= 8 || v15[3] )
      {
        v7 += v17;
        v9 += v17;
      }
      else if ( (_DWORD)v17 )
      {
        v18 = *((unsigned int *)v15 + 11);
        v19 = 0xFFFFF6FB7DBED000uLL - v6;
        while ( 2 )
        {
          if ( v11
            && _bittest(
                 *(const signed __int32 **)(*(_QWORD *)(v11 + 40) + 8LL),
                 (__int64)((__int64)v7 + v19 + v16 * 8) >> 3) )
          {
            goto LABEL_48;
          }
          PteShadow = *v7;
          if ( (unsigned __int64)&v7[v16] <= 0x7F8 )
          {
            PteShadow = MiReadPteShadow(v7, PteShadow);
            v16 = 0x12090482600LL;
          }
          v25 = PteShadow;
          if ( !PteShadow )
            goto LABEL_49;
          if ( v10 == 1 )
          {
LABEL_48:
            ++v9;
          }
          else if ( (PteShadow & 1) != 0 )
          {
            if ( (unsigned __int64)&v25 + v16 * 8 <= 0x7F8 )
            {
              PteShadow = MiReadPteShadow(&v25, PteShadow);
              v16 = 0x12090482600LL;
            }
            v21 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            if ( !*(_QWORD *)v21
              || (*(_BYTE *)(v21 + 35) & 8) != 0
              || (*(_QWORD *)(v21 + 40) & 0x200000000000000LL) == 0
              || *(__int64 *)(v21 + 8) >= 0
              || (*(_DWORD *)(v21 + 16) & 0x400LL) == 0 )
            {
              goto LABEL_48;
            }
          }
          else if ( (PteShadow & 0x400) == 0
                 || !(unsigned int)MiIsPrototypePteVadLookup(PteShadow) && (v22 & 0x800) != 0 )
          {
            goto LABEL_48;
          }
LABEL_49:
          ++v7;
          if ( !--v18 )
            break;
          continue;
        }
      }
      v15 = (_QWORD *)v15[2];
      if ( !v15 )
      {
        LOBYTE(CurrentIrql) = v26;
        break;
      }
    }
  }
  MiUnlockWorkingSetExclusive((__int64)v8, CurrentIrql);
  return v9;
}

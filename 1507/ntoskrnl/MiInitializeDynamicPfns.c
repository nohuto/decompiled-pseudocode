/*
 * XREFs of MiInitializeDynamicPfns @ 0x140212A54
 * Callers:
 *     MiMapNewPfns @ 0x1406A1F4C (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     MiInitializeMdlPfn @ 0x1400774C4 (MiInitializeMdlPfn.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiAbortCombineScan @ 0x1400E59F8 (MiAbortCombineScan.c)
 *     MiPageToChannel @ 0x1400FFFF0 (MiPageToChannel.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInitializeDynamicPfns(unsigned __int64 a1, __int64 a2, int a3)
{
  char v4; // r15
  unsigned int v6; // r10d
  char v7; // dl
  unsigned __int64 v8; // r11
  unsigned __int8 CurrentIrql; // si
  unsigned int v10; // ebx
  signed __int32 i; // edx
  __int64 result; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  int v15; // r14d
  int v16; // r15d
  unsigned __int8 v17; // r13
  unsigned int v18; // edi
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  int v21; // [rsp+20h] [rbp-48h]
  _OWORD v22[3]; // [rsp+28h] [rbp-40h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+40h]
  __int16 v24; // [rsp+B0h] [rbp+48h]
  unsigned int v25; // [rsp+B8h] [rbp+50h]
  char v27; // [rsp+C8h] [rbp+60h]

  memset(v22, 0, sizeof(v22));
  v4 = a3;
  v6 = 0;
  v7 = 0;
  v25 = 0;
  v27 = 0;
  v24 = 5;
  v8 = 2LL;
  v21 = a3 & 4;
  if ( (a3 & 4) != 0 )
  {
    LOBYTE(v24) = 6;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_140353DF0);
    }
    else
    {
      v10 = 0;
      if ( _interlockedbittestandset(dword_140353DF0, 0x1Fu) )
        v10 = ExpWaitForSpinLockExclusiveAndAcquire(dword_140353DF0);
      for ( i = dword_140353DF0[0]; (dword_140353DF0[0] & 0xBFFFFFFF) != 0x80000000; i = dword_140353DF0[0] )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange(dword_140353DF0, i | 0x40000000, i);
        if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v10);
      }
    }
    qword_1403551D0 += a2;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(dword_140353DF0, retaddr);
    else
      dword_140353DF0[0] = 0;
    __writecr8(CurrentIrql);
    v6 = 0;
    v8 = 2LL;
    v7 = 0;
  }
  *((_QWORD *)&v22[1] + 1) |= 0x8000000000000000uLL;
  WORD1(v22[2]) = v24;
  result = 0x58000000000LL;
  v13 = 48 * a1 - 0x58000000000LL;
  v14 = v13 + 48 * a2;
  if ( v13 < v14 )
  {
    v15 = v4 & 3;
    v16 = v4 & 1;
    do
    {
      if ( v15 == 1 )
      {
        v25 = MiPageToNode(a1, 0);
        v7 = MiPageToChannel(a1);
        v27 = v7;
        v8 = 2LL;
      }
      v17 = KeGetCurrentIrql();
      __writecr8(v8);
      v18 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v18);
        }
        while ( (*(_QWORD *)(v13 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
        v6 = v25;
        v8 = 2LL;
        v7 = v27;
      }
      if ( v16 )
      {
        *(_WORD *)(v13 + 34) = v24;
        *(_QWORD *)(v13 + 40) = *(_QWORD *)(v13 + 40) & 0x3DFFFCFFFFFFFFFLL | ((((unsigned __int64)v6 << 22) | v7 & 3) << 36) | 0x20000000000000LL;
        if ( v21 )
        {
          MiInitializeMdlPfn(v13, 0);
          *(_QWORD *)(v13 + 16) = MiMakeDemandZeroPte(4LL);
          *(_QWORD *)(v13 + 40) = *(_QWORD *)(v13 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
        }
        if ( ((unsigned int)v8 & a3) != 0 )
          *(_QWORD *)(v13 + 24) &= 0xC000000000000000uLL;
        *(_BYTE *)(v13 + 34) = *(_BYTE *)(v13 + 34) & 0x3F | 0x40;
        if ( ((unsigned int)v8 & a3) != 0 )
          *(_QWORD *)(v13 + 40) |= 0x10000000000000uLL;
      }
      else
      {
        v19 = v22[1];
        *(_OWORD *)v13 = v22[0];
        v20 = v22[2];
        *(_OWORD *)(v13 + 16) = v19;
        *(_OWORD *)(v13 + 32) = v20;
        MiAbortCombineScan(v13);
        v6 = v25;
        v8 = 2LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = v17;
      __writecr8(v17);
      v7 = v27;
      v13 += 48LL;
      ++a1;
    }
    while ( v13 < v14 );
  }
  return result;
}

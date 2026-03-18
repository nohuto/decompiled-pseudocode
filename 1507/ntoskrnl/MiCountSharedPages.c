/*
 * XREFs of MiCountSharedPages @ 0x14003A9D0
 * Callers:
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiPteNeedsCommitCharge @ 0x140117E7C (MiPteNeedsCommitCharge.c)
 *     MiReduceWs @ 0x14012F17C (MiReduceWs.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiCountSharedPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  volatile signed __int32 *v8; // r15
  __int64 CurrentIrql; // rbp
  unsigned __int64 i; // rdx
  unsigned int v11; // ebx
  unsigned __int8 v12; // r15
  __int64 NextPageTable; // rax
  int v14; // ecx
  _QWORD *v15; // rbx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 ProtoPteAddress; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 PrototypePteDirect; // rax
  char v26; // al
  __int64 VmPartition; // rax
  char v28; // al
  __int64 v29; // r8
  char v31[8]; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int32 *v32; // [rsp+38h] [rbp-40h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  char v34; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v35; // [rsp+90h] [rbp+18h] BYREF
  __int64 v36; // [rsp+98h] [rbp+20h]

  v4 = 0LL;
  v8 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8];
  v32 = v8;
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8);
  }
  else
  {
    v11 = 0;
    if ( _interlockedbittestandset(v8, 0x1Fu) )
      v11 = ExpWaitForSpinLockExclusiveAndAcquire(v8);
    for ( i = *(unsigned int *)v8; (*v8 & 0xBFFFFFFF) != 0x80000000; i = *(unsigned int *)v8 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v8, i | 0x40000000, i);
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
  }
  if ( a2 <= a3 )
  {
    v12 = v36;
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(a2, a3, 0, v12, 1, (__int64)&v34);
      v14 = *(_DWORD *)(a1 + 48);
      v15 = (_QWORD *)NextPageTable;
      if ( !NextPageTable )
        v15 = (_QWORD *)(a3 + 8);
      if ( (v14 & 7) != 2 || (v14 & 0xF8) == 8 )
      {
        if ( (v14 & 0x28) != 0x28 )
          v4 += (__int64)((__int64)v15 - a2) >> 3;
        a2 = (unsigned __int64)v15;
      }
      else
      {
        for ( ; a2 < (unsigned __int64)v15; a2 += 8LL )
        {
          if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 1 )
            ++v4;
        }
      }
      if ( a2 == a3 + 8 )
      {
LABEL_68:
        v8 = v32;
        LOBYTE(CurrentIrql) = v36;
        break;
      }
      v16 = (__int64)(a2 << 25) >> 16;
      while ( 1 )
      {
        v17 = *(_QWORD *)a2;
        if ( a2 + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(0x90482413000LL, i)
          && (v17 & 1) != 0
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          i = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( i )
          {
            v18 = *(_QWORD *)(i + 8 * ((a2 >> 3) & 0x1FF));
            if ( (v18 & 0x20) != 0 )
              v17 |= 0x20uLL;
            if ( (v18 & 0x42) != 0 )
              v17 |= 0x42uLL;
          }
        }
        v35 = v17;
        if ( !v17 )
        {
          if ( (unsigned int)MiPteNeedsCommitCharge(a1, a2) != 1 )
            goto LABEL_64;
LABEL_63:
          ++v4;
          goto LABEL_64;
        }
        if ( (v17 & 1) != 0 )
        {
          if ( (v17 & 0x200) == 0 )
          {
            if ( (unsigned __int64)&STACK[0x90482413090] <= 0x7F8
              && (unsigned int)MiPteHasShadow(0x90482413000LL, i)
              && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
            {
              i = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
              if ( i )
              {
                v19 = *(_QWORD *)(i + 8 * (((unsigned __int64)&v35 >> 3) & 0x1FF));
                if ( (v19 & 0x20) != 0 )
                  v17 |= 0x20uLL;
                if ( (v19 & 0x42) != 0 )
                  v17 |= 0x42uLL;
              }
            }
            v20 = 48 * ((v17 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            if ( (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) != 0 )
            {
              ProtoPteAddress = MiGetProtoPteAddress(a1, v16 >> 12, 1LL, v31);
              i = 0x8000000000000000uLL;
              if ( (*(_QWORD *)(v20 + 8) | 0x8000000000000000uLL) == ProtoPteAddress )
                goto LABEL_63;
            }
          }
        }
        else
        {
          if ( (v17 & 0x400) == 0 )
            goto LABEL_64;
          if ( (unsigned int)MiIsPrototypePteVadLookup(v17) )
          {
            if ( (v17 & 0xA0) == 0xA0 )
              goto LABEL_64;
            goto LABEL_63;
          }
          v22 = MiGetProtoPteAddress(a1, v16 >> 12, 1LL, v31);
          PrototypePteDirect = MiGetPrototypePteDirect(v17, v22, v23, v24);
          if ( PrototypePteDirect == i
            && ((*(_DWORD *)(a1 + 48) & 7) != 2 || (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 1) )
          {
            goto LABEL_63;
          }
        }
LABEL_64:
        a2 += 8LL;
        v16 += 4096LL;
        if ( (a2 & 0xFFF) == 0 )
          break;
        if ( a2 > a3 )
          goto LABEL_68;
      }
      if ( a2 > a3 )
        goto LABEL_68;
    }
  }
  v26 = *((_BYTE *)v8 + 219);
  if ( (v26 & 0x10) != 0 )
  {
    *((_BYTE *)v8 + 219) = v26 & 0xEF;
    VmPartition = MiGetVmPartition(v8, i, a3, a4);
    MiAgeWorkingSet(
      v8,
      (unsigned __int8)CurrentIrql,
      1LL,
      *(unsigned __int16 *)(*(_QWORD *)(VmPartition + 5256) + 2358LL));
  }
  v28 = *((_BYTE *)v8 + 219);
  if ( (v28 & 0x20) != 0 )
  {
    v29 = *((_QWORD *)v8 + 17);
    *((_BYTE *)v8 + 219) = v28 & 0xDF;
    MiReduceWs(v8, (unsigned __int8)CurrentIrql, v29);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
  else
    *v8 = 0;
  __writecr8((unsigned __int8)CurrentIrql);
  return v4;
}

/*
 * XREFs of MiJumpStackTarget @ 0x1400D82EC
 * Callers:
 *     MiDoStackCopy @ 0x1400D8208 (MiDoStackCopy.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiTrimWorkingSet @ 0x1400B5BA0 (MiTrimWorkingSet.c)
 *     MiSwitchKstackPages @ 0x1400D85D0 (MiSwitchKstackPages.c)
 *     MiCopyKstack @ 0x1400D8638 (MiCopyKstack.c)
 *     MiCanStealKernelStack @ 0x1400D8D28 (MiCanStealKernelStack.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

volatile signed __int32 *__fastcall MiJumpStackTarget(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rsi
  signed __int32 v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdi
  __int64 v9; // rbp
  unsigned __int16 v10; // si
  KIRQL v11; // r13
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r12
  _QWORD *v15; // rdi
  char v16; // al
  unsigned int v17; // edi
  int *v18; // rcx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r10
  bool v21; // cc
  __int64 v22; // rsi
  signed __int32 v23; // eax
  unsigned int v24; // edi
  volatile signed __int32 *result; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v27; // [rsp+60h] [rbp+8h] BYREF
  int v28; // [rsp+68h] [rbp+10h] BYREF

  v3 = *a1;
  v5 = a1[2];
  v6 = _InterlockedDecrement((volatile signed __int32 *)v5);
  v7 = ~v6 & 0x80000000;
  if ( (v6 & 0x7FFFFFFF) != 0 )
  {
    v27 = 0;
    while ( (*(_DWORD *)v5 & 0x80000000) != v7 )
      KeYieldProcessorEx(&v27, a2, a3);
  }
  else
  {
    *(_DWORD *)v5 = v7 | *(_DWORD *)(v5 + 4);
    if ( !*(_DWORD *)(v3 + 32) )
    {
      v8 = 48LL * *(_QWORD *)v3 - 0x58000000000LL;
      v9 = 48LL * *(_QWORD *)(v3 + 8) - 0x58000000000LL;
      if ( *(_QWORD *)(v3 + 48) )
        v10 = 2;
      else
        v10 = 1;
      v11 = ExAcquireSpinLockExclusive(&dword_1402FFA80);
      MiLockPageAtDpcInline(v8, v12, v13);
      v14 = *(_QWORD *)(v3 + 40);
      if ( (unsigned int)MiCanStealKernelStack(v8, v10) == 1
        && *(_QWORD *)v8 != -5LL
        && (*(_QWORD *)v8 & 1) != 0
        && v14 == (__int64)(*(_QWORD *)(v8 + 8) << 25) >> 16 )
      {
        if ( *(_QWORD *)(v3 + 48) )
          MiRemoveLockedPageChargeAndDecRef(v8);
        MiCopyKstack(v9, v8, *(_QWORD *)(v3 + 16));
        KeFlushSingleTb(v14, 0, 2u);
        MiSwitchKstackPages(v9, v8);
        *(_BYTE *)(v8 + 34) &= 0xC7u;
        *(_QWORD *)(v8 + 40) &= ~0x200000000000000uLL;
        *(_BYTE *)(v8 + 35) &= ~0x20u;
        *(_DWORD *)(v3 + 32) = 0;
      }
      else
      {
        *(_DWORD *)(v3 + 32) = -1073740748;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v15 = *(_QWORD **)(v3 + 16);
      *v15 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v15) )
        MiWritePteShadow(v15, 0LL);
      v16 = byte_1402FFB5B;
      v17 = 7;
      if ( (byte_1402FFB5B & 0x10) != 0 )
      {
        v18 = MiSystemPartition;
        byte_1402FFB5B &= ~0x10u;
        if ( (byte_1402FFB58 & 7) == 0 )
          v18 = MiPartitionIdToPointer(word_1402FFB34);
        MiAgeWorkingSet((__int64)&dword_1402FFA80, v11, 1, *(unsigned __int16 *)(*((_QWORD *)v18 + 702) + 2358LL));
        v16 = byte_1402FFB5B;
      }
      if ( (v16 & 0x20) != 0 )
      {
        v19 = qword_1402FFB08;
        a3 = qword_1402FFAF8;
        byte_1402FFB5B = v16 & 0xDF;
        while ( a3 > v19 )
        {
          v20 = a3 - v19;
          if ( v17 )
          {
            a2 = qword_1402FFAA8[v17 - 1];
            v21 = a2 <= v20;
            v20 = a2;
            if ( !v21 )
              v20 = a3 - v19;
          }
          if ( v20 )
          {
            MiTrimWorkingSet(v20, (ULONG_PTR)&dword_1402FFA80, v11, v17, 0);
            if ( !v17 )
              break;
            a3 = qword_1402FFAF8;
          }
          --v17;
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_1402FFA80, retaddr);
      else
        dword_1402FFA80 = 0;
      __writecr8(v11);
    }
  }
  v22 = a1[2];
  v23 = _InterlockedDecrement((volatile signed __int32 *)v22);
  v24 = ~v23 & 0x80000000;
  if ( (v23 & 0x7FFFFFFF) != 0 )
  {
    v28 = 0;
    while ( (*(_DWORD *)v22 & 0x80000000) != v24 )
      KeYieldProcessorEx(&v28, a2, a3);
  }
  else
  {
    *(_DWORD *)v22 = v24 | *(_DWORD *)(v22 + 4);
  }
  result = (volatile signed __int32 *)a1[1];
  _InterlockedDecrement(result);
  return result;
}

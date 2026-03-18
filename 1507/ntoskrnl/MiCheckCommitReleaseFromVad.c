/*
 * XREFs of MiCheckCommitReleaseFromVad @ 0x14020EB90
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x14021023C (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x140080948 (MiRotatedToFrameBuffer.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x14020EFDC (MiComputeCommitChargeForZeroPteRange.c)
 *     MiComputeImageVadCommitCharge @ 0x14020F074 (MiComputeImageVadCommitCharge.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiCheckCommitReleaseFromVad(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4, int a5)
{
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rbp
  __int64 v8; // r13
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v12; // ett
  unsigned __int8 v13; // di
  __int64 NextPageTable; // rax
  __int64 v15; // rdx
  __int64 Process; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // r8
  __int64 PrototypePteDirect; // rax
  unsigned __int8 v27; // [rsp+30h] [rbp-58h]
  unsigned __int64 v28; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-48h]
  _BYTE v30[64]; // [rsp+48h] [rbp-40h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v34; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a3;
  v6 = 0LL;
  v8 = a4;
  v9 = 8 * ((*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v10 = 8 * ((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v29 = v10;
  CurrentIrql = KeGetCurrentIrql();
  v27 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a3);
  }
  else
  {
    _m_prefetchw((const void *)a3);
    v12 = *a3 & 0x7FFFFFFF;
    if ( v12 != _InterlockedCompareExchange(a3, v12 + 1, v12) )
      ExpWaitForSpinLockSharedAndAcquire(a3);
  }
  if ( v9 <= v10 )
  {
    v13 = CurrentIrql;
    do
    {
      LOBYTE(a4) = v13;
      NextPageTable = MiGetNextPageTable(v9, v10, 0LL, a4, 0, &v34);
      v17 = NextPageTable;
      if ( NextPageTable != v9 )
      {
        v18 = NextPageTable ? (__int64)(NextPageTable - v9) >> 3 : ((__int64)(v10 - v9) >> 3) + 1;
        v6 += MiComputeCommitChargeForZeroPteRange(v8, v9, v18);
        if ( !v17 )
          break;
      }
      v9 = v17;
      v19 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      if ( v19 > v10 )
        v19 = v10;
      if ( v17 <= v19 )
      {
        while ( 1 )
        {
          v20 = *(_QWORD *)v9;
          if ( v9 + 0x90482413000LL <= 0x7F8
            && (unsigned int)MiPteHasShadow(Process, v15)
            && (v20 & 1) != 0
            && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
          {
            Process = (__int64)KeGetCurrentThread()->ApcState.Process;
            v15 = *(_QWORD *)(Process + 1520);
            if ( v15 )
            {
              v21 = *(_QWORD *)(v15 + 8 * ((v9 >> 3) & 0x1FF));
              if ( (v21 & 0x20) != 0 )
                v20 |= 0x20uLL;
              if ( (v21 & 0x42) != 0 )
                v20 |= 0x42uLL;
            }
          }
          v28 = v20;
          if ( !v20 )
          {
            v22 = MiComputeCommitChargeForZeroPteRange(v8, v9, 1LL);
LABEL_45:
            v6 += v22;
            goto LABEL_52;
          }
          if ( (v20 & 1) != 0 )
            break;
          if ( (v20 & 0x400) != 0 )
          {
            if ( !(unsigned int)MiIsPrototypePteVadLookup(v20) )
            {
              if ( (v20 & 0x800) != 0 )
                goto LABEL_52;
              if ( *(_QWORD *)(a2 + 912) )
              {
                PrototypePteDirect = MiGetPrototypePteDirect(v20, v15, v24, a4);
                if ( MiLocateCloneAddress(a2, PrototypePteDirect) )
                  goto LABEL_52;
              }
              v22 = MiComputeImageVadCommitCharge(v8, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 1LL, v30);
              goto LABEL_45;
            }
            v23 = ((v20 >> 5) & 5) == 5;
            goto LABEL_36;
          }
          if ( (v20 & 0x800) != 0 )
            goto LABEL_52;
          if ( (v20 & 4) != 0 )
          {
            if ( !a5 )
              goto LABEL_52;
            v23 = (unsigned __int16)v20 >> 12 == *(_DWORD *)(a1 + 1044);
            goto LABEL_36;
          }
          if ( ((v20 >> 5) & 0x1F) != 0x10 )
            goto LABEL_51;
LABEL_52:
          v9 += 8LL;
          if ( v9 > v19 )
          {
            v10 = v29;
            v13 = v27;
            goto LABEL_54;
          }
        }
        if ( (v20 & 0x200) == 0 || (*(_BYTE *)(v8 + 48) & 7) == 6 && MiRotatedToFrameBuffer((unsigned __int64 *)v9) )
          goto LABEL_52;
        if ( (unsigned __int64)&STACK[0x90482413038] <= 0x7F8 )
          v20 = MiReadPteShadow(&v28, v20);
        Process = 0x58000000000LL;
        v15 = *(_QWORD *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8);
        if ( v15 >= 0 )
          goto LABEL_52;
        if ( !*(_QWORD *)(a2 + 912) )
        {
LABEL_51:
          ++v6;
          goto LABEL_52;
        }
        v23 = MiLocateCloneAddress(a2, v15 | 0x8000000000000000uLL) == 0LL;
LABEL_36:
        if ( v23 )
          goto LABEL_51;
        goto LABEL_52;
      }
LABEL_54:
      ;
    }
    while ( v9 <= v10 );
    v5 = a3;
    CurrentIrql = v27;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v5, retaddr);
  }
  else
  {
    _InterlockedAnd(v5, 0xBFFFFFFF);
    _InterlockedDecrement(v5);
  }
  __writecr8(CurrentIrql);
  return v6;
}

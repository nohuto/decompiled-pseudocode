/*
 * XREFs of MiDeprioritizeVad @ 0x14012697C
 * Callers:
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiTryLockVad @ 0x140126B04 (MiTryLockVad.c)
 *     MiDeprioritizeVARange @ 0x140126B74 (MiDeprioritizeVARange.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PfCheckDeprioritizeFile @ 0x140443ABC (PfCheckDeprioritizeFile.c)
 */

void __fastcall MiDeprioritizeVad(unsigned int *P, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v7; // ebp
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rsi
  __int64 v10; // rbx
  ULONG_PTR v11; // rax
  __int64 v12; // r13
  int v13; // r13d
  volatile signed __int32 *v14; // rbx
  unsigned __int8 CurrentIrql; // r15
  signed __int32 v16; // eax
  __int16 v17; // ax

  v3 = *(_QWORD *)(a3 + 184);
  --*(_WORD *)(a3 + 486);
  v7 = 0;
  if ( (unsigned int)MiTryLockVad(a3, P) )
  {
    if ( (P[12] & 0x80000000) == 0 )
    {
      v8 = P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32);
      v9 = ((a2 >> 12) - v8) >> 8;
      if ( (P[16] & 0x2000000) != 0 )
      {
        v10 = **((_QWORD **)P + 9);
        v11 = MI_REFERENCE_CONTROL_AREA_FILE(v10);
        v12 = *(_QWORD *)(v11 + 24);
        MI_DEREFERENCE_CONTROL_AREA_FILE(v10, v11);
        if ( (*(_DWORD *)(v3 + 772) & 0x4000) != 0 )
          v13 = PfCheckDeprioritizeFile(*(unsigned int *)(v3 + 1172), v12, v9 << 8);
        else
          v13 = 0;
        v14 = (volatile signed __int32 *)(v3 + 1272);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v14);
        }
        else
        {
          if ( _interlockedbittestandset(v14, 0x1Fu) )
            v7 = ExpWaitForSpinLockExclusiveAndAcquire(v14);
          while ( 1 )
          {
            v16 = *v14;
            if ( (*v14 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v16 & 0x40000000) == 0 )
              _InterlockedCompareExchange(v14, v16 | 0x40000000, v16);
            if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v7);
          }
        }
        if ( v13 == 1 )
        {
          if ( (P[16] & 0x2000000) != 0 )
            MiDeprioritizeVARange((v8 << 12) + (((v9 << 8) - 256) << 12), 256LL, v14, 50LL);
        }
        else
        {
          P[16] &= ~0x2000000u;
        }
        MiUnlockWorkingSetExclusive((__int64)v14, CurrentIrql);
      }
    }
    MiUnlockAndDereferenceVad((char *)P);
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && (P[12] & 0x80000000) != 0 )
      ExFreePoolWithTag(P, 0);
    v17 = *(_WORD *)(a3 + 486) + 1;
    *(_WORD *)(a3 + 486) = v17;
    if ( !v17 && *(_QWORD *)(a3 + 152) != a3 + 152 )
      KiCheckForKernelApcDelivery();
  }
}

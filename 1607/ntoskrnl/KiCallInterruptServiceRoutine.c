/*
 * XREFs of KiCallInterruptServiceRoutine @ 0x14000BE60
 * Callers:
 *     KiScanInterruptObjectList @ 0x14015F2D0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x14015F4A0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x14015F5D0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x14015F700 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401D87C0 (KiInvokeInterruptServiceRoutine.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x14000BE38 (KeFindFirstSetRightGroupAffinity.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x14000C00C (KiIntRedirectQueueRequestOnProcessor.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400D6100 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3B08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401D3BB8 (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall KiCallInterruptServiceRoutine(__int64 a1, char a2)
{
  char v4; // si
  __int64 v5; // r9
  unsigned int v6; // edx
  unsigned int FirstSetRightGroupAffinity; // eax
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *IsrDpcStats; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r12
  volatile signed __int32 *v13; // rcx
  volatile signed __int64 *v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 93) )
  {
    v5 = *(_QWORD *)(a1 + 240);
    if ( v5 )
    {
      if ( *(_BYTE *)(v5 + 16) )
      {
        v6 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
        if ( ((unsigned int)(*(_QWORD *)v5 >> (v6 & 0x3F)) & (v6 >> 6 == *(unsigned __int16 *)(v5 + 8))) == 0 )
        {
          FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(v5);
          KiIntRedirectQueueRequestOnProcessor(FirstSetRightGroupAffinity);
          return 2;
        }
      }
    }
    CurrentPrcb = KeGetCurrentPrcb();
    IsrDpcStats = CurrentPrcb->IsrDpcStats;
    *(_BYTE *)(a1 + 224) = 1;
    CurrentPrcb->IsrDpcStats = (void *)(a1 + 176);
    v11 = __rdtsc();
    *(_QWORD *)(a1 + 184) = v11;
    v12 = v11;
    if ( a2 )
    {
      v13 = *(volatile signed __int32 **)(a1 + 72);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v13);
      }
      else if ( _interlockedbittestandset64(v13, 0LL) )
      {
        KxWaitForSpinLockAndAcquire();
      }
    }
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
    if ( a2 )
    {
      v14 = *(volatile signed __int64 **)(a1 + 72);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v14, retaddr);
      else
        _InterlockedAnd64(v14, 0LL);
    }
    v15 = __rdtsc();
    *(_QWORD *)(a1 + 176) += v15 - *(_QWORD *)(a1 + 184);
    if ( IsrDpcStats != (_QWORD *)1 )
    {
      v16 = v15 - v12;
      if ( *((_BYTE *)IsrDpcStats + 48) )
        IsrDpcStats[1] += v16;
      else
        IsrDpcStats[4] += v16;
    }
    CurrentPrcb->IsrDpcStats = IsrDpcStats;
    *(_BYTE *)(a1 + 224) = 0;
    if ( !v4 )
      return 0;
    ++*(_QWORD *)(a1 + 192);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
  }
  return v4 != 0;
}

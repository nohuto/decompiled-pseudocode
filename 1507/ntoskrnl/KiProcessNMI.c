/*
 * XREFs of KiProcessNMI @ 0x1401FF5DC
 * Callers:
 *     KxNmiInterrupt @ 0x14018E6C0 (KxNmiInterrupt.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     KiAcquireSpinLockCheckForFreeze @ 0x140200EF4 (KiAcquireSpinLockCheckForFreeze.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KiFreezeTargetExecution @ 0x140206774 (KiFreezeTargetExecution.c)
 */

__int64 __fastcall KiProcessNMI(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // rax
  __int64 *v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 Number; // r12
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(_QWORD, unsigned __int64); // r14
  char v16; // bp
  char v17; // al
  void *retaddr; // [rsp+48h] [rbp+0h]

  off_140321B08();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->IpiFrozen == 5 )
  {
    result = KiFreezeTargetExecution(a1, a2);
    if ( KiResumeForReboot && a1 )
    {
      if ( *(_WORD *)(a1 + 368) != 16 )
      {
        *(_WORD *)(a1 + 368) = 16;
        *(_WORD *)(a1 + 392) = 24;
        *(_QWORD *)(a1 + 384) = CurrentPrcb->RspBase;
      }
      *(_DWORD *)(a1 + 376) &= ~0x200u;
      v6 = __readmsr(0xC0000101);
      *(_QWORD *)(a1 + 104) = ((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6;
      result = (__int64)xHalHaltSystem;
      *(_QWORD *)(a1 + 360) = xHalHaltSystem;
      if ( KiKvaShadow )
      {
        v7 = (__int64 *)(CurrentPrcb[-1].PrcbPad140[468] + 5184);
        v8 = 7LL;
        do
        {
          v9 = __readcr3();
          v7[1] = v9;
          result = __readmsr(0xC0000101);
          *v7 = result;
          v7 += 64;
          --v8;
        }
        while ( v8 );
      }
    }
  }
  else
  {
    Number = KeGetCurrentPrcb()->Number;
    v11 = KiProcessorIndexToNumberMappingTable[Number];
    v12 = (unsigned __int64)v11 >> 6;
    v13 = 1LL << (v11 & 0x3F);
    _m_prefetchw(&qword_14031EB38[v12]);
    result = _InterlockedOr64(&qword_14031EB38[v12], v13);
    if ( (v13 & result) == 0 )
    {
      v15 = (__int64 (__fastcall *)(_QWORD, unsigned __int64))KiNmiCallbackListHead;
      v16 = 0;
      if ( !KiNmiCallbackListHead )
        goto LABEL_14;
      do
      {
        LOBYTE(v12) = v16;
        v17 = (*((__int64 (__fastcall **)(_QWORD, unsigned __int64))v15 + 1))(*((_QWORD *)v15 + 2), v12);
        v15 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64))v15;
        v16 |= v17;
      }
      while ( v15 );
      if ( !v16 )
      {
LABEL_14:
        KiAcquireSpinLockCheckForFreeze(v14, a1, a2);
        _InterlockedCompareExchange(&KiBugCheckActive, 1, 0);
        HalHandleNMI(0LL);
        _InterlockedCompareExchange(&KiBugCheckActive, 0, 1);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(&KiNMILock, retaddr);
        else
          _InterlockedAnd64(&KiNMILock, 0LL);
      }
      result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6;
      _InterlockedAnd64(&qword_14031EB38[result], ~(1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)));
    }
  }
  return result;
}

/*
 * XREFs of MiExceptionForMappedVa @ 0x14020DC94
 * Callers:
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiSystemViewCompareVa @ 0x1400FA3C4 (MiSystemViewCompareVa.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiExceptionForMappedVa(unsigned __int64 a1)
{
  _QWORD *v1; // rbp
  unsigned int v2; // edi
  signed __int32 *v3; // rbx
  _KPROCESS *Process; // r15
  unsigned __int8 CurrentIrql; // r14
  signed __int32 v7; // ett
  __int64 v8; // rsi
  int v9; // eax
  unsigned __int64 v10; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v1 = &unk_14034EA70;
  v2 = 0;
  v3 = dword_14034FF40;
  Process = KeGetCurrentThread()->ApcState.Process;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v3);
    }
    else
    {
      _m_prefetchw(v3);
      v7 = *v3 & 0x7FFFFFFF;
      if ( v7 != _InterlockedCompareExchange(v3, v7 + 1, v7) )
        ExpWaitForSpinLockSharedAndAcquire(v3);
    }
    v8 = v1[2];
    if ( v8 )
    {
      do
      {
        v9 = MiSystemViewCompareVa(a1, v8);
        if ( v9 >= 0 )
        {
          if ( v9 <= 0 )
            break;
          v8 = *(_QWORD *)(v8 + 8);
        }
        else
        {
          v8 = *(_QWORD *)v8;
        }
      }
      while ( v8 );
      if ( v8 )
        break;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v3, retaddr);
    }
    else
    {
      _InterlockedAnd(v3, 0xBFFFFFFF);
      _InterlockedDecrement(v3);
    }
    __writecr8(CurrentIrql);
    if ( v1 != (_QWORD *)&unk_14034EA70 )
      return v2;
    v10 = Process[1].ActiveProcessors.Bitmap[2];
    if ( !v10 || Process == PsInitialSystemProcess )
      return v2;
    v3 = (signed __int32 *)(v10 + 2968);
    v1 = (_QWORD *)(v10 + 2880);
  }
  if ( (*(_BYTE *)(v8 + 48) & 2) != 0 )
    v2 = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v3, retaddr);
  }
  else
  {
    _InterlockedAnd(v3, 0xBFFFFFFF);
    _InterlockedDecrement(v3);
  }
  __writecr8(CurrentIrql);
  return v2;
}

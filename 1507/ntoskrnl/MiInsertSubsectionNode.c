/*
 * XREFs of MiInsertSubsectionNode @ 0x14002EB28
 * Callers:
 *     MiAppendSubsectionChain @ 0x140077D64 (MiAppendSubsectionChain.c)
 *     MiCreateDataFileMap @ 0x1404706C4 (MiCreateDataFileMap.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     MiSubsectionCompare @ 0x140123344 (MiSubsectionCompare.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInsertSubsectionNode(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  volatile signed __int32 *v6; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v8; // edi
  signed __int32 v9; // eax
  _QWORD *v10; // rbx
  __int64 result; // rax
  _DWORD *v12; // rcx
  _QWORD *v13; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a1 + 232;
  if ( (_DWORD)a3 )
  {
    CurrentIrql = 17;
  }
  else
  {
    v6 = (volatile signed __int32 *)(a1 + 72);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72);
    }
    else
    {
      v8 = 0;
      if ( _interlockedbittestandset(v6, 0x1Fu) )
        v8 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 72);
      while ( 1 )
      {
        v9 = *v6;
        if ( (*v6 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v9 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v6, v9 | 0x40000000, v9);
        if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v8);
      }
    }
  }
  v10 = *(_QWORD **)v3;
  LOBYTE(a3) = 0;
  if ( *(_QWORD *)v3 )
  {
    while ( 1 )
    {
      if ( (int)MiSubsectionCompare(a2, v10, a3) < 0 )
      {
        v13 = (_QWORD *)*v10;
        if ( !*v10 )
        {
          LOBYTE(a3) = 0;
          break;
        }
      }
      else
      {
        v13 = (_QWORD *)v10[1];
        if ( !v13 )
        {
          LOBYTE(a3) = 1;
          break;
        }
      }
      v10 = v13;
    }
  }
  result = RtlAvlInsertNodeEx(v3, v10, a3, a2 + 56);
  ++*(_QWORD *)(v3 + 8);
  *(_QWORD *)(v3 + 16) = a2;
  if ( CurrentIrql != 17 )
  {
    v12 = (_DWORD *)(a1 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
    else
      *v12 = 0;
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}

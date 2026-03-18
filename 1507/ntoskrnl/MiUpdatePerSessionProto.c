/*
 * XREFs of MiUpdatePerSessionProto @ 0x14021CBD0
 * Callers:
 *     MiCreatePerSessionProtos @ 0x1406A3478 (MiCreatePerSessionProtos.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPerSessionProtosCompare @ 0x14021C688 (MiPerSessionProtosCompare.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUpdatePerSessionProto(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  volatile signed __int32 *v5; // rbx
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v9; // rdi
  bool v10; // r8
  unsigned int v11; // ebp
  _QWORD *v12; // rax
  unsigned int v13; // edi
  signed __int32 v14; // eax
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (volatile signed __int32 *)(a1 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72);
  }
  else
  {
    v13 = 0;
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v13 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 72));
    while ( 1 )
    {
      v14 = *v5;
      if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v14 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v5, v14 | 0x40000000, v14);
      if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v13);
    }
  }
  if ( !a4 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)(a2 + 24), a3);
    goto LABEL_22;
  }
  v9 = *(_QWORD **)(a2 + 24);
  v10 = 0;
  v11 = *(_DWORD *)(a3 + 24);
  if ( !v9 )
    goto LABEL_20;
  while ( (int)MiPerSessionProtosCompare(v11, (__int64)v9) >= 0 )
  {
    v12 = (_QWORD *)v9[1];
    if ( !v12 )
    {
      v10 = 1;
      goto LABEL_20;
    }
LABEL_18:
    v9 = v12;
  }
  v12 = (_QWORD *)*v9;
  if ( *v9 )
    goto LABEL_18;
  v10 = 0;
LABEL_20:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a2 + 24), (unsigned __int64)v9, v10, a3);
LABEL_22:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
  else
    *v5 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

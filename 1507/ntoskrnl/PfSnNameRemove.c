/*
 * XREFs of PfSnNameRemove @ 0x140112FB8
 * Callers:
 *     PfSnNameRemoveAll @ 0x14052B72C (PfSnNameRemoveAll.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnNameRemove(__int64 a1, unsigned __int64 a2)
{
  volatile signed __int32 *v3; // rsi
  unsigned int v5; // edi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v7; // ebx
  signed __int32 v8; // eax
  _RTL_BALANCED_NODE *i; // rbx
  _RTL_BALANCED_NODE *v10; // rax
  _QWORD *v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (volatile signed __int32 *)(a1 + 576);
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 576);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(v3, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 576));
    while ( 1 )
    {
      v8 = *v3;
      if ( (*v3 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v8 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v3, v8 | 0x40000000, v8);
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
  }
  for ( i = *(_RTL_BALANCED_NODE **)(a1 + 520); ; i = i->Children[1] )
  {
    while ( 1 )
    {
      if ( !i )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
        else
          *v3 = 0;
        __writecr8(CurrentIrql);
        return v5;
      }
      v10 = i[1].Children[0];
      if ( (unsigned __int64)v10 <= a2 )
        break;
      i = i->Children[0];
    }
    if ( (unsigned __int64)v10 >= a2 )
      break;
  }
  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 520), i);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
  else
    *v3 = 0;
  __writecr8(CurrentIrql);
  v12 = (_QWORD *)(a1 + 488);
  v13 = 0LL;
  v14 = 4LL;
  if ( a1 + 488 > (unsigned __int64)(a1 + 520) )
    v14 = 0LL;
  if ( v14 )
  {
    do
    {
      if ( *v12 == a2 )
        *v12 = 0LL;
      ++v12;
      ++v13;
    }
    while ( v13 < v14 );
  }
  v5 = 1;
  ExFreePoolWithTag(i, 0);
  return v5;
}

/*
 * XREFs of KiChooseLowestRankedThread @ 0x140098944
 * Callers:
 *     KiSelectReadyThreadEx @ 0x14005DAB0 (KiSelectReadyThreadEx.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400CFF60 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KiSelectReadyThread @ 0x14005BD40 (KiSelectReadyThread.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x140098B9C (KiSelectThreadFromSchedulingGroup.c)
 *     KiSelectThreadFromScbQueue @ 0x14009902C (KiSelectThreadFromScbQueue.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400CE0C0 (KiGetThreadEffectiveRankNonZero.c)
 */

unsigned __int64 *__fastcall KiChooseLowestRankedThread(struct _KPRCB *a1, _KTHREAD *a2, unsigned int a3)
{
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rbp
  unsigned int Priority; // r12d
  unsigned __int64 *result; // rax
  __int64 v8; // rbp
  char v9; // r9
  unsigned __int64 *v10; // r8
  _QWORD *Children; // rbx
  unsigned int v12; // r15d
  __int64 v13; // rdi
  unsigned int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  char v17; // cl
  char v18; // [rsp+68h] [rbp+10h] BYREF

  SchedulingGroup = a2->SchedulingGroup;
  Priority = a3;
  if ( !SchedulingGroup )
    return 0LL;
  v8 = (__int64)SchedulingGroup + a1->ScbOffset;
  if ( !v8 )
    return 0LL;
  if ( a1 == KeGetCurrentPrcb() || (v9 = 0, a2 != a1->CurrentThread) )
    v9 = 1;
  if ( !(unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)a2, v8, a3, v9, 0LL) )
    return 0LL;
  result = KiSelectReadyThread(1, (__int64)a1, v10);
  if ( result )
    return result;
  Children = a1->ScbQueue.Min->Children;
  v12 = *(_DWORD *)(*(_QWORD *)(v8 + 416) + 116LL);
  if ( !Children )
    return 0LL;
  v13 = (__int64)(Children - 11);
  v14 = *((_DWORD *)Children + 7);
  if ( v14 >= v12 )
  {
    if ( v14 == v12 )
    {
      if ( (int)Priority < a2->Priority )
        Priority = a2->Priority;
      while ( 1 )
      {
        result = (unsigned __int64 *)KiSelectThreadFromSchedulingGroup(a1, v13, Priority);
        if ( v13 == v8 )
        {
          v17 = 1;
        }
        else
        {
          v18 = 0;
          if ( result )
            return result;
          if ( !*(_QWORD *)(v13 + 392) )
            goto LABEL_17;
          result = (unsigned __int64 *)KiSelectThreadFromScbQueue(
                                         (int)v13 + 392,
                                         (_DWORD)a1,
                                         Priority,
                                         v8,
                                         (__int64)&v18);
          v17 = v18;
        }
        if ( result )
          return result;
        if ( v17 )
          return 0LL;
LABEL_17:
        v15 = (_QWORD *)Children[1];
        v16 = Children;
        if ( v15 )
        {
          do
          {
            Children = v15;
            v15 = (_QWORD *)*v15;
          }
          while ( v15 );
        }
        else
        {
          while ( 1 )
          {
            Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !Children || (_QWORD *)*Children == v16 )
              break;
            v16 = Children;
          }
        }
        if ( Children )
        {
          v13 = (__int64)(Children - 11);
          if ( *((_DWORD *)Children + 7) == v12 )
            continue;
        }
        return 0LL;
      }
    }
    return 0LL;
  }
  while ( !*(_WORD *)(v13 + 114) )
    v13 = *(_QWORD *)(v13 + 400) - 88LL;
  return (unsigned __int64 *)KiSelectThreadFromSchedulingGroup(a1, v13, 0LL);
}

/*
 * XREFs of KiChooseLowestRankedThread @ 0x1400C34F4
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x14007B4A0 (KiGroupSchedulingQuantumEnd.c)
 *     KiSelectReadyThreadEx @ 0x14007CE70 (KiSelectReadyThreadEx.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x14002A710 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectReadyThread @ 0x1400832A0 (KiSelectReadyThread.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1400C375C (KiSelectThreadFromSchedulingGroup.c)
 *     KiSelectThreadFromScbQueue @ 0x1400C3BF4 (KiSelectThreadFromScbQueue.c)
 */

__int64 __fastcall KiChooseLowestRankedThread(struct _KPRCB *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v7; // rbp
  char v8; // r8
  __int64 v9; // r8
  __int64 result; // rax
  _QWORD *Children; // rbx
  unsigned int v12; // r15d
  __int64 v13; // rdi
  unsigned int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  char v17; // cl
  char v18; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 104);
  if ( !v3 )
    return 0LL;
  v7 = a1->ScbOffset + v3;
  if ( !v7 )
    return 0LL;
  if ( a1 == KeGetCurrentPrcb() || (v8 = 0, (_KTHREAD *)a2 != a1->CurrentThread) )
    v8 = 1;
  if ( !(unsigned int)KiGetThreadEffectiveRankNonZero(a2, v7, v8) )
    return 0LL;
  result = KiSelectReadyThread(1, (__int64)a1, v9);
  if ( result )
    return result;
  Children = a1->ScbQueue.Min->Children;
  v12 = *(_DWORD *)(*(_QWORD *)(v7 + 400) + 116LL);
  if ( !Children )
    return 0LL;
  v13 = (__int64)(Children - 11);
  v14 = *((_DWORD *)Children + 7);
  if ( v14 >= v12 )
  {
    if ( v14 != v12 )
      return 0LL;
    if ( (int)a3 < *(char *)(a2 + 195) )
      a3 = *(char *)(a2 + 195);
    while ( 1 )
    {
      result = KiSelectThreadFromSchedulingGroup(a1, v13, a3);
      if ( v13 == v7 )
      {
        v17 = 1;
      }
      else
      {
        v18 = 0;
        if ( result )
          return result;
        if ( !*(_QWORD *)(v13 + 376) )
          goto LABEL_17;
        result = KiSelectThreadFromScbQueue((int)v13 + 376, (_DWORD)a1, a3, v7, (__int64)&v18);
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
  while ( !*(_WORD *)(v13 + 114) )
    v13 = *(_QWORD *)(v13 + 384) - 88LL;
  return KiSelectThreadFromSchedulingGroup(a1, v13, 0LL);
}

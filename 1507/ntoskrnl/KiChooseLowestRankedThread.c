/*
 * XREFs of KiChooseLowestRankedThread @ 0x1400ED5E4
 * Callers:
 *     KiSelectReadyThreadEx @ 0x1400A24B0 (KiSelectReadyThreadEx.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400A3400 (KiGroupSchedulingQuantumEnd.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 * Callees:
 *     KiSelectThreadFromScbQueue @ 0x14000644C (KiSelectThreadFromScbQueue.c)
 *     KiSelectReadyThread @ 0x1400A19C0 (KiSelectReadyThread.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1400D3570 (KiSelectThreadFromSchedulingGroup.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 */

__int64 __fastcall KiChooseLowestRankedThread(struct _KPRCB *a1, __int64 a2, signed int a3)
{
  __int64 v3; // rbp
  _QWORD *v7; // rbp
  char v8; // r8
  __int64 result; // rax
  _QWORD *Children; // rbx
  unsigned int v11; // r15d
  __int64 v12; // rdi
  unsigned int v13; // eax
  char v14; // cl
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  char v17; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 104);
  if ( !v3 )
    return 0LL;
  v7 = (_QWORD *)(a1->ScbOffset + v3);
  if ( !v7 )
    return 0LL;
  if ( a1 == KeGetCurrentPrcb() || (v8 = 0, (_KTHREAD *)a2 != a1->CurrentThread) )
    v8 = 1;
  if ( !(unsigned int)KiGetThreadEffectiveRankNonZero(a2, (__int64)v7, v8) )
    return 0LL;
  result = KiSelectReadyThread(1, (__int64)a1);
  if ( result )
    return result;
  Children = a1->ScbQueue.Min->Children;
  v11 = *(_DWORD *)(v7[50] + 116LL);
  if ( !Children )
    return 0LL;
  v12 = (__int64)(Children - 11);
  v13 = *((_DWORD *)Children + 7);
  if ( v13 >= v11 )
  {
    if ( v13 == v11 )
    {
      if ( a3 < *(char *)(a2 + 195) )
        a3 = *(char *)(a2 + 195);
      while ( 1 )
      {
        result = KiSelectThreadFromSchedulingGroup((__int64)a1, v12, a3);
        if ( (_QWORD *)v12 == v7 )
        {
          v14 = 1;
        }
        else
        {
          v17 = 0;
          if ( result )
            return result;
          if ( !*(_QWORD *)(v12 + 376) )
            goto LABEL_23;
          result = KiSelectThreadFromScbQueue(v12 + 376, (__int64)a1, a3, v7, &v17);
          v14 = v17;
        }
        if ( result )
          return result;
        if ( v14 )
          return 0LL;
LABEL_23:
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
          v12 = (__int64)(Children - 11);
          if ( *((_DWORD *)Children + 7) == v11 )
            continue;
        }
        return 0LL;
      }
    }
    return 0LL;
  }
  while ( !*(_WORD *)(v12 + 114) )
    v12 = *(_QWORD *)(v12 + 384) - 88LL;
  return KiSelectThreadFromSchedulingGroup((__int64)a1, v12, 0);
}

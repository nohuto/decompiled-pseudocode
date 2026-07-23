/*
 * XREFs of KiSelectThreadFromScbQueue @ 0x14009902C
 * Callers:
 *     KiChooseLowestRankedThread @ 0x140098944 (KiChooseLowestRankedThread.c)
 *     KiSelectThreadFromScbQueue @ 0x14009902C (KiSelectThreadFromScbQueue.c)
 * Callees:
 *     KiSelectThreadFromSchedulingGroup @ 0x140098B9C (KiSelectThreadFromSchedulingGroup.c)
 *     KiSelectThreadFromScbQueue @ 0x14009902C (KiSelectThreadFromScbQueue.c)
 */

__int64 __fastcall KiSelectThreadFromScbQueue(__int64 a1, __int64 a2, int a3, __int64 a4, _BYTE *a5)
{
  _QWORD *v5; // rbx
  __int64 v7; // r10
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 result; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v14; // [rsp+68h] [rbp+20h]

  v14 = a4;
  v5 = *(_QWORD **)(a1 + 8);
  v7 = a2;
  if ( !v5 )
    return 0LL;
  v8 = 1 << a3;
  while ( 1 )
  {
    v9 = (__int64)(v5 - 11);
    if ( *((unsigned __int16 *)v5 + 13) >= v8 )
      break;
    if ( v9 == a4 )
    {
      *a5 = 1;
      return 0LL;
    }
    if ( *(_QWORD *)(v9 + 392) )
    {
      result = KiSelectThreadFromScbQueue((int)v9 + 392, v7, a3, a4, (__int64)a5);
      if ( result )
        return result;
      v7 = a2;
      a4 = v14;
    }
    if ( !*a5 )
    {
      v11 = (_QWORD *)v5[1];
      v12 = v5;
      if ( v11 )
      {
        do
        {
          v5 = v11;
          v11 = (_QWORD *)*v11;
        }
        while ( v11 );
      }
      else
      {
        while ( 1 )
        {
          v5 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v5 || (_QWORD *)*v5 == v12 )
            break;
          v12 = v5;
        }
      }
      if ( v5 )
        continue;
    }
    return 0LL;
  }
  return KiSelectThreadFromSchedulingGroup(v7, v9, a3);
}

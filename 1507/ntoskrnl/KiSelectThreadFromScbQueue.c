/*
 * XREFs of KiSelectThreadFromScbQueue @ 0x14000644C
 * Callers:
 *     KiSelectThreadFromScbQueue @ 0x14000644C (KiSelectThreadFromScbQueue.c)
 *     KiChooseLowestRankedThread @ 0x1400ED5E4 (KiChooseLowestRankedThread.c)
 * Callees:
 *     KiSelectThreadFromScbQueue @ 0x14000644C (KiSelectThreadFromScbQueue.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1400D3570 (KiSelectThreadFromSchedulingGroup.c)
 */

__int64 __fastcall KiSelectThreadFromScbQueue(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _BYTE *a5)
{
  _QWORD *v5; // rbx
  __int64 v7; // r10
  unsigned int v8; // esi
  _QWORD *v9; // rdx
  __int64 result; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v14; // [rsp+68h] [rbp+20h]

  v14 = a4;
  v5 = *(_QWORD **)(a1 + 8);
  v7 = a2;
  if ( v5 )
  {
    v8 = 1 << a3;
    while ( 1 )
    {
      v9 = v5 - 11;
      if ( *((unsigned __int16 *)v5 + 13) >= v8 )
        return KiSelectThreadFromSchedulingGroup(v7, v9, a3);
      if ( v9 == a4 )
        break;
      if ( v9[47] )
      {
        result = KiSelectThreadFromScbQueue((int)v9 + 376, v7, a3, (_DWORD)a4, (__int64)a5);
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
    *a5 = 1;
  }
  return 0LL;
}

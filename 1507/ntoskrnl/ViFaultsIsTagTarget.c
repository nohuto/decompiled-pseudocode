/*
 * XREFs of ViFaultsIsTagTarget @ 0x14074713C
 * Callers:
 *     VfFaultsInjectPoolAllocationFailure @ 0x140746494 (VfFaultsInjectPoolAllocationFailure.c)
 * Callees:
 *     ViFaultsIsTagPresentInList @ 0x1407470BC (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall ViFaultsIsTagTarget(int a1)
{
  unsigned int v1; // r9d
  __int64 v2; // rdx
  char v3; // r8
  __int64 result; // rax
  unsigned int v5; // r9d
  __int64 v6; // rdx
  char v7; // r8
  int v8; // [rsp+30h] [rbp+8h]
  int v9; // [rsp+38h] [rbp+10h]

  v1 = 0;
  v9 = 1786137926;
  v2 = 0LL;
  v8 = a1;
  do
  {
    v3 = *((_BYTE *)&v9 + v2);
    if ( v3 == 42 )
      break;
    if ( v3 != 63 && (v1 != 3 || (*((_BYTE *)&v8 + v2) & 0x7F) != v3) && *((_BYTE *)&v8 + v2) != v3 )
    {
      v5 = 0;
      v9 = 1819692358;
      v6 = 0LL;
      v8 = a1;
      while ( 1 )
      {
        v7 = *((_BYTE *)&v9 + v6);
        if ( v7 == 42 )
          break;
        if ( v7 != 63 && (v5 != 3 || (*((_BYTE *)&v8 + v6) & 0x7F) != v7) && *((_BYTE *)&v8 + v6) != v7 )
        {
          result = ViFaultTagsList == &ViFaultTagsList;
          if ( ViFaultTagsList != &ViFaultTagsList )
          {
            result = ViFaultsIsTagPresentInList(a1);
            if ( (_DWORD)result )
              ++dword_1407632D8;
            else
              ++dword_1407632D4;
          }
          return result;
        }
        ++v5;
        ++v6;
        if ( v5 >= 4 )
          return 0LL;
      }
      return 0LL;
    }
    ++v1;
    ++v2;
  }
  while ( v1 < 4 );
  return 0LL;
}

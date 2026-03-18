/*
 * XREFs of ViFaultsIsTagPresentInList @ 0x1407470BC
 * Callers:
 *     ViFaultsAddTagNoDuplicates @ 0x140746BA4 (ViFaultsAddTagNoDuplicates.c)
 *     ViFaultsIsTagTarget @ 0x14074713C (ViFaultsIsTagTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViFaultsIsTagPresentInList(int a1)
{
  PVOID *v1; // rdx
  unsigned int v2; // r8d
  int v3; // r10d
  __int64 i; // r9
  char v5; // r11
  int v7; // [rsp+10h] [rbp+10h]
  int v8; // [rsp+18h] [rbp+18h]

  v1 = (PVOID *)ViFaultTagsList;
  v2 = 0;
  if ( ViFaultTagsList != &ViFaultTagsList )
  {
    v7 = a1;
    do
    {
      v3 = 0;
      v8 = *((_DWORD *)v1 + 4);
      for ( i = 0LL; ; ++i )
      {
        v5 = *((_BYTE *)&v8 + i);
        if ( v5 == 42 )
          return 1;
        if ( v5 != 63 && (v3 != 3 || (*((_BYTE *)&v7 + i) & 0x7F) != v5) && *((_BYTE *)&v7 + i) != v5 )
          break;
        if ( (unsigned int)++v3 >= 4 )
          return 1;
      }
      v1 = (PVOID *)*v1;
    }
    while ( v1 != &ViFaultTagsList );
  }
  return v2;
}

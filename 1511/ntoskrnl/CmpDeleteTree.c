/*
 * XREFs of CmpDeleteTree @ 0x14050FC98
 * Callers:
 *     CmpSyncSubKeysAfterDelete @ 0x14050EF5C (CmpSyncSubKeysAfterDelete.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 * Callees:
 *     CmpFreeKeyByCell @ 0x1403D84C4 (CmpFreeKeyByCell.c)
 *     CmpFindSubKeyByNumber @ 0x140523D14 (CmpFindSubKeyByNumber.c)
 */

char __fastcall CmpDeleteTree(ULONG_PTR a1, unsigned int a2)
{
  unsigned int i; // ebp
  _DWORD *v5; // rax
  unsigned int v6; // ebx
  int SubKeyByNumber; // ebx
  __int64 v8; // rax
  int v9; // ebx
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = -1;
  for ( i = a2; ; i = v6 )
  {
    while ( 1 )
    {
      v5 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, i, &v12);
      if ( !v5 )
        return 0;
      v6 = v5[4];
      if ( !(v5[5] + v5[6]) )
        break;
      SubKeyByNumber = CmpFindSubKeyByNumber(a1, v5, 0LL, &v11);
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v12);
      if ( SubKeyByNumber < 0 )
        return 0;
      if ( v11 == -1 )
        return 0;
      v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, v11, &v12);
      if ( !v8 )
        return 0;
      v9 = *(_DWORD *)(v8 + 20) + *(_DWORD *)(v8 + 24);
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v12);
      if ( v9 )
      {
        i = v11;
      }
      else if ( (int)CmpFreeKeyByCell(a1, v11, 1) < 0 )
      {
        return 0;
      }
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v12);
    if ( i == a2 )
      break;
  }
  return 1;
}

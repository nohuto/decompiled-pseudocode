/*
 * XREFs of CmpDeleteTree @ 0x14060E29C
 * Callers:
 *     CmpSyncSubKeysAfterDelete @ 0x140609D10 (CmpSyncSubKeysAfterDelete.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 * Callees:
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     CmpFindSubKeyByNumber @ 0x140437590 (CmpFindSubKeyByNumber.c)
 */

char __fastcall CmpDeleteTree(ULONG_PTR a1, unsigned int a2)
{
  unsigned int i; // ebp
  _DWORD *v5; // rax
  unsigned int v6; // ebx
  int SubKeyByNumber; // ebx
  __int64 v8; // rax
  int v9; // ebx
  int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF

  v11 = -1;
  v12 = 0;
  for ( i = a2; ; i = v6 )
  {
    while ( 1 )
    {
      v5 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, i, &v11);
      if ( !v5 )
        return 0;
      v6 = v5[4];
      if ( !(v5[5] + v5[6]) )
        break;
      SubKeyByNumber = CmpFindSubKeyByNumber(a1, v5, 0, &v13);
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v11);
      if ( SubKeyByNumber < 0 )
        return 0;
      if ( v13 == -1 )
        return 0;
      v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, v13, &v11);
      if ( !v8 )
        return 0;
      v9 = *(_DWORD *)(v8 + 20) + *(_DWORD *)(v8 + 24);
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v11);
      if ( v9 )
      {
        i = v13;
      }
      else if ( (int)CmpFreeKeyByCell(a1, v13, 1) < 0 )
      {
        return 0;
      }
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v11);
    if ( i == a2 )
      break;
  }
  return 1;
}

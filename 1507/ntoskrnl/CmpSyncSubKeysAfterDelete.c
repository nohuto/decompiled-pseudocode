/*
 * XREFs of CmpSyncSubKeysAfterDelete @ 0x140660848
 * Callers:
 *     CmpCopySyncTree2 @ 0x1405850E0 (CmpCopySyncTree2.c)
 * Callees:
 *     CmpFreeKeyByCell @ 0x140449FBC (CmpFreeKeyByCell.c)
 *     CmpFindSubKeyByNumber @ 0x1404C7350 (CmpFindSubKeyByNumber.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404CA940 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpInitializeKeyNameString @ 0x1405855C4 (CmpInitializeKeyNameString.c)
 *     CmpDeleteTree @ 0x14066483C (CmpDeleteTree.c)
 */

char __fastcall CmpSyncSubKeysAfterDelete(__int64 a1, __int64 a2, ULONG_PTR a3, _DWORD *a4, _WORD *a5)
{
  unsigned int v5; // r15d
  char v9; // bp
  int SubKeyByNumber; // edi
  ULONG_PTR v11; // rax
  ULONG_PTR v12; // rsi
  __int64 v13; // r9
  unsigned int v15; // [rsp+20h] [rbp-48h] BYREF
  int v16; // [rsp+24h] [rbp-44h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int16 v18[8]; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  v16 = -1;
  v9 = 1;
  while ( 1 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(a3, a4, v5, &v15);
    if ( SubKeyByNumber < 0 )
      return 0;
    if ( v15 == -1 )
      goto LABEL_15;
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a3 + 8))(a3, v15, &v16);
    v12 = v11;
    if ( !v11 )
    {
      SubKeyByNumber = -1073741670;
LABEL_13:
      if ( v12 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v16);
LABEL_15:
      if ( SubKeyByNumber >= 0 )
        return v9;
      return 0;
    }
    CmpInitializeKeyNameString(v11, (__int64)v18, a5);
    CmpFindSubKeyByNameWithStatus(a1, a2, v18, &v17);
    if ( v17 == -1 )
    {
      if ( *(_DWORD *)(v12 + 20) + *(_DWORD *)(v12 + 24) )
        CmpDeleteTree(a3, v15);
      SubKeyByNumber = CmpFreeKeyByCell(a3, v15, 1, v13);
      if ( SubKeyByNumber < 0 )
        goto LABEL_13;
    }
    else
    {
      ++v5;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v16);
  }
}

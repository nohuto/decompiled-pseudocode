/*
 * XREFs of CmpSyncSubKeysAfterDelete @ 0x14050EF5C
 * Callers:
 *     CmpCopySyncTree2 @ 0x14050F068 (CmpCopySyncTree2.c)
 * Callees:
 *     CmpFreeKeyByCell @ 0x1403D84C4 (CmpFreeKeyByCell.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1403FE290 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpInitializeKeyNameString @ 0x14050F568 (CmpInitializeKeyNameString.c)
 *     CmpDeleteTree @ 0x14050FC98 (CmpDeleteTree.c)
 *     CmpFindSubKeyByNumber @ 0x140523D14 (CmpFindSubKeyByNumber.c)
 */

char __fastcall CmpSyncSubKeysAfterDelete(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r15d
  char v9; // bp
  int SubKeyByNumber; // edi
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v14; // [rsp+20h] [rbp-48h] BYREF
  int v15; // [rsp+24h] [rbp-44h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-40h] BYREF
  UNICODE_STRING v17; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  v15 = -1;
  v9 = 1;
  while ( 1 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(a3, a4, v5, &v14);
    if ( SubKeyByNumber < 0 )
      return 0;
    if ( v14 == -1 )
      goto LABEL_12;
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a3 + 8))(a3, v14, &v15);
    v12 = v11;
    if ( !v11 )
    {
      SubKeyByNumber = -1073741670;
LABEL_16:
      if ( v12 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v15);
LABEL_12:
      if ( SubKeyByNumber >= 0 )
        return v9;
      return 0;
    }
    CmpInitializeKeyNameString(v11, &v17, a5);
    CmpFindSubKeyByNameWithStatus(a1, a2, &v17, &v16);
    if ( v16 == -1 )
    {
      if ( *(_DWORD *)(v12 + 20) + *(_DWORD *)(v12 + 24) )
        CmpDeleteTree(a3, v14);
      SubKeyByNumber = CmpFreeKeyByCell(a3, v14, 1);
      if ( SubKeyByNumber < 0 )
        goto LABEL_16;
    }
    else
    {
      ++v5;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v15);
  }
}

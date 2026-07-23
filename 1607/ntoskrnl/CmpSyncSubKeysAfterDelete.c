/*
 * XREFs of CmpSyncSubKeysAfterDelete @ 0x140609D10
 * Callers:
 *     CmpCopySyncTree2 @ 0x1406082F4 (CmpCopySyncTree2.c)
 * Callees:
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     CmpFindSubKeyByNumber @ 0x140437590 (CmpFindSubKeyByNumber.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404F54C0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpInitializeKeyNameString @ 0x140608D88 (CmpInitializeKeyNameString.c)
 *     CmpDeleteTree @ 0x14060E29C (CmpDeleteTree.c)
 */

char __fastcall CmpSyncSubKeysAfterDelete(__int64 a1, __int64 a2, ULONG_PTR a3, _DWORD *a4, _WORD *a5)
{
  unsigned int v7; // r12d
  char v8; // r14
  int SubKeyByNumber; // edi
  ULONG_PTR v10; // rax
  ULONG_PTR v11; // rsi
  unsigned int v13; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v14; // [rsp+24h] [rbp-1Ch] BYREF
  _DWORD v15[2]; // [rsp+28h] [rbp-18h] BYREF
  __m128i v16; // [rsp+30h] [rbp-10h] BYREF

  v15[0] = -1;
  v7 = 0;
  v15[1] = 0;
  v8 = 1;
  while ( 1 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(a3, a4, v7, &v13);
    if ( SubKeyByNumber < 0 )
      return 0;
    if ( v13 == -1 )
      goto LABEL_15;
    v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v13, v15);
    v11 = v10;
    if ( !v10 )
    {
      SubKeyByNumber = -1073741670;
LABEL_13:
      if ( v11 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v15);
LABEL_15:
      if ( SubKeyByNumber >= 0 )
        return v8;
      return 0;
    }
    CmpInitializeKeyNameString(v10, (__int64)&v16, a5);
    CmpFindSubKeyByNameWithStatus(a1, a2, &v16, &v14);
    if ( v14 == -1 )
    {
      if ( *(_DWORD *)(v11 + 20) + *(_DWORD *)(v11 + 24) )
        CmpDeleteTree(a3, v13);
      SubKeyByNumber = CmpFreeKeyByCell(a3, v13, 1);
      if ( SubKeyByNumber < 0 )
        goto LABEL_13;
    }
    else
    {
      ++v7;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v15);
  }
}

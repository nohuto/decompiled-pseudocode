/*
 * XREFs of MNFindItemInColumn @ 0x1C023523C
 * Callers:
 *     xxxMNKeyDown @ 0x1C020F844 (xxxMNKeyDown.c)
 * Callees:
 *     MNFindNextValidItem @ 0x1C0235330 (MNFindNextValidItem.c)
 */

__int64 __fastcall MNFindItemInColumn(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // ebp
  unsigned int v7; // r13d
  int v9; // esi
  int v10; // r15d
  __int64 v12; // r12
  unsigned int v13; // eax
  int v14; // r9d
  int v15; // eax
  int v16; // edx
  int v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+24h] [rbp-44h]
  int ValidItem; // [rsp+70h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 52);
  v5 = a2;
  v6 = -1;
  v7 = a3;
  ValidItem = MNFindNextValidItem(a1, 0xFFFFFFFFLL, a3, 0LL);
  if ( ValidItem != -1 )
  {
    v9 = 20000;
    v10 = 20000;
    if ( (unsigned int)v5 >= v4 )
      return 0xFFFFFFFFLL;
    v12 = *(_QWORD *)(a1 + 80);
    v17 = *(_DWORD *)(152 * v5 + v12 + 72);
    v18 = *(_DWORD *)(152 * v5 + v12 + 76);
    while ( v4 )
    {
      --v4;
      v13 = MNFindNextValidItem(a1, (unsigned int)v5, v7, 0LL);
      v5 = v13;
      if ( v13 == ValidItem || v13 == -1 )
        break;
      v15 = v17 - *(_DWORD *)(152LL * v13 + v12 + 72);
      v16 = v18 - *(_DWORD *)(152 * v5 + v12 + 76);
      if ( v15 < 0 )
        v15 = -v15;
      if ( v16 < 0 )
        v16 = *(_DWORD *)(152 * v5 + v12 + 76) - v18;
      if ( v16 < v9 && (a4 != v14 || v15) && v15 <= v10 )
      {
        v10 = v15;
        v9 = v16;
        v6 = v5;
      }
    }
  }
  return v6;
}

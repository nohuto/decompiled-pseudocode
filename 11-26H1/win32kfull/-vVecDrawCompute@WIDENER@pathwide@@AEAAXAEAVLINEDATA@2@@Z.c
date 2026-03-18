/*
 * XREFs of ?vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x14010B0D4
 * Callers:
 *     ?vAddEndCap@WIDENER@pathwide@@IEAAXXZ @ 0x14010A494 (-vAddEndCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@pathwide@@IEAAXXZ @ 0x14010AAB8 (-vAddStartCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x14010B518 (-vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x14010BA78 (-vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall pathwide::WIDENER::vVecDrawCompute(pathwide::WIDENER *this, struct pathwide::LINEDATA *a2)
{
  int *v2; // rbp
  unsigned __int64 *v3; // r15
  _DWORD *v4; // rbx
  unsigned __int64 *v5; // rdi
  __int64 *v6; // r14
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r12
  char *v9; // rsi
  unsigned int v10; // ecx
  char *i; // r10
  char *v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  _DWORD *v20; // rsi
  __int64 v21; // r9
  unsigned __int64 v22; // r10
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  _DWORD *v25; // rax
  int *v26; // [rsp+30h] [rbp+8h]

  v2 = (int *)((char *)a2 + 52);
  v3 = (unsigned __int64 *)((char *)a2 + 32);
  v4 = *(_DWORD **)(*((_QWORD *)this + 103) + 32LL);
  *((_QWORD *)a2 + 1) = v4;
  if ( *(_QWORD *)(*((_QWORD *)this + 103) + 32LL) == *(_QWORD *)(*((_QWORD *)this + 103) + 40LL) )
  {
    v5 = (unsigned __int64 *)((char *)a2 + 24);
    v6 = (__int64 *)((char *)a2 + 32);
    v26 = (int *)((char *)a2 + 52);
    v7 = *((int *)a2 + 12) * (__int64)(v4[9] - v4[7]) - *v2 * (__int64)(v4[8] - v4[6]);
    *((_QWORD *)a2 + 3) = v7;
    v8 = v7 >> 63;
    *v3 = -(__int64)v7;
  }
  else
  {
    v20 = v4;
    while ( 1 )
    {
      v6 = (__int64 *)((char *)a2 + 32);
      v21 = *((int *)a2 + 12);
      v5 = (unsigned __int64 *)((char *)a2 + 24);
      v26 = (int *)((char *)a2 + 52);
      v22 = v21 * (v20[9] - v20[7]) - *v2 * (__int64)(v20[8] - v20[6]);
      *((_QWORD *)a2 + 3) = v22;
      v23 = (unsigned int)(v20[5] - 2);
      LODWORD(v8) = v22 >> 63;
      v24 = v21 * (v20[2 * v23 + 9] - v20[2 * v23 + 7]) - *v2 * (__int64)(v20[2 * v23 + 8] - v20[2 * v23 + 6]);
      *v3 = v24;
      if ( v24 >> 63 != (_DWORD)v8 )
        break;
      v25 = *(_DWORD **)v20;
      v26 = (int *)((char *)a2 + 52);
      v20 = v25;
      if ( !v25 )
        break;
      *((_QWORD *)a2 + 1) = v25;
      v4 = v25;
    }
  }
  v9 = (char *)(v4 + 6);
  v10 = *(_DWORD *)a2 | 1;
  if ( !(_DWORD)v8 )
    v10 = *(_DWORD *)a2 & 0xFFFFFFFE;
  *(_DWORD *)a2 = v10;
  for ( i = (char *)&v4[2 * (v4[5] - 2) + 6]; ; v9 += 8 * ((i - v9) >> 4) )
  {
    while ( 1 )
    {
      v12 = &v9[8 * ((i - v9) >> 4)];
      v13 = *((int *)a2 + 12) * (__int64)(*((_DWORD *)v12 + 3) - *((_DWORD *)v12 + 1))
          - *v26 * (__int64)(*((_DWORD *)v12 + 2) - *(_DWORD *)v12);
      if ( v13 >> 63 == (_DWORD)v8 )
        break;
      *v6 = v13;
      if ( v12 == v9 + 8 )
        goto LABEL_10;
      i = &v9[8 * ((i - v9) >> 4)];
    }
    *v5 = v13;
    if ( i == v12 + 8 )
      break;
  }
  v12 = i;
LABEL_10:
  *((_QWORD *)a2 + 2) = v12;
  v14 = -(__int64)*v5;
  if ( (__int64)*v5 > 0 )
    v14 = *v5;
  v15 = *v6;
  *v5 = v14;
  v16 = -v15;
  if ( v15 > 0 )
    v16 = v15;
  v17 = *(_DWORD *)a2;
  *v6 = v16;
  v18 = *(_DWORD *)v12;
  if ( (v17 & 1) != 0 )
  {
    *((_DWORD *)a2 + 18) = -v18;
    v19 = -*((_DWORD *)v12 + 1);
  }
  else
  {
    *((_DWORD *)a2 + 18) = v18;
    v19 = *((_DWORD *)v12 + 1);
  }
  *((_DWORD *)a2 + 19) = v19;
  *(_DWORD *)a2 |= 8u;
  *((_DWORD *)a2 + 18) = ((*((int *)a2 + 18) >> 31) + *((_DWORD *)a2 + 18) + 4) & 0xFFFFFFF8;
  *((_DWORD *)a2 + 19) = ((*((int *)a2 + 19) >> 31) + *((_DWORD *)a2 + 19) + 4) & 0xFFFFFFF8;
}

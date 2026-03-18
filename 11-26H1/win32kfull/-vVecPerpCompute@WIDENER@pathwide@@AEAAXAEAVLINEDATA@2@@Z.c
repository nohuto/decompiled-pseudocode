/*
 * XREFs of ?vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x14010BA78
 * Callers:
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x140108988 (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?vAddEndCap@WIDENER@pathwide@@IEAAXXZ @ 0x14010A494 (-vAddEndCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@pathwide@@IEAAXXZ @ 0x14010AAB8 (-vAddStartCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x14010B518 (-vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?vecOutPerp@WIDENER@pathwide@@IEAA?AVEVECTORFX@@XZ @ 0x14010B9E8 (-vecOutPerp@WIDENER@pathwide@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@pathwide@@IEAA?AVEVECTORFX@@XZ @ 0x14010BA30 (-vecInPerp@WIDENER@pathwide@@IEAA-AVEVECTORFX@@XZ.c)
 * Callees:
 *     ?vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x14010B0D4 (-vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 */

void __fastcall pathwide::WIDENER::vVecPerpCompute(pathwide::WIDENER *this, struct pathwide::LINEDATA *a2)
{
  int *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // esi
  int v7; // ebp
  int v8; // r10d
  int v9; // r11d
  __int64 v10; // rdi
  int v11; // esi
  int v12; // ebp
  int v13; // eax
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned int v18; // r15d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r14
  unsigned int v21; // edi
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // edx

  if ( (*(_DWORD *)a2 & 8) == 0 )
    pathwide::WIDENER::vVecDrawCompute(this, a2);
  v3 = (int *)*((_QWORD *)a2 + 2);
  v4 = *((_QWORD *)a2 + 3);
  v5 = *((_QWORD *)a2 + 4);
  v6 = *v3;
  v7 = v3[1];
  if ( v4 > v5 )
  {
    v8 = v3[2] - v6;
    v9 = v3[3] - v7;
  }
  else
  {
    v8 = v6 - *(v3 - 2);
    v9 = v7 - *(v3 - 1);
  }
  v10 = v5 + v4;
  v11 = v6 - (v8 >> 1);
  v12 = v7 - (v9 >> 1);
  v13 = -v8;
  if ( v8 > 0 )
    v13 = v8;
  v14 = v4 * v13;
  v15 = -v9;
  if ( v9 > 0 )
    v15 = v9;
  v16 = v4 * v15;
  if ( v10 )
  {
    if ( v10 >= 0xFFFFFFFFLL )
    {
      v18 = 0;
      LODWORD(v20) = 0;
      v14 /= v10;
      v19 = v16 / v10;
      goto LABEL_15;
    }
    if ( v14 < 0 )
    {
      v17 = -v14 % (unsigned __int64)(unsigned int)v10;
      v14 = -(__int64)(-v14 / (unsigned __int64)(unsigned int)v10);
    }
    else
    {
      v17 = v14 % (unsigned __int64)(unsigned int)v10;
      v14 /= (unsigned __int64)(unsigned int)v10;
    }
    v18 = v17;
    if ( v16 >= 0 )
    {
      v19 = v16 / (unsigned __int64)(unsigned int)v10;
      v20 = v16 % (unsigned __int64)(unsigned int)v10;
LABEL_15:
      LODWORD(v16) = v19;
      goto LABEL_16;
    }
    v20 = -v16 % (unsigned __int64)(unsigned int)v10;
    v16 = -(__int64)(-v16 / (unsigned __int64)(unsigned int)v10);
  }
  else
  {
    v18 = 0;
    LODWORD(v20) = 0;
  }
LABEL_16:
  v21 = (unsigned int)v10 >> 1;
  v22 = v14 + 1;
  v23 = v16 + 1;
  if ( v18 < v21 )
    v22 = v14;
  if ( (unsigned int)v20 < v21 )
    v23 = v16;
  v24 = -v22;
  if ( v8 >= 0 )
    v24 = v22;
  v25 = v24 + v11;
  v26 = -v23;
  if ( v9 >= 0 )
    v26 = v23;
  v27 = v26 + v12;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v25 = -v25;
    v27 = -v27;
  }
  *(_DWORD *)a2 |= 4u;
  *((_DWORD *)a2 + 16) = (v25 + 3 + ((v25 >> 31) & 1)) & 0xFFFFFFF8;
  *((_DWORD *)a2 + 17) = ((v27 >> 31) + v27 + 4) & 0xFFFFFFF8;
}

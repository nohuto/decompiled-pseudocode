/*
 * XREFs of ?vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C0013750
 * Callers:
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C001399C (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C00139DC (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 * Callees:
 *     ?vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C00138C8 (-vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 */

void __fastcall WIDENER::vVecPerpCompute(WIDENER *this, struct LINEDATA *a2)
{
  int *v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rcx
  int v6; // edi
  int v7; // esi
  int v8; // r9d
  int v9; // r10d
  __int64 v10; // r11
  int v11; // edi
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbp
  unsigned int v18; // r11d
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax

  if ( (*(_DWORD *)a2 & 8) == 0 )
    WIDENER::vVecDrawCompute(this, a2);
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
  v13 = v4 * (int)abs32(v9);
  v14 = v4 * (int)abs32(v8);
  if ( v10 )
  {
    if ( v10 >= 0xFFFFFFFFLL )
    {
      LODWORD(v15) = 0;
      LODWORD(v17) = 0;
      v14 /= v10;
      v16 = v13 / v10;
      goto LABEL_11;
    }
    if ( v14 < 0 )
    {
      LODWORD(v15) = -v14 % (unsigned __int64)(unsigned int)v10;
      v14 = -(__int64)(-v14 / (unsigned __int64)(unsigned int)v10);
    }
    else
    {
      v15 = v14 % (unsigned __int64)(unsigned int)v10;
      v14 /= (unsigned __int64)(unsigned int)v10;
    }
    if ( v13 >= 0 )
    {
      v16 = v13 / (unsigned __int64)(unsigned int)v10;
      v17 = v13 % (unsigned __int64)(unsigned int)v10;
LABEL_11:
      LODWORD(v13) = v16;
      goto LABEL_12;
    }
    LODWORD(v17) = -v13 % (unsigned __int64)(unsigned int)v10;
    v13 = -(__int64)(-v13 / (unsigned __int64)(unsigned int)v10);
  }
  else
  {
    LODWORD(v15) = 0;
    LODWORD(v17) = 0;
  }
LABEL_12:
  v18 = (unsigned int)v10 >> 1;
  if ( (unsigned int)v15 >= v18 )
    LODWORD(v14) = v14 + 1;
  if ( (unsigned int)v17 >= v18 )
    LODWORD(v13) = v13 + 1;
  if ( v8 < 0 )
    LODWORD(v14) = -(int)v14;
  if ( v9 < 0 )
    LODWORD(v13) = -(int)v13;
  v19 = *(_DWORD *)a2;
  *((_DWORD *)a2 + 16) = v14 + v11;
  *((_DWORD *)a2 + 17) = v13 + v12;
  if ( (v19 & 1) != 0 )
  {
    *((_DWORD *)a2 + 16) = -(v14 + v11);
    *((_DWORD *)a2 + 17) = -(v13 + v12);
  }
  *(_DWORD *)a2 = v19 | 4;
  v20 = *((_DWORD *)a2 + 16);
  if ( v20 < 0 )
    v21 = v20 + 4;
  else
    v21 = v20 + 3;
  *((_DWORD *)a2 + 16) = v21 & 0xFFFFFFF8;
  v22 = *((_DWORD *)a2 + 17);
  if ( v22 < 0 )
    v23 = v22 + 3;
  else
    v23 = v22 + 4;
  *((_DWORD *)a2 + 17) = v23 & 0xFFFFFFF8;
}

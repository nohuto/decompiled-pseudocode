/*
 * XREFs of ?vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C0131A7C
 * Callers:
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0131CD0 (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0131D10 (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 * Callees:
 *     ?vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C0131BFC (-vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 */

void __fastcall WIDENER::vVecPerpCompute(WIDENER *this, struct LINEDATA *a2)
{
  int *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  int v7; // esi
  int v8; // r10d
  int v9; // r9d
  __int64 v10; // r11
  int v11; // edi
  int v12; // esi
  int v13; // eax
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbp
  unsigned int v21; // r11d
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax

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
  v13 = v8;
  if ( v8 < 0 )
    v13 = -v8;
  v14 = v13;
  v15 = v9;
  v16 = v4 * v14;
  if ( v9 < 0 )
    v15 = -v9;
  v17 = v4 * v15;
  if ( v10 )
  {
    if ( v10 >= 0xFFFFFFFFLL )
    {
      LODWORD(v18) = 0;
      LODWORD(v20) = 0;
      v16 /= v10;
      v19 = v17 / v10;
      goto LABEL_15;
    }
    if ( v16 < 0 )
    {
      LODWORD(v18) = -v16 % (unsigned __int64)(unsigned int)v10;
      v16 = -(__int64)(-v16 / (unsigned __int64)(unsigned int)v10);
    }
    else
    {
      v18 = v16 % (unsigned __int64)(unsigned int)v10;
      v16 /= (unsigned __int64)(unsigned int)v10;
    }
    if ( v17 >= 0 )
    {
      v19 = v17 / (unsigned __int64)(unsigned int)v10;
      v20 = v17 % (unsigned __int64)(unsigned int)v10;
LABEL_15:
      LODWORD(v17) = v19;
      goto LABEL_16;
    }
    LODWORD(v20) = -v17 % (unsigned __int64)(unsigned int)v10;
    v17 = -(__int64)(-v17 / (unsigned __int64)(unsigned int)v10);
  }
  else
  {
    LODWORD(v18) = 0;
    LODWORD(v20) = 0;
  }
LABEL_16:
  v21 = (unsigned int)v10 >> 1;
  if ( (unsigned int)v18 >= v21 )
    LODWORD(v16) = v16 + 1;
  if ( (unsigned int)v20 >= v21 )
    LODWORD(v17) = v17 + 1;
  if ( v8 < 0 )
    LODWORD(v16) = -(int)v16;
  if ( v9 < 0 )
    LODWORD(v17) = -(int)v17;
  v22 = *(_DWORD *)a2;
  *((_DWORD *)a2 + 16) = v16 + v11;
  *((_DWORD *)a2 + 17) = v17 + v12;
  if ( (v22 & 1) != 0 )
  {
    *((_DWORD *)a2 + 16) = -(v16 + v11);
    *((_DWORD *)a2 + 17) = -(v17 + v12);
  }
  *(_DWORD *)a2 = v22 | 4;
  v23 = *((_DWORD *)a2 + 16);
  if ( v23 < 0 )
    v24 = v23 + 4;
  else
    v24 = v23 + 3;
  *((_DWORD *)a2 + 16) = v24 & 0xFFFFFFF8;
  v25 = *((_DWORD *)a2 + 17);
  if ( v25 < 0 )
    v26 = v25 + 3;
  else
    v26 = v25 + 4;
  *((_DWORD *)a2 + 17) = v26 & 0xFFFFFFF8;
}

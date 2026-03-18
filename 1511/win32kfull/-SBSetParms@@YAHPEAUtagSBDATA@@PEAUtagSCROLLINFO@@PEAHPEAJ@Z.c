/*
 * XREFs of ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00CAA38
 * Callers:
 *     xxxSetScrollBar @ 0x1C00CA7B4 (xxxSetScrollBar.c)
 *     xxxSBWndProc @ 0x1C0234280 (xxxSBWndProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SBSetParms(struct tagSBDATA *a1, struct tagSCROLLINFO *a2, int *a3, int *a4)
{
  int v4; // edi
  int v6; // ecx
  unsigned int v8; // ebx
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  BOOL v18; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax

  v4 = 0;
  v6 = *((_DWORD *)a2 + 1);
  v8 = 0;
  if ( (v6 & 0x1000) != 0 )
    *a4 = *((_DWORD *)a1 + 3);
  if ( (v6 & 1) != 0 )
  {
    v9 = *((_DWORD *)a2 + 2);
    if ( v9 == *((_DWORD *)a2 + 3) )
      v8 = 1;
    if ( *((_DWORD *)a2 + 3) < v9 )
      *((_DWORD *)a2 + 3) = v9;
    if ( *(_DWORD *)a1 != v9 || *((_DWORD *)a1 + 1) != *((_DWORD *)a2 + 3) )
    {
      *(_DWORD *)a1 = v9;
      *((_DWORD *)a1 + 1) = *((_DWORD *)a2 + 3);
      v20 = *((_DWORD *)a2 + 1);
      if ( (v20 & 2) == 0 )
      {
        *((_DWORD *)a2 + 1) = v20 | 2;
        *((_DWORD *)a2 + 4) = *((_DWORD *)a1 + 2);
      }
      v21 = *((_DWORD *)a2 + 1);
      if ( (v21 & 4) == 0 )
      {
        *((_DWORD *)a2 + 1) = v21 | 4;
        *((_DWORD *)a2 + 5) = *((_DWORD *)a1 + 3);
      }
      v8 = 1;
    }
  }
  if ( (*((_DWORD *)a2 + 1) & 2) != 0 )
  {
    v10 = abs32(*((_DWORD *)a1 + 1) - *(_DWORD *)a1) + 1;
    if ( *((_DWORD *)a2 + 4) > v10 )
      *((_DWORD *)a2 + 4) = v10;
    v11 = *((_DWORD *)a2 + 4);
    if ( *((_DWORD *)a1 + 2) != v11 )
    {
      *((_DWORD *)a1 + 2) = v11;
      v22 = *((_DWORD *)a2 + 1);
      if ( (v22 & 4) == 0 )
      {
        *((_DWORD *)a2 + 1) = v22 | 4;
        *((_DWORD *)a2 + 5) = *((_DWORD *)a1 + 3);
      }
      v8 = 1;
    }
  }
  if ( (*((_DWORD *)a2 + 1) & 4) != 0 )
  {
    v12 = *((_DWORD *)a1 + 2);
    v13 = v12 - 1;
    if ( !v12 )
      v13 = 0;
    v14 = *((_DWORD *)a2 + 5);
    v15 = *((_DWORD *)a1 + 1) - v13;
    if ( v14 < *(_DWORD *)a1 )
    {
      *((_DWORD *)a2 + 5) = *(_DWORD *)a1;
    }
    else if ( v14 > v15 )
    {
      *((_DWORD *)a2 + 5) = v15;
    }
    v16 = *((_DWORD *)a2 + 5);
    if ( *((_DWORD *)a1 + 3) != v16 )
    {
      *((_DWORD *)a1 + 3) = v16;
      v8 = 1;
    }
  }
  v17 = *((_DWORD *)a2 + 1);
  if ( (v17 & 0x1000) == 0 )
    *a4 = *((_DWORD *)a1 + 3);
  if ( (v17 & 1) == 0 )
  {
    if ( (v17 & 2) == 0 )
      return v8;
    goto LABEL_26;
  }
  v18 = *(_DWORD *)a1 != *((_DWORD *)a1 + 1);
  *a3 = v18;
  if ( v18 )
  {
LABEL_26:
    LOBYTE(v4) = *((_DWORD *)a1 + 2) <= *((_DWORD *)a1 + 1) - *(_DWORD *)a1;
    *a3 = v4;
  }
  return v8;
}

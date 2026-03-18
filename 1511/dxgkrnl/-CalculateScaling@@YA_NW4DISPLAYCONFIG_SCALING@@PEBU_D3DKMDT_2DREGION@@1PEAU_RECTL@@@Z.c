/*
 * XREFs of ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x1C000CE88
 * Callers:
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A3630 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CalculateScaling(__int64 a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int v7; // r10d
  unsigned int v8; // r9d
  unsigned int v9; // r11d
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // r8d
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 v17; // rax
  unsigned int v18; // r9d
  unsigned int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // r9d
  unsigned int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rax
  unsigned int v25; // eax

  v4 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 1:
      if ( *a2 != *a3 || a2[1] != a3[1] )
      {
        v24 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v24 + 24) = 171LL;
        WdLogEvent5_WdAssertion(v24);
      }
      goto LABEL_21;
    case 2:
      v19 = *a2;
      v20 = *a3;
      if ( v19 >= *a3 )
      {
        a1 = a2[1];
        v21 = a3[1];
        if ( (unsigned int)a1 >= v21 )
        {
          v22 = (v19 - v20) >> 1;
          *a4 = v22;
          v23 = ((unsigned int)a1 - v21) >> 1;
          a4[2] = v20 + v22;
          a4[1] = v23;
          v15 = v23 + v21;
          goto LABEL_7;
        }
      }
      v17 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v17 + 24) = 208LL;
      goto LABEL_16;
    case 3:
LABEL_21:
      v25 = *a2;
      *a4 = 0;
      a4[1] = 0;
      a4[2] = v25;
      v15 = a2[1];
      goto LABEL_7;
    case 4:
      v7 = a3[1];
      v8 = *a2;
      v9 = *a3;
      v10 = a2[1];
      v11 = v7 * *a2;
      v12 = v10 * *a3;
      if ( v12 < v11 )
      {
        a4[1] = 0;
        a4[3] = v10;
        v18 = (v8 - v12 / v7) >> 1;
        *a4 = v18;
        a4[2] = v18 + v12 / v7;
        return 1;
      }
      *a4 = 0;
      v13 = v11 / v9;
      a4[2] = v8;
      v14 = (v10 - v13) >> 1;
      a4[1] = v14;
      v15 = v14 + v13;
LABEL_7:
      a4[3] = v15;
      return 1;
  }
  if ( (_DWORD)a1 != 5 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v17 + 24) = v4;
LABEL_16:
    WdLogEvent5_WdAssertion(v17);
  }
  return 0;
}

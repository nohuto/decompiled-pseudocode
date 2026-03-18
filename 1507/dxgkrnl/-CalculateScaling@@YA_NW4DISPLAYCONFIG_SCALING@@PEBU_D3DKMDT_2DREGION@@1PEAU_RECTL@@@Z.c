/*
 * XREFs of ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x1C002CA7C
 * Callers:
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0064FA0 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CalculateScaling(__int64 a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int *v5; // rbx
  __int64 v7; // rax
  unsigned int v8; // r10d
  unsigned int v9; // r9d
  unsigned int v10; // r11d
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // r8d
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // r9d
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int64 v23; // rax
  unsigned int v24; // eax

  v4 = (int)a1;
  v5 = a4;
  switch ( (_DWORD)a1 )
  {
    case 1:
      if ( *a2 != *a3 || a2[1] != a3[1] )
      {
        v23 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        *(_QWORD *)(v23 + 24) = 171LL;
        WdLogEvent5_WdAssertion(v23);
      }
LABEL_19:
      v24 = *a2;
      *v5 = 0;
      v5[1] = 0;
      v5[2] = v24;
      v16 = a2[1];
      goto LABEL_20;
    case 2:
      v18 = *a2;
      v19 = *a3;
      if ( v18 < (unsigned int)v19 || (a1 = a2[1], a4 = (unsigned int *)a3[1], (unsigned int)a1 < (unsigned int)a4) )
      {
        v7 = WdLogNewEntry5_WdAssertion(a1, v19, a3, a4);
        *(_QWORD *)(v7 + 24) = 208LL;
        goto LABEL_14;
      }
      v20 = (v18 - (unsigned int)v19) >> 1;
      *v5 = v20;
      v21 = (unsigned int)(a1 - (_DWORD)a4) >> 1;
      v5[2] = v19 + v20;
      v5[1] = v21;
      v16 = v21 + (_DWORD)a4;
      goto LABEL_20;
    case 3:
      goto LABEL_19;
  }
  if ( (_DWORD)a1 != 4 )
  {
    if ( (_DWORD)a1 == 5 )
      return 0;
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = v4;
LABEL_14:
    WdLogEvent5_WdAssertion(v7);
    return 0;
  }
  v8 = a3[1];
  v9 = *a2;
  v10 = *a3;
  v11 = a2[1];
  v12 = v8 * *a2;
  v13 = v11 * *a3;
  if ( v13 >= v12 )
  {
    *v5 = 0;
    v14 = v12 / v10;
    v5[2] = v9;
    v15 = (v11 - v14) >> 1;
    v5[1] = v15;
    v16 = v15 + v14;
LABEL_20:
    v5[3] = v16;
    return 1;
  }
  v5[1] = 0;
  v5[3] = v11;
  v17 = (v9 - v13 / v8) >> 1;
  *v5 = v17;
  v5[2] = v17 + v13 / v8;
  return 1;
}

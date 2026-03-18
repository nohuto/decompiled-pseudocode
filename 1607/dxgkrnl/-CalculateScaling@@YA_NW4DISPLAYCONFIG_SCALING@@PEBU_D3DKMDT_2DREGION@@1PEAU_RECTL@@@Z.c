/*
 * XREFs of ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x1C000D554
 * Callers:
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008B998 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CalculateScaling(__int64 a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int v7; // r11d
  unsigned int v8; // r10d
  unsigned int v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // r8d
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // r10d
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // r10d
  __int64 v23; // rax

  v4 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 1:
      if ( *a2 != *a3 || a2[1] != a3[1] )
      {
        v23 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v23 + 24) = 172LL;
        WdLogEvent5_WdAssertion(v23);
      }
      goto LABEL_22;
    case 2:
      v17 = *a2;
      v18 = *a3;
      if ( v17 >= *a3 )
      {
        a1 = a2[1];
        v19 = a3[1];
        if ( (unsigned int)a1 >= v19 )
        {
          v20 = (v17 - v18) >> 1;
          *a4 = v20;
          v21 = ((unsigned int)a1 - v19) >> 1;
          a4[2] = v18 + v20;
          a4[1] = v21;
          v14 = v21 + v19;
          goto LABEL_7;
        }
      }
      if ( g_IsMobileCore )
      {
LABEL_5:
        v7 = a3[1];
        v8 = *a2;
        v9 = a2[1];
        v10 = *a3;
        v11 = *a3 * v9;
        if ( v11 < v8 * v7 )
        {
          a4[1] = 0;
          a4[3] = v9;
          v22 = (v8 - v11 / v7) >> 1;
          *a4 = v22;
          a4[2] = v22 + v11 / v7;
          return 1;
        }
        v12 = v8 * v7 / v10;
        *a4 = 0;
        a4[2] = v8;
        v13 = (v9 - v12) >> 1;
        a4[1] = v13;
        v14 = v13 + v12;
LABEL_7:
        a4[3] = v14;
        return 1;
      }
      v16 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v16 + 24) = 209LL;
      goto LABEL_11;
    case 3:
LABEL_22:
      a4[2] = *a2;
      v14 = a2[1];
      *(_QWORD *)a4 = 0LL;
      goto LABEL_7;
    case 4:
      goto LABEL_5;
  }
  if ( (_DWORD)a1 != 5 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v16 + 24) = v4;
LABEL_11:
    WdLogEvent5_WdAssertion(v16);
  }
  return 0;
}

/*
 * XREFs of ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C0083264
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00310F0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C002E0A0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ULongAdd @ 0x1C0053900 (ULongAdd.c)
 *     memcmp @ 0x1C0089C20 (memcmp.c)
 */

__int64 __fastcall RGNMEMOBJ::bAddScans(RGNMEMOBJ *this, int a2, struct EDGE *a3, char a4)
{
  ULONG v8; // edx
  __int64 v9; // rax
  ULONG v10; // ecx
  _DWORD *v12; // rsi
  struct EDGE *v13; // rax
  char *v14; // r15
  _DWORD *v15; // rbx
  int v16; // ecx
  _DWORD *v17; // rbx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  char *v23; // rdi
  ULONG pulResult; // [rsp+50h] [rbp+8h] BYREF

  v8 = 4 * *((_DWORD *)a3 + 4) + 16;
  v9 = *(_QWORD *)this;
  v10 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( v8 > v10 - *(_DWORD *)(v9 + 80)
    && (ULongAdd(v10, v8, &pulResult) < 0
     || ULongAdd(pulResult, 0x870u, &pulResult) < 0
     || !(unsigned int)RGNOBJ::bExpand(this, pulResult)) )
  {
    return 0LL;
  }
  v12 = *(_DWORD **)(*(_QWORD *)this + 40LL);
  v13 = *(struct EDGE **)a3;
  v14 = (char *)(v12 + 2);
  v12[2] = 0x80000000;
  v15 = v12 + 2;
  if ( (a4 & 2) != 0 )
  {
    while ( v13 != a3 )
    {
      v16 = *((_DWORD *)v13 + 3);
      if ( *v15 >= v16 )
      {
        v17 = v15 - 1;
      }
      else
      {
        v17 = v15 + 1;
        *v17 = v16;
      }
      v18 = *((_DWORD *)v13 + 10);
      do
      {
        v13 = *(struct EDGE **)v13;
        v18 += *((_DWORD *)v13 + 10);
      }
      while ( v18 );
      v19 = *((_DWORD *)v13 + 3);
      if ( *v17 >= v19 )
      {
        v15 = v17 - 1;
      }
      else
      {
        v15 = v17 + 1;
        *v15 = v19;
      }
      v13 = *(struct EDGE **)v13;
    }
  }
  else
  {
    while ( v13 != a3 )
    {
      v20 = *((_DWORD *)v13 + 3);
      if ( *v15 >= v20 )
        --v15;
      else
        *++v15 = v20;
      v13 = *(struct EDGE **)v13;
    }
  }
  v21 = (unsigned __int64)((char *)v15 - v14) >> 2;
  v22 = (unsigned int)(4 * *(v12 - 1) + 16);
  v23 = (char *)v12 - v22 - 4;
  if ( *(_DWORD *)((char *)v12 - v22) == (_DWORD)v21 && !memcmp(v23 + 16, v12 + 3, 4LL * (unsigned int)v21) )
  {
    *((_DWORD *)v23 + 3) = a2 + 1;
  }
  else
  {
    ++*(_DWORD *)(*(_QWORD *)this + 84LL);
    *(_DWORD *)(*(_QWORD *)this + 80LL) += 4 * v21 + 16;
    *(_DWORD *)v14 = a2 + 1;
    *v12 = v21;
    v12[1] = a2;
    v12[(unsigned int)v21 + 3] = v21;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = (char *)v12 + (unsigned int)(4 * *v12 + 16);
  }
  return 1LL;
}

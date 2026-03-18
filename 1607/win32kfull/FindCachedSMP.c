/*
 * XREFs of FindCachedSMP @ 0x1C0249A4C
 * Callers:
 *     GetCachedSMP @ 0x1C0249C30 (GetCachedSMP.c)
 * Callees:
 *     CreateStandardMonoPattern @ 0x1C024A888 (CreateStandardMonoPattern.c)
 */

__int64 **__fastcall FindCachedSMP(__int64 a1, int a2)
{
  int v2; // r14d
  _QWORD *v5; // rbx
  _QWORD *v6; // r8
  _QWORD *v7; // r9
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  __int64 **i; // rcx
  __int64 **result; // rax
  _QWORD *v13; // rdi
  void *v14; // rcx
  _QWORD *v15; // rax
  PVOID v16; // rcx
  unsigned int v17; // eax
  char *v18; // rax
  char *v19; // rbx
  __int16 v20; // ax
  __int16 v21; // cx
  __int16 v22; // [rsp+20h] [rbp-20h] BYREF
  char v23; // [rsp+22h] [rbp-1Eh]
  char v24; // [rsp+23h] [rbp-1Dh]
  __int16 v25; // [rsp+24h] [rbp-1Ch]
  __int16 v26; // [rsp+26h] [rbp-1Ah]
  __int16 v27; // [rsp+28h] [rbp-18h]
  __int16 v28; // [rsp+2Ah] [rbp-16h]
  char *v29; // [rsp+30h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 28);
  EngAcquireSemaphore(qword_1C0329160);
  v5 = pv;
  v6 = pv;
  if ( pv )
  {
    v7 = 0LL;
    while ( *(_DWORD *)v6 != v2 )
    {
      v7 = v6;
      v6 = (_QWORD *)v6[1];
      if ( !v6 )
        goto LABEL_5;
    }
    if ( v7 )
    {
      v7[1] = v6[1];
      v6[1] = v5;
      pv = v6;
    }
    v10 = v6 + 2;
    for ( i = (__int64 **)v6[2]; i; i = (__int64 **)*i )
    {
      if ( *((unsigned __int16 *)i + 4) == a2 )
        return i;
    }
  }
  else
  {
LABEL_5:
    if ( (unsigned __int16)word_1C0329196 >= 0xAu )
    {
      v8 = (_QWORD *)*((_QWORD *)pv + 1);
      v9 = 0LL;
      while ( v8 )
      {
        v9 = v5;
        v5 = v8;
        v8 = (_QWORD *)v8[1];
      }
      v13 = (_QWORD *)v5[2];
      while ( 1 )
      {
        v14 = v13;
        if ( !v13 )
          break;
        v13 = (_QWORD *)*v13;
        EngFreeMem(v14);
      }
      EngFreeMem(v5);
      v9[1] = 0LL;
      --word_1C0329196;
    }
    v15 = EngAllocMem(0, 0x18u, 0x32305448u);
    if ( !v15 )
      goto LABEL_26;
    v16 = pv;
    v10 = v15 + 2;
    v15[2] = 0LL;
    ++word_1C0329196;
    *(_DWORD *)v15 = v2;
    v15[1] = v16;
    pv = v15;
  }
  v29 = 0LL;
  v22 = 1;
  v23 = 1;
  v24 = a2;
  v25 = 3848;
  v17 = CreateStandardMonoPattern(a1, &v22);
  if ( v17 + 16 >= v17 )
  {
    v18 = (char *)EngAllocMem(0, v17 + 16, 0x33305448u);
    v19 = v18;
    if ( v18 )
    {
      v29 = v18 + 16;
      CreateStandardMonoPattern(a1, &v22);
      v20 = v26;
      *(_QWORD *)v19 = *v10;
      *((_WORD *)v19 + 5) = v27;
      v21 = v28;
      *((_WORD *)v19 + 7) = v20;
      result = (__int64 **)v19;
      *((_WORD *)v19 + 6) = v21;
      *((_WORD *)v19 + 4) = a2;
      *v10 = v19;
      return result;
    }
  }
LABEL_26:
  EngReleaseSemaphore(qword_1C0329160);
  return 0LL;
}

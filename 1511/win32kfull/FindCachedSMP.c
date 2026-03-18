/*
 * XREFs of FindCachedSMP @ 0x1C0140B5C
 * Callers:
 *     GetCachedSMP @ 0x1C01409EC (GetCachedSMP.c)
 * Callees:
 *     CreateStandardMonoPattern @ 0x1C0140CD0 (CreateStandardMonoPattern.c)
 */

__int64 **__fastcall FindCachedSMP(__int64 a1, int a2)
{
  int v2; // r14d
  _QWORD *v5; // rbx
  _QWORD *v6; // r8
  _QWORD *v7; // r9
  _QWORD *v8; // rdi
  __int64 **i; // rcx
  __int64 **result; // rax
  _QWORD *v11; // rax
  PVOID v12; // rcx
  unsigned int v13; // eax
  char *v14; // rax
  char *v15; // rbx
  __int16 v16; // ax
  __int16 v17; // cx
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  _QWORD *v20; // rdi
  void *v21; // rcx
  __int16 v22; // [rsp+20h] [rbp-20h] BYREF
  char v23; // [rsp+22h] [rbp-1Eh]
  char v24; // [rsp+23h] [rbp-1Dh]
  __int16 v25; // [rsp+24h] [rbp-1Ch]
  __int16 v26; // [rsp+26h] [rbp-1Ah]
  __int16 v27; // [rsp+28h] [rbp-18h]
  __int16 v28; // [rsp+2Ah] [rbp-16h]
  char *v29; // [rsp+30h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 28);
  EngAcquireSemaphore(qword_1C0323DB0);
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
        goto LABEL_11;
    }
    if ( v7 )
    {
      v7[1] = v6[1];
      v6[1] = v5;
      pv = v6;
    }
    v8 = v6 + 2;
    for ( i = (__int64 **)v6[2]; i; i = (__int64 **)*i )
    {
      if ( *((unsigned __int16 *)i + 4) == a2 )
        return i;
    }
  }
  else
  {
LABEL_11:
    if ( (unsigned __int16)word_1C0323DE6 >= 0xAu )
    {
      v18 = (_QWORD *)*((_QWORD *)pv + 1);
      v19 = 0LL;
      while ( v18 )
      {
        v19 = v5;
        v5 = v18;
        v18 = (_QWORD *)v18[1];
      }
      v20 = (_QWORD *)v5[2];
      while ( 1 )
      {
        v21 = v20;
        if ( !v20 )
          break;
        v20 = (_QWORD *)*v20;
        EngFreeMem(v21);
      }
      EngFreeMem(v5);
      v19[1] = 0LL;
      --word_1C0323DE6;
    }
    v11 = EngAllocMem(0, 0x18u, 0x32305448u);
    if ( !v11 )
      goto LABEL_26;
    v12 = pv;
    v8 = v11 + 2;
    v11[2] = 0LL;
    ++word_1C0323DE6;
    *(_DWORD *)v11 = v2;
    v11[1] = v12;
    pv = v11;
  }
  v29 = 0LL;
  v22 = 1;
  v23 = 1;
  v24 = a2;
  v25 = 3848;
  v13 = CreateStandardMonoPattern(a1, &v22);
  if ( v13 + 16 >= v13 )
  {
    v14 = (char *)EngAllocMem(0, v13 + 16, 0x33305448u);
    v15 = v14;
    if ( v14 )
    {
      v29 = v14 + 16;
      CreateStandardMonoPattern(a1, &v22);
      v16 = v26;
      *(_QWORD *)v15 = *v8;
      *((_WORD *)v15 + 5) = v27;
      v17 = v28;
      *((_WORD *)v15 + 7) = v16;
      result = (__int64 **)v15;
      *((_WORD *)v15 + 6) = v17;
      *((_WORD *)v15 + 4) = a2;
      *v8 = v15;
      return result;
    }
  }
LABEL_26:
  EngReleaseSemaphore(qword_1C0323DB0);
  return 0LL;
}

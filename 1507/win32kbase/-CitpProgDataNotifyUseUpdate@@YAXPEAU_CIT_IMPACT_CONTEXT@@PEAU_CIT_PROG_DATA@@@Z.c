/*
 * XREFs of ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x1C0057C78
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0057258 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E37A8 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpProgDataNotifyUseUpdate(struct _CIT_IMPACT_CONTEXT *a1, struct _CIT_PROG_DATA *a2)
{
  char *v4; // rbx
  __int64 v5; // r8
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  struct _CIT_IMPACT_CONTEXT *v10; // r8
  __int64 v11; // rdx
  struct _CIT_IMPACT_CONTEXT **v12; // rax
  struct _CIT_IMPACT_CONTEXT **v13; // r10
  __int64 v14; // rax
  __int64 *v15; // r11
  __int64 *v16; // rdx
  __int64 **v17; // rcx
  struct _CIT_IMPACT_CONTEXT *v18; // rcx
  __int64 v19; // rcx
  struct _CIT_IMPACT_CONTEXT **v20; // rax
  struct _CIT_IMPACT_CONTEXT **v21; // rcx

  if ( *((_BYTE *)a2 + 34) )
  {
    v10 = (struct _CIT_PROG_DATA *)((char *)a2 + 16);
    v11 = *((_QWORD *)a2 + 2);
    v12 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)v10 + 1);
    if ( *(struct _CIT_IMPACT_CONTEXT **)(v11 + 8) != v10 || *v12 != v10 )
      __fastfail(3u);
    *v12 = (struct _CIT_IMPACT_CONTEXT *)v11;
    v13 = (struct _CIT_IMPACT_CONTEXT **)((char *)a1 + 328);
    *(_QWORD *)(v11 + 8) = v12;
    v14 = *((_QWORD *)a1 + 41);
    *(_QWORD *)v10 = v14;
    *((_QWORD *)v10 + 1) = (char *)a1 + 328;
    if ( *(struct _CIT_IMPACT_CONTEXT **)(v14 + 8) != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 328) )
      __fastfail(3u);
    *(_QWORD *)(v14 + 8) = v10;
    *v13 = v10;
    v15 = (__int64 *)*((_QWORD *)a1 + 44);
    if ( (__int64)(*((unsigned int *)a2 + 31)
                 + 30000 * (*((unsigned int *)a2 + 26) - (unsigned __int64)*((unsigned int *)v15 + 22))
                 - *((unsigned int *)v15 + 27)) >= 0 )
    {
      v16 = (__int64 *)*v15;
      v17 = (__int64 **)v15[1];
      if ( *(__int64 **)(*v15 + 8) != v15 || *v17 != v15 )
        __fastfail(3u);
      *v17 = v16;
      v16[1] = (__int64)v17;
      v18 = *v13;
      *v15 = (__int64)*v13;
      v15[1] = (__int64)v13;
      if ( *((struct _CIT_IMPACT_CONTEXT ***)v18 + 1) != v13 )
        __fastfail(3u);
      *((_QWORD *)v18 + 1) = v15;
      *v13 = (struct _CIT_IMPACT_CONTEXT *)v15;
      *((_WORD *)v15 + 9) = 1;
      v19 = *(_QWORD *)v10;
      v20 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)v10 + 1);
      if ( *(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)v10 + 8LL) != v10 || *v20 != v10 )
        __fastfail(3u);
      *v20 = (struct _CIT_IMPACT_CONTEXT *)v19;
      *(_QWORD *)(v19 + 8) = v20;
      v21 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 44);
      *(_QWORD *)v10 = (char *)a1 + 344;
      *((_QWORD *)v10 + 1) = v21;
      if ( *v21 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 344) )
        __fastfail(3u);
      *v21 = v10;
      *((_QWORD *)a1 + 44) = v10;
      *((_WORD *)a2 + 17) = 256;
    }
  }
  if ( *((_BYTE *)a2 + 35) )
  {
    v4 = (char *)a1 + 344;
    while ( 1 )
    {
      v5 = *((_QWORD *)a2 + 3);
      if ( (char *)v5 == v4
        || (__int64)(*((unsigned int *)a2 + 31)
                   + 30000 * (*((unsigned int *)a2 + 26) - (unsigned __int64)*(unsigned int *)(v5 + 88))
                   - *(unsigned int *)(v5 + 108)) < 0 )
      {
        break;
      }
      v6 = (_QWORD *)((char *)a2 + 16);
      v7 = *((_QWORD *)a2 + 2);
      v8 = (_QWORD *)*((_QWORD *)a2 + 3);
      if ( *(struct _CIT_PROG_DATA **)(v7 + 8) != (struct _CIT_PROG_DATA *)((char *)a2 + 16) || (_QWORD *)*v8 != v6 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      v9 = *(_QWORD **)(v5 + 8);
      *v6 = v5;
      *((_QWORD *)a2 + 3) = v9;
      if ( *v9 != v5 )
        __fastfail(3u);
      *v9 = v6;
      *(_QWORD *)(v5 + 8) = v6;
    }
  }
}

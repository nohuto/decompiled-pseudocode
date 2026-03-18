/*
 * XREFs of ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C00E4498
 * Callers:
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C00E4374 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E51B4 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C004A1C0 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0050314 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ??$CitpBaseUseDataMerge@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEBU0@@Z @ 0x1C00E383C (--$CitpBaseUseDataMerge@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEBU0@@Z.c)
 *     ?CitpProgDataFind@@YAPEAU_CIT_PROG_DATA@@PEBU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C00E47D4 (-CitpProgDataFind@@YAPEAU_CIT_PROG_DATA@@PEBU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C00E4AAC (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C00E4B28 (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 */

struct _CIT_PROG_DATA *__fastcall CitpProgDataEnsure(struct _CIT_IMPACT_CONTEXT *a1, const struct _CIT_PROGRAM_ID *a2)
{
  struct _CIT_PROG_DATA *v4; // rbx
  _QWORD **v5; // rax
  _QWORD **v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx
  struct _CIT_PROG_DATA *v12; // rdx
  unsigned int v13; // eax
  struct _CIT_IMPACT_CONTEXT *v14; // rax
  struct _CIT_IMPACT_CONTEXT **v15; // rdx
  __int64 v16; // rdx
  char *v17; // rax
  __int128 v18; // xmm1
  __int64 v19; // xmm0_8
  __int64 v20; // rdx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdx
  _BYTE v24[40]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v25; // [rsp+90h] [rbp+30h]
  __int64 v26; // [rsp+90h] [rbp+30h]

  memset(v24, 0, sizeof(v24));
  v4 = CitpProgDataFind(a1, a2);
  if ( v4 )
    goto LABEL_10;
  if ( (int)CitpProgramIdCopy((struct _CIT_PROGRAM_ID *)v24, a2) < 0 )
    goto LABEL_9;
  v5 = (_QWORD **)((char *)a1 + 312);
  if ( *v5 == v5 )
  {
    v8 = (_QWORD *)((char *)a1 + 328);
    if ( (_QWORD *)*v8 != v8 )
    {
      v10 = (_QWORD *)*((_QWORD *)a1 + 42);
      v11 = (_QWORD *)v10[1];
      if ( (_QWORD *)*v10 != v8 || (_QWORD *)*v11 != v10 )
        __fastfail(3u);
      *((_QWORD *)a1 + 42) = v11;
      v4 = (struct _CIT_PROG_DATA *)(v10 - 2);
      *v11 = v8;
      --*((_DWORD *)a1 + 91);
      *((_QWORD *)v4 + 3) = (char *)v4 + 16;
      *((_QWORD *)v4 + 2) = (char *)v4 + 16;
      *((_BYTE *)v4 + 34) = 0;
      v25 = *((_QWORD *)v4 + 1) & (-1LL << (*((_DWORD *)a1 + 95) & 0x1F));
      v12 = (struct _CIT_PROG_DATA *)(*((_QWORD *)a1 + 48)
                                    + 8LL
                                    * ((37
                                      * (BYTE6(v25)
                                       + 37
                                       * (BYTE5(v25)
                                        + 37
                                        * (BYTE4(v25)
                                         + 37
                                         * (BYTE3(v25)
                                          + 37
                                          * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
                                      + HIBYTE(v25)) & (unsigned int)((*((_DWORD *)a1 + 95) >> 5) - 1)));
      if ( (*(_QWORD *)v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v12 = (struct _CIT_PROG_DATA *)(*((_QWORD *)a1 + 48)
                                      + 8LL
                                      * ((37
                                        * (BYTE6(v25)
                                         + 37
                                         * (BYTE5(v25)
                                          + 37
                                          * (BYTE4(v25)
                                           + 37
                                           * (BYTE3(v25)
                                            + 37
                                            * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
                                        + HIBYTE(v25)) & (unsigned int)((*((_DWORD *)a1 + 95) >> 5) - 1)));
      while ( (*(_QWORD *)v12 & 1) == 0 )
      {
        if ( *(struct _CIT_PROG_DATA **)v12 == v4 )
        {
          *(_QWORD *)v12 = *(_QWORD *)v4;
          --*((_DWORD *)a1 + 94);
          *(_QWORD *)v4 |= 0x8000000000000002uLL;
          break;
        }
        v12 = *(struct _CIT_PROG_DATA **)v12;
      }
      *(_QWORD *)v4 = 0LL;
      CitpStatIncrement((unsigned __int16 *)a1 + 100, 1);
      CitpBaseUseDataMerge<_CIT_USE_DATA>(
        (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 216),
        (struct _CIT_PROG_DATA *)((char *)v4 + 88));
      CitpProgDataReinitialize(v4);
      goto LABEL_20;
    }
LABEL_9:
    v4 = 0LL;
    goto LABEL_10;
  }
  v6 = (_QWORD **)*v5;
  v7 = (_QWORD *)**v5;
  if ( (_QWORD **)(*v5)[1] != v5 || (_QWORD **)v7[1] != v6 )
    __fastfail(3u);
  *v5 = v7;
  v4 = (struct _CIT_PROG_DATA *)(v6 - 2);
  v7[1] = v5;
LABEL_20:
  v13 = *((_DWORD *)a1 + 92);
  if ( v13 >= *((_DWORD *)a1 + 93) )
  {
    ++*((_DWORD *)a1 + 91);
    v16 = *((_QWORD *)a1 + 41);
    v17 = (char *)v4 + 16;
    *((_QWORD *)v4 + 2) = v16;
    *((_QWORD *)v4 + 3) = (char *)a1 + 328;
    if ( *(struct _CIT_IMPACT_CONTEXT **)(v16 + 8) != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 328) )
      __fastfail(3u);
    *(_QWORD *)(v16 + 8) = v17;
    *((_QWORD *)a1 + 41) = v17;
    *((_BYTE *)v4 + 34) = 1;
  }
  else
  {
    *((_DWORD *)a1 + 92) = v13 + 1;
    v14 = (struct _CIT_PROG_DATA *)((char *)v4 + 16);
    v15 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 44);
    *((_QWORD *)v4 + 2) = (char *)a1 + 344;
    *((_QWORD *)v4 + 3) = v15;
    if ( *v15 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 344) )
      __fastfail(3u);
    *v15 = v14;
    *((_QWORD *)a1 + 44) = v14;
    *((_BYTE *)v4 + 35) = 1;
  }
  v18 = *(_OWORD *)&v24[16];
  *(_OWORD *)((char *)v4 + 40) = *(_OWORD *)v24;
  v19 = *(_QWORD *)&v24[32];
  *(_OWORD *)((char *)v4 + 56) = v18;
  *((_QWORD *)v4 + 9) = v19;
  memset(v24, 0, sizeof(v24));
  v20 = *((_QWORD *)v4 + 7);
  *((_QWORD *)v4 + 1) = v20;
  v21 = *((_DWORD *)a1 + 95);
  v26 = v20 & (-1LL << (v21 & 0x1F));
  v22 = *((_QWORD *)a1 + 48);
  v23 = (37
       * (BYTE6(v26)
        + 37
        * (BYTE5(v26)
         + 37
         * (BYTE4(v26)
          + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
       + HIBYTE(v26)) & ((v21 >> 5) - 1);
  *(_QWORD *)v4 = *(_QWORD *)(v22 + 8 * v23);
  *(_QWORD *)(v22 + 8 * v23) = v4;
  ++*((_DWORD *)a1 + 94);
LABEL_10:
  CitpProgramIdCleanup((struct _CIT_PROGRAM_ID *)v24);
  return v4;
}

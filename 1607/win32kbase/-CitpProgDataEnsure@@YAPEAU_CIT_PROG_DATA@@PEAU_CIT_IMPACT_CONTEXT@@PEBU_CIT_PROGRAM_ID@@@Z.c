/*
 * XREFs of ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C00F63E4
 * Callers:
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C00F62C0 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00F70F0 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C000E744 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0011A24 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ??$CitpBaseUseDataMerge@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEBU0@@Z @ 0x1C00F565C (--$CitpBaseUseDataMerge@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEBU0@@Z.c)
 *     ?CitpProgDataFind@@YAPEAU_CIT_PROG_DATA@@PEBU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C00F6720 (-CitpProgDataFind@@YAPEAU_CIT_PROG_DATA@@PEBU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C00F69F8 (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C00F6A5C (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 */

struct _CIT_PROG_DATA *__fastcall CitpProgDataEnsure(struct _CIT_IMPACT_CONTEXT *a1, const struct _CIT_PROGRAM_ID *a2)
{
  struct _CIT_PROG_DATA *v4; // rbx
  __int64 **v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx
  struct _CIT_PROG_DATA *v12; // rdx
  unsigned int v13; // eax
  struct _CIT_IMPACT_CONTEXT *v14; // rax
  struct _CIT_IMPACT_CONTEXT **v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int128 v19; // xmm1
  __int64 v20; // xmm0_8
  __int64 v21; // rdx
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rdx
  _BYTE v25[40]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v26; // [rsp+90h] [rbp+30h]
  __int64 v27; // [rsp+90h] [rbp+30h]

  memset(v25, 0, sizeof(v25));
  v4 = CitpProgDataFind(a1, a2);
  if ( !v4 )
  {
    if ( (int)CitpProgramIdCopy((struct _CIT_PROGRAM_ID *)v25, a2) < 0 )
    {
LABEL_3:
      v4 = 0LL;
      goto LABEL_4;
    }
    v6 = (__int64 **)((char *)a1 + 312);
    if ( *v6 == (__int64 *)v6 )
    {
      v9 = (_QWORD *)((char *)a1 + 328);
      if ( (_QWORD *)*v9 == v9 )
        goto LABEL_3;
      v10 = (_QWORD *)*((_QWORD *)a1 + 42);
      v11 = (_QWORD *)v10[1];
      if ( (_QWORD *)*v10 != v9 || (_QWORD *)*v11 != v10 )
        __fastfail(3u);
      *((_QWORD *)a1 + 42) = v11;
      v4 = (struct _CIT_PROG_DATA *)(v10 - 2);
      *v11 = v9;
      --*((_DWORD *)a1 + 91);
      *((_QWORD *)v4 + 3) = (char *)v4 + 16;
      *((_QWORD *)v4 + 2) = (char *)v4 + 16;
      *((_BYTE *)v4 + 34) = 0;
      v26 = *((_QWORD *)v4 + 1) & (-1LL << (*((_DWORD *)a1 + 95) & 0x1F));
      v12 = (struct _CIT_PROG_DATA *)(*((_QWORD *)a1 + 48)
                                    + 8LL
                                    * ((37
                                      * (BYTE6(v26)
                                       + 37
                                       * (BYTE5(v26)
                                        + 37
                                        * (BYTE4(v26)
                                         + 37
                                         * (BYTE3(v26)
                                          + 37
                                          * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
                                      + HIBYTE(v26)) & (unsigned int)((*((_DWORD *)a1 + 95) >> 5) - 1)));
      if ( (*(_QWORD *)v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v12 = (struct _CIT_PROG_DATA *)(*((_QWORD *)a1 + 48)
                                      + 8LL
                                      * ((37
                                        * (BYTE6(v26)
                                         + 37
                                         * (BYTE5(v26)
                                          + 37
                                          * (BYTE4(v26)
                                           + 37
                                           * (BYTE3(v26)
                                            + 37
                                            * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
                                        + HIBYTE(v26)) & (unsigned int)((*((_DWORD *)a1 + 95) >> 5) - 1)));
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
    }
    else
    {
      v7 = *v6;
      v8 = **v6;
      if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
        __fastfail(3u);
      *v6 = (__int64 *)v8;
      v4 = (struct _CIT_PROG_DATA *)(v7 - 2);
      *(_QWORD *)(v8 + 8) = v6;
    }
    v13 = *((_DWORD *)a1 + 92);
    if ( v13 >= *((_DWORD *)a1 + 93) )
    {
      ++*((_DWORD *)a1 + 91);
      v16 = (_QWORD *)((char *)a1 + 328);
      v17 = *((_QWORD *)a1 + 41);
      v18 = (_QWORD *)((char *)v4 + 16);
      if ( *(struct _CIT_IMPACT_CONTEXT **)(v17 + 8) != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 328) )
        __fastfail(3u);
      *v18 = v17;
      *((_QWORD *)v4 + 3) = v16;
      *(_QWORD *)(v17 + 8) = v18;
      *v16 = v18;
      *((_BYTE *)v4 + 34) = 1;
    }
    else
    {
      *((_DWORD *)a1 + 92) = v13 + 1;
      v14 = (struct _CIT_PROG_DATA *)((char *)v4 + 16);
      v15 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 44);
      if ( *v15 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 344) )
        __fastfail(3u);
      *(_QWORD *)v14 = (char *)a1 + 344;
      *((_QWORD *)v4 + 3) = v15;
      *v15 = v14;
      *((_QWORD *)a1 + 44) = v14;
      *((_BYTE *)v4 + 35) = 1;
    }
    v19 = *(_OWORD *)&v25[16];
    *(_OWORD *)((char *)v4 + 40) = *(_OWORD *)v25;
    v20 = *(_QWORD *)&v25[32];
    *(_OWORD *)((char *)v4 + 56) = v19;
    *((_QWORD *)v4 + 9) = v20;
    memset(v25, 0, sizeof(v25));
    v21 = *((_QWORD *)v4 + 7);
    *((_QWORD *)v4 + 1) = v21;
    v22 = *((_DWORD *)a1 + 95);
    v27 = v21 & (-1LL << (v22 & 0x1F));
    v23 = *((_QWORD *)a1 + 48);
    v24 = (37
         * (BYTE6(v27)
          + 37
          * (BYTE5(v27)
           + 37
           * (BYTE4(v27)
            + 37 * (BYTE3(v27) + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v27 + 11623883)))))))
         + HIBYTE(v27)) & ((v22 >> 5) - 1);
    *(_QWORD *)v4 = *(_QWORD *)(v23 + 8 * v24);
    *(_QWORD *)(v23 + 8 * v24) = v4;
    ++*((_DWORD *)a1 + 94);
  }
LABEL_4:
  CitpProgramIdCleanup((struct _CIT_PROGRAM_ID *)v25);
  return v4;
}

/*
 * XREFs of ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C0057D10
 * Callers:
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C00569F4 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E37A8 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0052B50 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0057ECC (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgDataFind@@YAPEAU_CIT_PROG_DATA@@PEBU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C0057F04 (-CitpProgDataFind@@YAPEAU_CIT_PROG_DATA@@PEBU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C0058A68 (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ??$CitpBaseUseDataMerge@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEBU0@@Z @ 0x1C00E253C (--$CitpBaseUseDataMerge@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEBU0@@Z.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C00E3210 (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 */

struct _CIT_PROG_DATA *__fastcall CitpProgDataEnsure(struct _CIT_IMPACT_CONTEXT *a1, const struct _CIT_PROGRAM_ID *a2)
{
  struct _CIT_PROG_DATA *v4; // rbx
  _QWORD **v6; // rax
  _QWORD **v7; // rbx
  _QWORD *v8; // rcx
  unsigned int v9; // eax
  struct _CIT_IMPACT_CONTEXT *v10; // rax
  struct _CIT_IMPACT_CONTEXT **v11; // rdx
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // rcx
  struct _CIT_PROG_DATA *v21; // rdx
  __int64 v22; // rdx
  char *v23; // rax
  _BYTE v24[40]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v25; // [rsp+90h] [rbp+30h]
  __int64 v26; // [rsp+90h] [rbp+30h]

  memset(v24, 0, sizeof(v24));
  v4 = CitpProgDataFind(a1, a2);
  if ( v4 )
    goto LABEL_2;
  if ( (int)CitpProgramIdCopy((struct _CIT_PROGRAM_ID *)v24, a2) < 0 )
    goto LABEL_21;
  v6 = (_QWORD **)((char *)a1 + 312);
  if ( *v6 == v6 )
  {
    v18 = (_QWORD *)((char *)a1 + 328);
    if ( (_QWORD *)*v18 != v18 )
    {
      v19 = (_QWORD *)*((_QWORD *)a1 + 42);
      v20 = (_QWORD *)v19[1];
      if ( (_QWORD *)*v19 != v18 || (_QWORD *)*v20 != v19 )
        __fastfail(3u);
      *((_QWORD *)a1 + 42) = v20;
      v4 = (struct _CIT_PROG_DATA *)(v19 - 2);
      *v20 = v18;
      --*((_DWORD *)a1 + 91);
      *((_QWORD *)v4 + 3) = (char *)v4 + 16;
      *((_QWORD *)v4 + 2) = (char *)v4 + 16;
      *((_BYTE *)v4 + 34) = 0;
      v26 = *((_QWORD *)v4 + 1) & (-1LL << (*((_DWORD *)a1 + 95) & 0x1F));
      v21 = (struct _CIT_PROG_DATA *)(*((_QWORD *)a1 + 48)
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
        v21 = (struct _CIT_PROG_DATA *)(*((_QWORD *)a1 + 48)
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
      while ( (*(_QWORD *)v21 & 1) == 0 )
      {
        if ( *(struct _CIT_PROG_DATA **)v21 == v4 )
        {
          *(_QWORD *)v21 = *(_QWORD *)v4;
          --*((_DWORD *)a1 + 94);
          *(_QWORD *)v4 |= 0x8000000000000002uLL;
          break;
        }
        v21 = *(struct _CIT_PROG_DATA **)v21;
      }
      *(_QWORD *)v4 = 0LL;
      CitpStatIncrement((unsigned __int16 *)a1 + 100, 1);
      CitpBaseUseDataMerge<_CIT_USE_DATA>((char *)a1 + 216, (char *)v4 + 80);
      CitpProgDataReinitialize(v4);
      goto LABEL_8;
    }
LABEL_21:
    v4 = 0LL;
    goto LABEL_2;
  }
  v7 = (_QWORD **)*v6;
  v8 = (_QWORD *)**v6;
  if ( (_QWORD **)(*v6)[1] != v6 || (_QWORD **)v8[1] != v7 )
    __fastfail(3u);
  *v6 = v8;
  v4 = (struct _CIT_PROG_DATA *)(v7 - 2);
  v8[1] = v6;
LABEL_8:
  v9 = *((_DWORD *)a1 + 92);
  if ( v9 >= *((_DWORD *)a1 + 93) )
  {
    ++*((_DWORD *)a1 + 91);
    v22 = *((_QWORD *)a1 + 41);
    v23 = (char *)v4 + 16;
    *((_QWORD *)v4 + 2) = v22;
    *((_QWORD *)v4 + 3) = (char *)a1 + 328;
    if ( *(struct _CIT_IMPACT_CONTEXT **)(v22 + 8) != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 328) )
      __fastfail(3u);
    *(_QWORD *)(v22 + 8) = v23;
    *((_QWORD *)a1 + 41) = v23;
    *((_BYTE *)v4 + 34) = 1;
  }
  else
  {
    *((_DWORD *)a1 + 92) = v9 + 1;
    v10 = (struct _CIT_PROG_DATA *)((char *)v4 + 16);
    v11 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 44);
    *((_QWORD *)v4 + 2) = (char *)a1 + 344;
    *((_QWORD *)v4 + 3) = v11;
    if ( *v11 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 344) )
      __fastfail(3u);
    *v11 = v10;
    *((_QWORD *)a1 + 44) = v10;
    *((_BYTE *)v4 + 35) = 1;
  }
  v12 = *(_OWORD *)&v24[16];
  *(_OWORD *)((char *)v4 + 40) = *(_OWORD *)v24;
  v13 = *(_QWORD *)&v24[32];
  *(_OWORD *)((char *)v4 + 56) = v12;
  *((_QWORD *)v4 + 9) = v13;
  memset(v24, 0, sizeof(v24));
  v14 = *((_QWORD *)v4 + 7);
  *((_QWORD *)v4 + 1) = v14;
  v15 = *((_DWORD *)a1 + 95);
  v25 = v14 & (-1LL << (v15 & 0x1F));
  v16 = *((_QWORD *)a1 + 48);
  v17 = (37
       * (BYTE6(v25)
        + 37
        * (BYTE5(v25)
         + 37
         * (BYTE4(v25)
          + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
       + HIBYTE(v25)) & ((v15 >> 5) - 1);
  *(_QWORD *)v4 = *(_QWORD *)(v16 + 8 * v17);
  *(_QWORD *)(v16 + 8 * v17) = v4;
  ++*((_DWORD *)a1 + 94);
LABEL_2:
  CitpProgramIdCleanup((struct _CIT_PROGRAM_ID *)v24);
  return v4;
}

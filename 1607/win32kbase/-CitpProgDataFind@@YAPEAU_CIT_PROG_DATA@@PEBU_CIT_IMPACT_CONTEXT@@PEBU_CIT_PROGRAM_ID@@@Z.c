/*
 * XREFs of ?CitpProgDataFind@@YAPEAU_CIT_PROG_DATA@@PEBU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C00F6720
 * Callers:
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C00F63E4 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 * Callees:
 *     ?CitpProgramIdIsEqual@@YAEPEBU_CIT_PROGRAM_ID@@0@Z @ 0x1C00F6B04 (-CitpProgramIdIsEqual@@YAEPEBU_CIT_PROGRAM_ID@@0@Z.c)
 */

struct _CIT_PROG_DATA *__fastcall CitpProgDataFind(
        const struct _CIT_IMPACT_CONTEXT *a1,
        const struct _CIT_PROGRAM_ID *a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rdi
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rsi

  v2 = *((_DWORD *)a1 + 95);
  v4 = 0LL;
  v6 = -1LL << (*((_BYTE *)a1 + 380) & 0x1F);
  v7 = 0LL;
  v8 = v6 & *((_QWORD *)a2 + 2);
  while ( 1 )
  {
    if ( v7 )
      goto LABEL_5;
    if ( !(v2 >> 5) )
      return (struct _CIT_PROG_DATA *)v4;
    v7 = *((_QWORD *)a1 + 48)
       + 8LL
       * ((37
         * (BYTE6(v8)
          + 37
          * (BYTE5(v8)
           + 37
           * (BYTE4(v8) + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
         + HIBYTE(v8)) & ((v2 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v8 == (v6 & *(_QWORD *)(v7 + 8)) )
        goto LABEL_9;
    }
    v7 = 0LL;
LABEL_9:
    if ( !v7 )
      return (struct _CIT_PROG_DATA *)v4;
    if ( CitpProgramIdIsEqual((const struct _CIT_PROGRAM_ID *)(v7 + 40), a2) )
      return (struct _CIT_PROG_DATA *)v7;
  }
}

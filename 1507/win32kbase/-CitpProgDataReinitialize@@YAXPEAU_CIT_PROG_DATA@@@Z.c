/*
 * XREFs of ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C00E3210
 * Callers:
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C0057D10 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00E2F1C (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0057ECC (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

void __fastcall CitpProgDataReinitialize(struct _CIT_PROG_DATA *a1)
{
  CitpProgramIdCleanup((struct _CIT_PROG_DATA *)((char *)a1 + 40));
  if ( (*((_WORD *)a1 + 16))++ == 0xFFFF )
    *((_WORD *)a1 + 16) = 1;
  *((_QWORD *)a1 + 3) = (char *)a1 + 16;
  *((_QWORD *)a1 + 2) = (char *)a1 + 16;
  *((_WORD *)a1 + 17) = 0;
  *(_QWORD *)a1 = 0LL;
  memset((char *)a1 + 40, 0, 0x28uLL);
  memset(*((void **)a1 + 10), 0, *((_QWORD *)a1 + 11));
  memset((char *)a1 + 96, 0, 0x30uLL);
  *((_QWORD *)a1 + 18) = 0LL;
  *((_QWORD *)a1 + 19) = 0LL;
  *((_QWORD *)a1 + 20) = 0LL;
}

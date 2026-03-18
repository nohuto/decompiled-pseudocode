/*
 * XREFs of ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C00E4AAC
 * Callers:
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00E4080 (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C00E4498 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 * Callees:
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C00E4478 (-CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 */

void __fastcall CitpProgDataReinitialize(struct _CIT_PROG_DATA *a1, __int64 a2, unsigned int a3)
{
  CitpProgDataCleanup(a1, a2, a3);
  if ( (*((_WORD *)a1 + 16))++ == 0xFFFF )
    *((_WORD *)a1 + 16) = 1;
  *((_QWORD *)a1 + 3) = (char *)a1 + 16;
  *((_QWORD *)a1 + 2) = (char *)a1 + 16;
  *((_WORD *)a1 + 17) = 0;
  *(_QWORD *)a1 = 0LL;
  memset((char *)a1 + 40, 0, 0x28uLL);
  memset(*((void **)a1 + 11), 0, *((_QWORD *)a1 + 12));
  memset((char *)a1 + 104, 0, 0x30uLL);
  *((_QWORD *)a1 + 19) = 0LL;
  *((_QWORD *)a1 + 20) = 0LL;
  *((_QWORD *)a1 + 21) = 0LL;
}

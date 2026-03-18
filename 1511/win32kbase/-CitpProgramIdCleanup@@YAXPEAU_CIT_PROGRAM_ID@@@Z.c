/*
 * XREFs of ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0050314
 * Callers:
 *     CitProcessCallout @ 0x1C0044D54 (CitProcessCallout.c)
 *     ?CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C00E4478 (-CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C00E4498 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C00E4B28 (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

void __fastcall CitpProgramIdCleanup(struct _CIT_PROGRAM_ID *a1)
{
  if ( *(_QWORD *)a1 )
  {
    Win32FreePool();
    *(_QWORD *)a1 = 0LL;
  }
  if ( *((_QWORD *)a1 + 1) )
  {
    Win32FreePool();
    *((_QWORD *)a1 + 1) = 0LL;
  }
}

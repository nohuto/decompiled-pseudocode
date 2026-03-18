/*
 * XREFs of ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C000E744
 * Callers:
 *     CitProcessCallout @ 0x1C0013014 (CitProcessCallout.c)
 *     ?CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C00F63C4 (-CitpProgDataCleanup@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C00F63E4 (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall CitpProgramIdCleanup(struct _CIT_PROGRAM_ID *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)a1;
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *((_QWORD *)a1 + 1);
  if ( v3 )
  {
    Win32FreePool(v3);
    *((_QWORD *)a1 + 1) = 0LL;
  }
}

/*
 * XREFs of ?Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z @ 0x1C00E5F6C
 * Callers:
 *     ??$ReadBaseUseData@U_CIT_SYSTEM_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@PEBU_CIT_PERSISTED_BASE_DATA@@@Z @ 0x1C00E38CC (--$ReadBaseUseData@U_CIT_SYSTEM_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@PEBU_CIT_PERS.c)
 *     ??$ReadBaseUseData@U_CIT_USE_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@PEBU_CIT_PERSISTED_BASE_DATA@@@Z @ 0x1C00E39A8 (--$ReadBaseUseData@U_CIT_USE_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@PEBU_CIT_PERSISTED_.c)
 *     ?CitPersistedDataValidate@@YA_NPEBXIPEAI@Z @ 0x1C00E3B80 (-CitPersistedDataValidate@@YA_NPEBXIPEAI@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E51B4 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 *     ?ReadOverflowUseData@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@@Z @ 0x1C00E5FEC (-ReadOverflowUseData@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@@Z.c)
 *     ?ReadProgramEntry@CIT_DATA_READER@@QEAAXIPEAU_CIT_PERSISTED_PROGRAM_ENTRY@@@Z @ 0x1C00E60A4 (-ReadProgramEntry@CIT_DATA_READER@@QEAAXIPEAU_CIT_PERSISTED_PROGRAM_ENTRY@@@Z.c)
 *     ?ReadProgramId@CIT_DATA_READER@@QEAAXIPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00E6140 (-ReadProgramId@CIT_DATA_READER@@QEAAXIPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?ReadProgramUseData@CIT_DATA_READER@@QEAAXIPEAU_CIT_USE_DATA@@@Z @ 0x1C00E61EC (-ReadProgramUseData@CIT_DATA_READER@@QEAAXIPEAU_CIT_USE_DATA@@@Z.c)
 *     ?ReadSystemData@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@@Z @ 0x1C00E6278 (-ReadSystemData@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z @ 0x1C00E63B8 (-ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z.c)
 */

char __fastcall CIT_DATA_READER::Read(
        CIT_DATA_READER *this,
        char *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  unsigned int v10; // r11d

  v6 = a5;
  if ( !CIT_DATA_READER::ValidateRange(this, a4, a5, a6) )
    return 0;
  if ( a3 < a5 )
    v6 = a3;
  memmove(a2, (const void *)(*(_QWORD *)this + v10), (unsigned int)v6);
  if ( a3 > (unsigned int)v6 )
    memset(&a2[v6], 0, a3 - (unsigned int)v6);
  return 1;
}

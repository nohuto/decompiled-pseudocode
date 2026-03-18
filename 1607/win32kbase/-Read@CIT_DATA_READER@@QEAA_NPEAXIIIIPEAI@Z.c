/*
 * XREFs of ?Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z @ 0x1C00F7DAC
 * Callers:
 *     ??$ReadBaseUseData@U_CIT_SYSTEM_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@PEBU_CIT_PERSISTED_BASE_DATA@@@Z @ 0x1C00F56EC (--$ReadBaseUseData@U_CIT_SYSTEM_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@PEBU_CIT_PERS.c)
 *     ??$ReadBaseUseData@U_CIT_USE_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@PEBU_CIT_PERSISTED_BASE_DATA@@@Z @ 0x1C00F57C8 (--$ReadBaseUseData@U_CIT_USE_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@PEBU_CIT_PERSISTED_.c)
 *     ?CitPersistedDataValidate@@YA_NPEBXIPEAI@Z @ 0x1C00F5B10 (-CitPersistedDataValidate@@YA_NPEBXIPEAI@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00F70F0 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 *     ?ReadOverflowUseData@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@@Z @ 0x1C00F7E38 (-ReadOverflowUseData@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@@Z.c)
 *     ?ReadProgramEntry@CIT_DATA_READER@@QEAAXIPEAU_CIT_PERSISTED_PROGRAM_ENTRY@@@Z @ 0x1C00F7EF0 (-ReadProgramEntry@CIT_DATA_READER@@QEAAXIPEAU_CIT_PERSISTED_PROGRAM_ENTRY@@@Z.c)
 *     ?ReadProgramId@CIT_DATA_READER@@QEAAXIPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00F7F8C (-ReadProgramId@CIT_DATA_READER@@QEAAXIPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?ReadProgramUseData@CIT_DATA_READER@@QEAAXIPEAU_CIT_USE_DATA@@@Z @ 0x1C00F8038 (-ReadProgramUseData@CIT_DATA_READER@@QEAAXIPEAU_CIT_USE_DATA@@@Z.c)
 *     ?ReadSystemData@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@@Z @ 0x1C00F80C4 (-ReadSystemData@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z @ 0x1C00F8180 (-ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z.c)
 */

char __fastcall CIT_DATA_READER::Read(
        CIT_DATA_READER *this,
        char *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v9; // r8d
  unsigned int v10; // r11d
  __int64 v11; // rdi

  if ( !CIT_DATA_READER::ValidateRange(this, a4, a5, a6) )
    return 0;
  v11 = a3;
  if ( a3 > v9 )
    v11 = v9;
  memmove(a2, (const void *)(*(_QWORD *)this + v10), (unsigned int)v11);
  if ( a3 > (unsigned int)v11 )
    memset(&a2[v11], 0, a3 - (unsigned int)v11);
  return 1;
}

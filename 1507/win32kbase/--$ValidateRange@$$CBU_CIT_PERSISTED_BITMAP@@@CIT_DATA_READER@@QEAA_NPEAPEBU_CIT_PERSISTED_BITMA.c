/*
 * XREFs of ??$ValidateRange@$$CBU_CIT_PERSISTED_BITMAP@@@CIT_DATA_READER@@QEAA_NPEAPEBU_CIT_PERSISTED_BITMAP@@IIIIPEAI@Z @ 0x1C00E277C
 * Callers:
 *     ??$CitBaseUseDataValidate@UCIT_PERSISTED_SYSTEM_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED_HEADER@@PEAUCIT_PERSISTED_SYSTEM_DATA@@IPEAI@Z @ 0x1C00E147C (--$CitBaseUseDataValidate@UCIT_PERSISTED_SYSTEM_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSIS.c)
 *     ??$CitBaseUseDataValidate@UCIT_PERSISTED_USE_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED_HEADER@@PEAUCIT_PERSISTED_USE_DATA@@IPEAI@Z @ 0x1C00E15F0 (--$CitBaseUseDataValidate@UCIT_PERSISTED_USE_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED.c)
 *     ??$ReadBaseUseData@U_CIT_SYSTEM_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@PEBU_CIT_PERSISTED_BASE_DATA@@@Z @ 0x1C00E25CC (--$ReadBaseUseData@U_CIT_SYSTEM_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@PEBU_CIT_PERS.c)
 *     ??$ReadBaseUseData@U_CIT_USE_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@PEBU_CIT_PERSISTED_BASE_DATA@@@Z @ 0x1C00E26A8 (--$ReadBaseUseData@U_CIT_USE_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@PEBU_CIT_PERSISTED_.c)
 * Callees:
 *     ?ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z @ 0x1C00E49AC (-ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z.c)
 */

char __fastcall CIT_DATA_READER::ValidateRange<_CIT_PERSISTED_BITMAP const>(
        CIT_DATA_READER *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int *a7)
{
  __int64 v7; // rdi
  unsigned int v10; // r8d
  _QWORD *v11; // r11

  v7 = a4;
  if ( CIT_DATA_READER::ValidateRange(a1, a4, a5, 4u) )
  {
    if ( a3 < v10 )
      v10 = a3;
    *a7 = v10;
    *v11 = *(_QWORD *)a1 + v7;
    return 1;
  }
  else
  {
    *a7 = 0;
    *v11 = 0LL;
    return 0;
  }
}

/*
 * XREFs of ?ReadProgramUseData@CIT_DATA_READER@@QEAAXIPEAU_CIT_USE_DATA@@@Z @ 0x1C00E61EC
 * Callers:
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E51B4 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ??$ReadBaseUseData@U_CIT_USE_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@PEBU_CIT_PERSISTED_BASE_DATA@@@Z @ 0x1C00E39A8 (--$ReadBaseUseData@U_CIT_USE_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@PEBU_CIT_PERSISTED_.c)
 *     ?Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z @ 0x1C00E5F6C (-Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z.c)
 *     ?ReadProgramEntry@CIT_DATA_READER@@QEAAXIPEAU_CIT_PERSISTED_PROGRAM_ENTRY@@@Z @ 0x1C00E60A4 (-ReadProgramEntry@CIT_DATA_READER@@QEAAXIPEAU_CIT_PERSISTED_PROGRAM_ENTRY@@@Z.c)
 */

void __fastcall CIT_DATA_READER::ReadProgramUseData(CIT_DATA_READER *this, unsigned int a2, struct _CIT_USE_DATA *a3)
{
  unsigned int v6[6]; // [rsp+40h] [rbp-38h] BYREF

  memset(a3, 0, 0x58uLL);
  CIT_DATA_READER::ReadProgramEntry(this, a2, (struct _CIT_PERSISTED_PROGRAM_ENTRY *)v6);
  CIT_DATA_READER::Read(this, (char *)v6, 0x18u, v6[1], v6[3], 4u);
  CIT_DATA_READER::ReadBaseUseData<_CIT_USE_DATA>(this, a3, v6);
}

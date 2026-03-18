/*
 * XREFs of ?ReadSystemData@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@@Z @ 0x1C00E6278
 * Callers:
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E51B4 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ??$ReadBaseUseData@U_CIT_SYSTEM_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@PEBU_CIT_PERSISTED_BASE_DATA@@@Z @ 0x1C00E38CC (--$ReadBaseUseData@U_CIT_SYSTEM_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_SYSTEM_DATA@@PEBU_CIT_PERS.c)
 *     ?Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z @ 0x1C00E5F6C (-Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z.c)
 */

void __fastcall CIT_DATA_READER::ReadSystemData(CIT_DATA_READER *this, struct _CIT_SYSTEM_DATA *a2)
{
  unsigned int v4[8]; // [rsp+40h] [rbp-98h] BYREF
  char v5[32]; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v6; // [rsp+80h] [rbp-58h]
  unsigned int v7; // [rsp+84h] [rbp-54h]

  memset(a2, 0, 0xD8uLL);
  CIT_DATA_READER::Read(this, v5, 0x58u, 0, *(_DWORD *)(*(_QWORD *)this + 80LL), 8u);
  CIT_DATA_READER::Read(this, (char *)v4, 0x18u, v7, v6, 4u);
  CIT_DATA_READER::ReadBaseUseData<_CIT_SYSTEM_DATA>(this, (char *)a2, v4);
}

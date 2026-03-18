/*
 * XREFs of ?ReadOverflowUseData@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@@Z @ 0x1C00E5FEC
 * Callers:
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E51B4 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ??$ReadBaseUseData@U_CIT_USE_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@PEBU_CIT_PERSISTED_BASE_DATA@@@Z @ 0x1C00E39A8 (--$ReadBaseUseData@U_CIT_USE_DATA@@@CIT_DATA_READER@@QEAAXPEAU_CIT_USE_DATA@@PEBU_CIT_PERSISTED_.c)
 *     ?Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z @ 0x1C00E5F6C (-Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z.c)
 */

void __fastcall CIT_DATA_READER::ReadOverflowUseData(CIT_DATA_READER *this, struct _CIT_USE_DATA *a2)
{
  unsigned int v4[8]; // [rsp+40h] [rbp-98h] BYREF
  char v5[40]; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v6; // [rsp+88h] [rbp-50h]
  unsigned int v7; // [rsp+8Ch] [rbp-4Ch]

  memset(a2, 0, 0x58uLL);
  CIT_DATA_READER::Read(this, v5, 0x58u, 0, *(_DWORD *)(*(_QWORD *)this + 80LL), 8u);
  CIT_DATA_READER::Read(this, (char *)v4, 0x18u, v7, v6, 4u);
  CIT_DATA_READER::ReadBaseUseData<_CIT_USE_DATA>(this, a2, v4);
}

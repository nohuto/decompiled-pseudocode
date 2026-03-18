/*
 * XREFs of ?ReadProgramId@CIT_DATA_READER@@QEAAXIPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00E6140
 * Callers:
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E51B4 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z @ 0x1C00E5F6C (-Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z.c)
 *     ?ReadProgramEntry@CIT_DATA_READER@@QEAAXIPEAU_CIT_PERSISTED_PROGRAM_ENTRY@@@Z @ 0x1C00E60A4 (-ReadProgramEntry@CIT_DATA_READER@@QEAAXIPEAU_CIT_PERSISTED_PROGRAM_ENTRY@@@Z.c)
 */

void __fastcall CIT_DATA_READER::ReadProgramId(CIT_DATA_READER *this, unsigned int a2, struct _CIT_PROGRAM_ID *a3)
{
  unsigned int v6; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+48h] [rbp-40h]
  int v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+54h] [rbp-34h]
  int v10; // [rsp+58h] [rbp-30h]

  memset(a3, 0, 0x28uLL);
  CIT_DATA_READER::ReadProgramEntry(this, a2, (struct _CIT_PERSISTED_PROGRAM_ENTRY *)&v6);
  CIT_DATA_READER::Read(this, (char *)&v6, 0x1Cu, v6, v7, 4u);
  *((_DWORD *)a3 + 6) = v8;
  *((_DWORD *)a3 + 7) = v9;
  *((_DWORD *)a3 + 8) = v10;
  if ( v6 )
    *(_QWORD *)a3 = *(_QWORD *)this + v6;
  if ( v7 )
    *((_QWORD *)a3 + 1) = *(_QWORD *)this + v7;
}

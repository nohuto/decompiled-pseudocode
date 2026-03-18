/*
 * XREFs of ?ReadProgramEntry@CIT_DATA_READER@@QEAAXIPEAU_CIT_PERSISTED_PROGRAM_ENTRY@@@Z @ 0x1C00E60A4
 * Callers:
 *     ?ReadProgramId@CIT_DATA_READER@@QEAAXIPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00E6140 (-ReadProgramId@CIT_DATA_READER@@QEAAXIPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?ReadProgramUseData@CIT_DATA_READER@@QEAAXIPEAU_CIT_USE_DATA@@@Z @ 0x1C00E61EC (-ReadProgramUseData@CIT_DATA_READER@@QEAAXIPEAU_CIT_USE_DATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ?Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z @ 0x1C00E5F6C (-Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z.c)
 */

void __fastcall CIT_DATA_READER::ReadProgramEntry(
        CIT_DATA_READER *this,
        unsigned int a2,
        struct _CIT_PERSISTED_PROGRAM_ENTRY *a3)
{
  char v6[20]; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v7; // [rsp+54h] [rbp-74h]
  unsigned int v8; // [rsp+58h] [rbp-70h]
  int v9; // [rsp+5Ch] [rbp-6Ch]

  CIT_DATA_READER::Read(this, v6, 0x58u, 0, *(_DWORD *)(*(_QWORD *)this + 80LL), 8u);
  if ( a2 < v8 )
    CIT_DATA_READER::Read(this, (char *)a3, 0x10u, v9 + v7 * a2, v7, 4u);
  else
    *(_QWORD *)a3 = 0LL;
}

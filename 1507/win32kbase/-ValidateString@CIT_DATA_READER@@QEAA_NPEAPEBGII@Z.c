/*
 * XREFs of ?ValidateString@CIT_DATA_READER@@QEAA_NPEAPEBGII@Z @ 0x1C00E49D8
 * Callers:
 *     ?CitPersistedDataValidate@@YA_NPEBXIPEAI@Z @ 0x1C00E2880 (-CitPersistedDataValidate@@YA_NPEBXIPEAI@Z.c)
 * Callees:
 *     ?ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z @ 0x1C00E49AC (-ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z.c)
 */

char __fastcall CIT_DATA_READER::ValidateString(
        CIT_DATA_READER *this,
        const unsigned __int16 **a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned int v7; // r8d
  _QWORD *v9; // r11
  __int64 v10; // rcx

  v4 = a4;
  v5 = a3;
  v7 = 2 * a4 + 2;
  if ( v7 < a4 )
  {
    *a2 = 0LL;
    return 0;
  }
  if ( !CIT_DATA_READER::ValidateRange(this, v5, v7, 2) )
    return 0;
  v10 = *(_QWORD *)this + v5;
  if ( *(_WORD *)(v10 + 2 * v4) )
    return 0;
  *v9 = v10;
  return 1;
}

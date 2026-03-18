/*
 * XREFs of ?ValidateRange@CIT_DATA_READER@@QEAA_NIII@Z @ 0x1C00F8180
 * Callers:
 *     ??$CitBaseUseDataValidate@UCIT_PERSISTED_SYSTEM_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED_HEADER@@PEAUCIT_PERSISTED_SYSTEM_DATA@@IPEAI@Z @ 0x1C00F5078 (--$CitBaseUseDataValidate@UCIT_PERSISTED_SYSTEM_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSIS.c)
 *     ??$CitBaseUseDataValidate@UCIT_PERSISTED_USE_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED_HEADER@@PEAUCIT_PERSISTED_USE_DATA@@IPEAI@Z @ 0x1C00F51EC (--$CitBaseUseDataValidate@UCIT_PERSISTED_USE_DATA@@@@YA_NPEAUCIT_DATA_READER@@PEBU_CIT_PERSISTED.c)
 *     ??$ValidateRange@$$CBU_CIT_PERSISTED_BITMAP@@@CIT_DATA_READER@@QEAA_NPEAPEBU_CIT_PERSISTED_BITMAP@@IIIIPEAI@Z @ 0x1C00F589C (--$ValidateRange@$$CBU_CIT_PERSISTED_BITMAP@@@CIT_DATA_READER@@QEAA_NPEAPEBU_CIT_PERSISTED_BITMA.c)
 *     ?CitPersistedDataValidate@@YA_NPEBXIPEAI@Z @ 0x1C00F5B10 (-CitPersistedDataValidate@@YA_NPEBXIPEAI@Z.c)
 *     ?Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z @ 0x1C00F7DAC (-Read@CIT_DATA_READER@@QEAA_NPEAXIIIIPEAI@Z.c)
 *     ?ValidateString@CIT_DATA_READER@@QEAA_NPEAPEBGII@Z @ 0x1C00F81AC (-ValidateString@CIT_DATA_READER@@QEAA_NPEAPEBGII@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CIT_DATA_READER::ValidateRange(CIT_DATA_READER *this, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  bool result; // al

  result = 0;
  if ( ((a4 - 1) & a2) == 0 )
  {
    v4 = *((_DWORD *)this + 2);
    v5 = a2 + a3;
    if ( a2 <= v4 && a3 <= v4 && v5 <= v4 && v5 >= a2 )
      return 1;
  }
  return result;
}

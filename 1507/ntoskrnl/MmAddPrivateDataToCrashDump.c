/*
 * XREFs of MmAddPrivateDataToCrashDump @ 0x14040308C
 * Callers:
 *     IopLiveDumpMarkImportantDumpData @ 0x1403FF52C (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1403FF7D8 (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x140218688 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall MmAddPrivateDataToCrashDump(__int64 (__fastcall **a1)(_QWORD, _QWORD, __int64), char a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 *v6; // r14
  __int64 v7; // rbp
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 *v11; // rdi
  int v12; // eax

  v2 = 0;
  if ( (a2 & 1) != 0 )
  {
    v5 = MmAddRangeToCrashDump((unsigned __int64)a1, MmPfnDatabase, 48 * (qword_14034EC10 + 1));
    if ( v5 < 0 )
      v2 = v5;
  }
  if ( (a2 & 2) != 0 && (_DWORD)KeNumberProcessors_0 )
  {
    v6 = KiProcessorBlock;
    v7 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v8 = (*a1)(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v6++ + 8) + 184LL) + 40LL) >> 12, 1LL);
      if ( v8 < 0 )
        v2 = v8;
      --v7;
    }
    while ( v7 );
  }
  if ( (a2 & 4) != 0 )
  {
    v9 = MmAddRangeToCrashDump(
           (unsigned __int64)a1,
           (unsigned __int64)PsNtosImageBase,
           PsNtosImageEnd - (_QWORD)PsNtosImageBase);
    if ( v9 < 0 )
      v2 = v9;
  }
  if ( (a2 & 8) != 0 )
  {
    v10 = MmAddRangeToCrashDump(
            (unsigned __int64)a1,
            (unsigned __int64)PsHalImageBase,
            PsHalImageEnd - (_QWORD)PsHalImageBase);
    if ( v10 < 0 )
      v2 = v10;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v11 = (__int64 *)qword_14034FC10;
    while ( v11 != &qword_14034FC10 )
    {
      v12 = MmAddRangeToCrashDump((unsigned __int64)a1, (unsigned __int64)(v11 - 18), 8000LL);
      v11 = (__int64 *)*v11;
      if ( v12 < 0 )
        v2 = v12;
    }
  }
  return v2;
}

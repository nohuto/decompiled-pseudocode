/*
 * XREFs of MmSnapTriageDumpInformation @ 0x1401E7E6C
 * Callers:
 *     IoWriteCrashDump @ 0x1401C645C (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401C7CC4 (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x1400A8750 (HvlQueryVsmConnection.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiAddTriageDumpPtes @ 0x1401E7814 (MiAddTriageDumpPtes.c)
 */

__int64 __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int16 *v5; // rbx
  __int64 v6; // rdi

  memset(&MiTriageDumpData, 0, 0x38uLL);
  MiTriageDumpData = qword_1403243C0;
  dword_140306D68 = dword_140327168;
  dword_140306D6C = dword_140327164;
  dword_140306D70 = dword_14032716C;
  dword_140306D74 = dword_140327170;
  dword_140306D78 = dword_14032715C;
  qword_140306D80 = KeFeatureBits;
  dword_140306D88 = MEMORY[0xFFFFF78000000240];
  dword_140306D8C = MiFlags;
  HvlQueryVsmConnection(qword_140306D90);
  v4 = 4LL;
  do
  {
    MiAddTriageDumpPtes(*a2++);
    --v4;
  }
  while ( v4 );
  v5 = (unsigned __int16 *)&IopRunTimeContextOffsets;
  v6 = 15LL;
  do
  {
    MiAddTriageDumpPtes(*(_QWORD *)(*v5++ + a1));
    --v6;
  }
  while ( v6 );
  return IoAddTriageDumpDataBlock((int)&MiTriageDumpData, 56);
}

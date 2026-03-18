/*
 * XREFs of MmSnapTriageDumpInformation @ 0x1401E8040
 * Callers:
 *     IoWriteCrashDump @ 0x1401C65BC (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401C7E24 (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x1400AA1D0 (HvlQueryVsmConnection.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     MiAddTriageDumpPtes @ 0x1401E79E8 (MiAddTriageDumpPtes.c)
 */

__int64 __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int16 *v5; // rbx
  __int64 v6; // rdi

  memset(&MiTriageDumpData, 0, 0x38uLL);
  MiTriageDumpData = qword_140324380;
  dword_140306D28 = dword_140327128;
  dword_140306D2C = dword_140327124;
  dword_140306D30 = dword_14032712C;
  dword_140306D34 = dword_140327130;
  dword_140306D38 = dword_14032711C;
  qword_140306D40 = KeFeatureBits;
  dword_140306D48 = MEMORY[0xFFFFF78000000240];
  dword_140306D4C = MiFlags;
  HvlQueryVsmConnection(qword_140306D50);
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

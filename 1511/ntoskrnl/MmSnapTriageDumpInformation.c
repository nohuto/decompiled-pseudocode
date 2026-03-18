/*
 * XREFs of MmSnapTriageDumpInformation @ 0x1401D67AC
 * Callers:
 *     IoWriteCrashDump @ 0x1401B87D0 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401B9FF8 (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x1401339B8 (HvlQueryVsmConnection.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiAddTriageDumpPtes @ 0x1401D6128 (MiAddTriageDumpPtes.c)
 */

__int64 __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int16 *v5; // rbx
  __int64 v6; // rdi

  memset(&MiTriageDumpData, 0, 0x38uLL);
  MiTriageDumpData = qword_140300B00;
  dword_1402E1848 = dword_1402FED58;
  dword_1402E184C = dword_1402FED54;
  dword_1402E1850 = dword_1402FED5C;
  dword_1402E1854 = dword_1402FED60;
  dword_1402E1858 = dword_1402FED4C;
  qword_1402E1860 = KeFeatureBits;
  dword_1402E1868 = MEMORY[0xFFFFF78000000240];
  dword_1402E186C = MiFlags;
  HvlQueryVsmConnection(qword_1402E1870);
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

/*
 * XREFs of MmSnapTriageDumpInformation @ 0x140218C8C
 * Callers:
 *     IoWriteCrashDump @ 0x1401F3B80 (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401F5200 (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     HvlQueryVsmConnection @ 0x1401EDE7C (HvlQueryVsmConnection.c)
 *     MiAddTriageDumpPtes @ 0x1402185CC (MiAddTriageDumpPtes.c)
 */

__int64 __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int16 *v5; // rbx
  __int64 v6; // rdi

  memset(&MiTriageDumpData, 0, 0x38uLL);
  MiTriageDumpData = qword_140354A40;
  dword_140331CC8 = dword_14034F20C;
  dword_140331CCC = dword_14034F208;
  dword_140331CD0 = dword_14034F210;
  dword_140331CD4 = dword_14034F214;
  dword_140331CD8 = dword_14034F200;
  qword_140331CE0 = KeFeatureBits;
  dword_140331CE8 = MEMORY[0xFFFFF78000000240];
  dword_140331CEC = MiFlags;
  HvlQueryVsmConnection(qword_140331CF0);
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

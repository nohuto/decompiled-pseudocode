/*
 * XREFs of C3Idle @ 0x1C00023F0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00046A0 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00046F4 (WriteGenAddr.c)
 */

__int64 __fastcall C3Idle(__int64 a1)
{
  unsigned int GenAddr; // eax
  unsigned int v3; // eax
  unsigned int v4; // ebx

  _InterlockedExchange(&ProcBmRldSet, 1);
  GenAddr = ReadGenAddr(&dword_1C0009A9C);
  WriteGenAddr(&dword_1C0009A9C, GenAddr | 2LL);
  if ( qword_1C0009AAC )
  {
    v3 = ReadGenAddr(&dword_1C0009AA8);
    WriteGenAddr(&dword_1C0009AA8, v3 | 2LL);
  }
  v4 = ReadGenAddr(&dword_1C0009AB4);
  WriteGenAddr(&dword_1C0009AB4, v4 | 1LL);
  ReadGenAddr(a1);
  return WriteGenAddr(&dword_1C0009AB4, v4);
}

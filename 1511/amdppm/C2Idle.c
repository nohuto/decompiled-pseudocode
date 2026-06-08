/*
 * XREFs of C2Idle @ 0x1C00022F0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00046A0 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00046F4 (WriteGenAddr.c)
 */

__int64 __fastcall C2Idle(__int64 a1)
{
  int GenAddr; // eax
  int v3; // eax

  if ( _InterlockedExchange(&ProcBmRldSet, 0) == 1 )
  {
    GenAddr = ReadGenAddr(&dword_1C0009A9C);
    WriteGenAddr(&dword_1C0009A9C, GenAddr & 0xFFFFFFFD);
    if ( qword_1C0009AAC )
    {
      v3 = ReadGenAddr(&dword_1C0009AA8);
      WriteGenAddr(&dword_1C0009AA8, v3 & 0xFFFFFFFD);
    }
  }
  return ReadGenAddr(a1);
}

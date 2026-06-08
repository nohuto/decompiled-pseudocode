/*
 * XREFs of C2Idle @ 0x1C0005B00
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0001388 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00013DC (WriteGenAddr.c)
 */

unsigned __int64 __fastcall C2Idle(__int64 a1)
{
  int GenAddr; // eax
  int v3; // eax

  if ( _InterlockedExchange(&ProcBmRldSet, 0) == 1 )
  {
    GenAddr = ReadGenAddr((__int64)&dword_1C000E3FC);
    WriteGenAddr(&dword_1C000E3FC, GenAddr & 0xFFFFFFFD);
    if ( qword_1C000E40C )
    {
      v3 = ReadGenAddr((__int64)&dword_1C000E408);
      WriteGenAddr(&dword_1C000E408, v3 & 0xFFFFFFFD);
    }
  }
  return ReadGenAddr(a1);
}

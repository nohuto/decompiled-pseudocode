/*
 * XREFs of C3Idle @ 0x1C0005B80
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0001388 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00013DC (WriteGenAddr.c)
 */

void __fastcall C3Idle(__int64 a1)
{
  unsigned int GenAddr; // eax
  unsigned int v3; // eax
  unsigned int v4; // ebx

  _InterlockedExchange(&ProcBmRldSet, 1);
  GenAddr = ReadGenAddr((__int64)&dword_1C000E3FC);
  WriteGenAddr(&dword_1C000E3FC, GenAddr | 2LL);
  if ( qword_1C000E40C )
  {
    v3 = ReadGenAddr((__int64)&dword_1C000E408);
    WriteGenAddr(&dword_1C000E408, v3 | 2LL);
  }
  v4 = ReadGenAddr((__int64)&dword_1C000E414);
  WriteGenAddr(&dword_1C000E414, v4 | 1LL);
  ReadGenAddr(a1);
  WriteGenAddr(&dword_1C000E414, v4);
}

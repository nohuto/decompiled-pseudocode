/*
 * XREFs of C3IdleCheck @ 0x1C0005C20
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0001388 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00013DC (WriteGenAddr.c)
 */

__int64 C3IdleCheck()
{
  unsigned int v0; // ebx
  unsigned __int8 GenAddr; // di
  unsigned __int8 v2; // al

  v0 = 0;
  GenAddr = ReadGenAddr((__int64)&dword_1C000E3E4);
  v2 = 0;
  if ( qword_1C000E3F4 )
    v2 = ReadGenAddr((__int64)&dword_1C000E3F0);
  if ( ((GenAddr | v2) & 0x10) != 0 )
  {
    WriteGenAddr(&dword_1C000E3E4, 16LL);
    if ( qword_1C000E3F4 )
      WriteGenAddr(&dword_1C000E3F0, 16LL);
    return (unsigned int)-1073741823;
  }
  return v0;
}

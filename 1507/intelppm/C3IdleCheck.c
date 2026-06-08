/*
 * XREFs of C3IdleCheck @ 0x1C00044B0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C000346C (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00035CC (WriteGenAddr.c)
 */

__int64 C3IdleCheck()
{
  unsigned int v0; // ebx
  unsigned __int8 GenAddr; // di
  unsigned __int8 v2; // al

  v0 = 0;
  GenAddr = ReadGenAddr((__int64)&dword_1C000DF24);
  v2 = 0;
  if ( qword_1C000DF34 )
    v2 = ReadGenAddr((__int64)&dword_1C000DF30);
  if ( ((GenAddr | v2) & 0x10) != 0 )
  {
    WriteGenAddr(&dword_1C000DF24, 16LL);
    if ( qword_1C000DF34 )
      WriteGenAddr(&dword_1C000DF30, 16LL);
    return (unsigned int)-1073741823;
  }
  return v0;
}

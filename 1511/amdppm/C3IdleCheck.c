/*
 * XREFs of C3IdleCheck @ 0x1C0002370
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00046A0 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00046F4 (WriteGenAddr.c)
 */

__int64 C3IdleCheck()
{
  unsigned int v0; // ebx
  unsigned __int8 GenAddr; // di
  unsigned __int8 v2; // al

  v0 = 0;
  GenAddr = ReadGenAddr(&dword_1C0009A84);
  v2 = 0;
  if ( qword_1C0009A94 )
    v2 = ReadGenAddr(&dword_1C0009A90);
  if ( ((GenAddr | v2) & 0x10) != 0 )
  {
    WriteGenAddr(&dword_1C0009A84, 16LL);
    if ( qword_1C0009A94 )
      WriteGenAddr(&dword_1C0009A90, 16LL);
    return (unsigned int)-1073741823;
  }
  return v0;
}

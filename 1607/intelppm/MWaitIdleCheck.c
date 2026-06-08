/*
 * XREFs of MWaitIdleCheck @ 0x1C0004110
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C000132C (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0001380 (WriteGenAddr.c)
 */

__int64 __fastcall MWaitIdleCheck(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int8 GenAddr; // di
  unsigned __int8 v3; // al

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 16) & 2) != 0 )
  {
    GenAddr = ReadGenAddr((__int64)&dword_1C000F434);
    v3 = 0;
    if ( qword_1C000F444 )
      v3 = ReadGenAddr((__int64)&dword_1C000F440);
    if ( ((GenAddr | v3) & 0x10) != 0 )
    {
      WriteGenAddr(&dword_1C000F434, 16LL);
      if ( qword_1C000F444 )
        WriteGenAddr(&dword_1C000F440, 16LL);
      return (unsigned int)-1073741823;
    }
  }
  return v1;
}

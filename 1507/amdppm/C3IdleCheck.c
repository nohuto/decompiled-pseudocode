/*
 * XREFs of C3IdleCheck @ 0x1C00026E0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0004A60 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0004AB4 (WriteGenAddr.c)
 */

__int64 __fastcall C3IdleCheck(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned __int8 GenAddr; // di
  unsigned __int8 v5; // al

  v2 = 0;
  GenAddr = ReadGenAddr(&dword_1C00098D4, a2);
  v5 = 0;
  if ( qword_1C00098E4 )
    v5 = ReadGenAddr(&dword_1C00098E0, v3);
  if ( ((GenAddr | v5) & 0x10) != 0 )
  {
    WriteGenAddr(&dword_1C00098D4, 16LL);
    if ( qword_1C00098E4 )
      WriteGenAddr(&dword_1C00098E0, 16LL);
    return (unsigned int)-1073741823;
  }
  return v2;
}

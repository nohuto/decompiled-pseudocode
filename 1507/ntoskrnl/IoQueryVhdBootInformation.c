/*
 * XREFs of IoQueryVhdBootInformation @ 0x1405C2010
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall IoQueryVhdBootInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // edi

  v5 = 0;
  *a4 = 0;
  v6 = dword_1403223B0;
  if ( a3 < (unsigned int)dword_1403223B0 )
    v5 = -1073741789;
  else
    memmove(a2, off_1403223C8, (unsigned int)dword_1403223B0);
  *a4 = v6;
  return v5;
}

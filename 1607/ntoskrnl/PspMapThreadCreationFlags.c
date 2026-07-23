/*
 * XREFs of PspMapThreadCreationFlags @ 0x140457EFC
 * Callers:
 *     PspCreateThread @ 0x140457BE8 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x140459A10 (NtCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspMapThreadCreationFlags(char a1, _DWORD *a2)
{
  __int64 result; // rax

  *a2 = 0;
  result = (unsigned int)*a2;
  if ( (a1 & 1) != 0 )
    result = 1LL;
  *a2 = result;
  if ( (a1 & 2) != 0 )
    *a2 |= 2u;
  if ( (a1 & 4) != 0 )
    *a2 |= 4u;
  if ( (a1 & 0x10) != 0 )
    *a2 |= 0x80u;
  return result;
}

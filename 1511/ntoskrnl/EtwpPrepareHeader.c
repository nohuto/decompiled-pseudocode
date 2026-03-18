/*
 * XREFs of EtwpPrepareHeader @ 0x1404CAD9C
 * Callers:
 *     EtwpAddLogHeader @ 0x1404C79EC (EtwpAddLogHeader.c)
 *     EtwpFlushBuffer @ 0x1404CACEC (EtwpFlushBuffer.c)
 *     EtwpBufferingModeFlush @ 0x140664ED8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall EtwpPrepareHeader(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v7; // rdx

  v3 = *(_DWORD *)(a2 + 4);
  v4 = 0;
  if ( !v3 )
    v3 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 48) = v3;
  if ( a3 != 1 && v3 == 72 )
    return 2147483682LL;
  *(_WORD *)(a2 + 52) = a3 | 0x20;
  if ( *(_QWORD *)(a1 + 816) )
  {
    v7 = *(unsigned int *)(a2 + 48);
    if ( *(_DWORD *)(a1 + 4) - (int)v7 > 0 )
      memset((void *)(a2 + v7), 255, *(_DWORD *)(a1 + 4) - (int)v7);
  }
  if ( *(_DWORD *)(a2 + 48) == 72 )
    return (unsigned int)-2147483614;
  return v4;
}

/*
 * XREFs of EtwpPrepareHeader @ 0x1404A2090
 * Callers:
 *     EtwpFlushBuffer @ 0x1404A1FE0 (EtwpFlushBuffer.c)
 *     EtwpAddLogHeader @ 0x1404ABC40 (EtwpAddLogHeader.c)
 *     EtwpBufferingModeFlush @ 0x1406E7FB0 (EtwpBufferingModeFlush.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
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

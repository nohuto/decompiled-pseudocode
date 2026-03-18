/*
 * XREFs of ESM_CheckingIfEndpointShouldBeStopped @ 0x1C00391F0
 * Callers:
 *     <none>
 * Callees:
 *     TR_WasDoorbellRungSinceMappingStart @ 0x1C0020B84 (TR_WasDoorbellRungSinceMappingStart.c)
 */

__int64 __fastcall ESM_CheckingIfEndpointShouldBeStopped(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  int v3; // edi

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_BYTE *)(v1 + 37) )
  {
    v2 = *(_QWORD *)(v1 + 136);
    v3 = 1;
    *(_DWORD *)(v2 + 20) = 0;
    if ( *(_DWORD *)(v2 + 8) )
    {
      while ( !(unsigned __int8)TR_WasDoorbellRungSinceMappingStart(*(_QWORD *)(88LL * (unsigned int)(v3 - 1)
                                                                              + *(_QWORD *)(v1 + 136)
                                                                              + 40)) )
      {
        if ( (unsigned int)++v3 > *(_DWORD *)(v2 + 8) )
          return 21LL;
      }
      return 33LL;
    }
    return 21LL;
  }
  if ( !(unsigned __int8)TR_WasDoorbellRungSinceMappingStart(*(_QWORD *)(v1 + 88)) )
    return 21LL;
  return 33LL;
}

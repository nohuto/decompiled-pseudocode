/*
 * XREFs of EtwpPerfectHashFunctionSearch @ 0x140229E24
 * Callers:
 *     EtwpApplyEventIdPayloadFilter @ 0x140229694 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyStackWalkFilter @ 0x140229AE8 (EtwpApplyStackWalkFilter.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpPerfectHashFunctionSearch(__int16 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = (unsigned __int16)(*(_WORD *)(a2 + 2) & __ROR2__(a1, *(_BYTE *)(a2 + 1)));
  if ( a1 == *(_WORD *)(a2 + 4 * v2 + 8) )
    return 1;
  while ( 1 )
  {
    v3 = *(unsigned __int8 *)(a2 + 4 * v2 + 6);
    if ( (_WORD)v3 == 255 )
      break;
    v2 = *(unsigned __int8 *)(a2 + 4 * v2 + 6);
    if ( a1 == *(_WORD *)(a2 + 4 * v3 + 8) )
      return 1;
  }
  return 0;
}

/*
 * XREFs of __GSHandlerCheckCommon @ 0x1C0027028
 * Callers:
 *     __GSHandlerCheck @ 0x1C0027008 (__GSHandlerCheck.c)
 * Callees:
 *     <none>
 */

char __fastcall _GSHandlerCheckCommon(__int64 a1, __int64 a2)
{
  char result; // al

  result = *(_BYTE *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(*(_QWORD *)(a2 + 16) + 8LL) + 3LL);
  if ( (result & 0xF) != 0 )
    return *(_BYTE *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(*(_QWORD *)(a2 + 16) + 8LL) + 3LL) & 0xF0;
  return result;
}

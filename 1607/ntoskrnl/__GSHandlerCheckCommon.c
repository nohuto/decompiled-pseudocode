/*
 * XREFs of __GSHandlerCheckCommon @ 0x1401514B0
 * Callers:
 *     __GSHandlerCheck @ 0x140151490 (__GSHandlerCheck.c)
 *     __GSHandlerCheck_SEH @ 0x140159E38 (__GSHandlerCheck_SEH.c)
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

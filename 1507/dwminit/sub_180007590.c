/*
 * XREFs of sub_180007590 @ 0x180007590
 * Callers:
 *     __GSHandlerCheck @ 0x18000756C (__GSHandlerCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180007590(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 8) + *(unsigned int *)(result + 8);
  if ( (*(_BYTE *)(v3 + 3) & 0xF) != 0 )
    return *(_BYTE *)(v3 + 3) & 0xF0;
  return result;
}

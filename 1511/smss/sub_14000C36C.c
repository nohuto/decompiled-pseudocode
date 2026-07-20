/*
 * XREFs of sub_14000C36C @ 0x14000C36C
 * Callers:
 *     __GSHandlerCheck @ 0x14000C348 (__GSHandlerCheck.c)
 *     __GSHandlerCheck_SEH @ 0x14000C3D8 (__GSHandlerCheck_SEH.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000C36C(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 8) + *(unsigned int *)(result + 8);
  if ( (*(_BYTE *)(v3 + 3) & 0xF) != 0 )
    return *(_BYTE *)(v3 + 3) & 0xF0;
  return result;
}

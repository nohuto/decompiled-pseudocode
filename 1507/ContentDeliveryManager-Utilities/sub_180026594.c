/*
 * XREFs of sub_180026594 @ 0x180026594
 * Callers:
 *     __GSHandlerCheck @ 0x180026570 (__GSHandlerCheck.c)
 *     __GSHandlerCheck_EH @ 0x18002660C (__GSHandlerCheck_EH.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180026594(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 8) + *(unsigned int *)(result + 8);
  if ( (*(_BYTE *)(v3 + 3) & 0xF) != 0 )
    return *(_BYTE *)(v3 + 3) & 0xF0;
  return result;
}
